#include "calculator_model.h"

#include <iostream>

#define S21_NAN 0.0 / 0.0

namespace s21 {
CalculatorModel::CalculatorModel(const CalculatorModel& other)
    : _calculate_line(other._calculate_line),
      _display_line(other._display_line),
      _history(other._history),
      _number_stack(other._number_stack),
      _operation_stack(other._operation_stack) {}

std::string CalculatorModel::update(std::string event, double x) {
    if (event == "AC") {
        this->_full_clear();
    } else if (event.empty()) {
        this->_action_clear();
    } else if (event == "=") {
        this->_calculate_line = this->_display_line;
        this->_display_line = std::to_string(this->_calculate(x));
    } else {
        this->_add_action(event);
    }
    return this->_display_line;
}

std::pair<std::vector<double>, std::vector<double>> CalculatorModel::graph_calculate() {
    std::vector<double> x, y;
    this->_calculate_line = this->_display_line;
    for (double i = -100.0; i <= 100.0; i += 0.002) {
        x.insert(x.begin(), i);
        y.insert(y.begin(), this->_calculate(x[0]));
    }
    return std::make_pair(x, y);
}

std::vector<std::vector<double>> CalculatorModel::credit_calculate(double amount, int term, double rate,
                                                                   bool annuity) {
    std::vector<std::vector<double>> result_vec;
    double P = rate / 100 / 12;
    double total_percent = 0.0;
    double total_payment = amount;
    double monthly = 0.0;

    if (annuity) {
        monthly = this->_calculate_monthly_pay(amount, P, term);
    } else {
        monthly = amount / term;
    }
    while (amount > 0.0000001) {
        std::vector<double> temp_vec;
        double percent = this->_calculate_percent(amount, P);
        total_percent += percent;
        amount -= (annuity ? monthly - percent : monthly);
        temp_vec.push_back(monthly + percent);
        temp_vec.push_back(monthly);
        if (annuity) {
            temp_vec.push_back(monthly - percent);
        }
        temp_vec.push_back(percent);
        temp_vec.push_back(amount > 0.0000001 ? amount : 0.0);
        temp_vec.push_back(total_percent);
        temp_vec.push_back(total_payment + total_percent);
        result_vec.push_back(temp_vec);
    }
    return result_vec;
}

double CalculatorModel::_calculate_monthly_pay(double amount, double P, int term) {
    double result = 0.0;
    this->_calculate_line.clear();
    this->_calculate_line += std::to_string(amount);
    this->_calculate_line += "*(";
    this->_calculate_line += std::to_string(P);
    this->_calculate_line += "+";
    this->_calculate_line += std::to_string(P);
    this->_calculate_line += "/((1+";
    this->_calculate_line += std::to_string(P);
    this->_calculate_line += ")^";
    this->_calculate_line += std::to_string(term);
    this->_calculate_line += "-1))";
    result = this->_calculate(0);
    this->_calculate_line.clear();
    return result;
}

double CalculatorModel::_calculate_percent(double amount, double P) {
    double result = 0.0;
    this->_calculate_line += std::to_string(amount);
    this->_calculate_line += "*";
    this->_calculate_line += std::to_string(P);
    result = this->_calculate(0);
    this->_calculate_line.clear();
    return result;
}

void CalculatorModel::_add_action(const std::string& text) {
    this->_history.push(this->_display_line);
    this->_display_line += text;
}

void CalculatorModel::_full_clear() {
    this->_clear_stack<std::string>(this->_history);
    this->_calculate_line = "";
    this->_display_line = "";
}

void CalculatorModel::_action_clear() {
    if (!this->_history.empty()) {
        this->_display_line = this->_history.top();
        this->_history.pop();
    } else {
        this->_display_line = "";
    }
}

double CalculatorModel::_calculate(const double& x) {
    for (int i = 0; i < (int)this->_calculate_line.size(); ++i) {
        if (this->_calculate_line[i] == '(') {
            std::string ss;
            ss += this->_calculate_line[i];
            operation_t op(ss, 0, 0, 0);
            this->_operation_stack.push(op);
        } else if (this->_calculate_line[i] == ')') {
            this->_process_bracket();
        } else if (this->_calculate_line[i] == 'x') {
            this->_number_stack.push(x);
        } else if (this->_calculate_line[i] >= '0' && this->_calculate_line[i] <= '9') {
            this->_number_stack.push(this->_get_number(i));
        } else {
            this->_process_operation(i);
        }
    }
    double result = this->_get_result();
    this->_clear_stack<double>(this->_number_stack);
    this->_clear_stack<operation_t>(this->_operation_stack);
    return result;
}

void CalculatorModel::_process_bracket() {
    while (!this->_operation_stack.empty() && this->_operation_stack.top().get_name() != "(") {
        this->_calculate_operation();
    }
    if (!this->_operation_stack.empty()) {
        this->_operation_stack.pop();
    } else {
        this->_number_stack.push(S21_NAN);
    }
}

void CalculatorModel::_process_operation(int& pos) {
    int operand_count = 2;
    if (pos == 0 || (!(this->_calculate_line[pos - 1] >= '0' && this->_calculate_line[pos - 1] <= '9') &&
                     this->_calculate_line[pos - 1] != ')' && this->_calculate_line[pos - 1] != 'x')) {
        operand_count = 1;
    }
    std::string str = this->_check_name(pos, operand_count);
    operation_t op(str, this->_check_priority(str, operand_count),
                   this->_check_associativity(str, operand_count), operand_count);
    while (
        !this->_operation_stack.empty() &&
        (this->_operation_stack.top().get_priority() > op.get_priority() ||
         (this->_operation_stack.top().get_priority() == op.get_priority() && op.get_associativity() == 0))) {
        this->_calculate_operation();
        if (this->_number_stack.top() != this->_number_stack.top())
            this->_clear_stack<operation_t>(this->_operation_stack);
    }
    this->_operation_stack.push(op);
}

double CalculatorModel::_get_result() {
    double result = 0.0;
    if (!this->_number_stack.empty()) {
        while (!this->_operation_stack.empty() && this->_number_stack.top() == this->_number_stack.top()) {
            this->_calculate_operation();
        }
        result = this->_number_stack.top();
        this->_number_stack.pop();
        if (!this->_number_stack.empty()) {
            result = S21_NAN;
        }
    } else {
        result = S21_NAN;
    }
    return result;
}

void CalculatorModel::_get_digits(int& pos, std::string& string) {
    while (pos < (int)this->_calculate_line.size() && this->_calculate_line[pos] >= '0' &&
           this->_calculate_line[pos] <= '9') {
        string.push_back(this->_calculate_line[pos++]);
    }
}

double CalculatorModel::_get_number(int& pos) {
    std::string result;
    this->_get_digits(pos, result);
    if (pos < (int)this->_calculate_line.size() && this->_calculate_line[pos] == '.') {
        result.push_back(this->_calculate_line[pos++]);
        this->_get_digits(pos, result);
    }
    if (pos < (int)this->_calculate_line.size() && this->_calculate_line[pos] == 'e') {
        result.push_back(this->_calculate_line[pos++]);
        if (pos < (int)this->_calculate_line.size() &&
            (this->_calculate_line[pos] == '-' || this->_calculate_line[pos] == '+')) {
            result.push_back(this->_calculate_line[pos++]);
            this->_get_digits(pos, result);
        } else {
            result.clear();
        }
    }
    --pos;
    result.shrink_to_fit();
    return result.empty() ? S21_NAN : std::atof(result.c_str());
}

void CalculatorModel::_calculate_operation() {
    if (!this->_operation_stack.empty()) {
        if (this->_operation_stack.top().get_operand_count() == 2) {
            this->_binary_calculate();
        } else {
            this->_unary_calculate();
        }
        if (!this->_number_stack.empty() &&
            (this->_number_stack.top() == 1.0 / 0.0 || this->_number_stack.top() == -1.0 / 0.0)) {
            this->_number_stack.pop();
            this->_number_stack.push(S21_NAN);
        }
    }
}

void CalculatorModel::_unary_calculate() {
    if (!this->_number_stack.empty()) {
        double num = this->_number_stack.top();
        this->_number_stack.pop();
        if (this->_operation_stack.top().get_name() == "+") {
            this->_number_stack.push(num);
        } else if (this->_operation_stack.top().get_name() == "-") {
            this->_number_stack.push(-1 * num);
        } else if (this->_operation_stack.top().get_name() == "sin") {
            this->_number_stack.push(sin(num));
        } else if (this->_operation_stack.top().get_name() == "cos") {
            this->_number_stack.push(cos(num));
        } else if (this->_operation_stack.top().get_name() == "tan") {
            this->_number_stack.push(tan(num));
        } else if (this->_operation_stack.top().get_name() == "asin") {
            this->_number_stack.push(asin(num));
        } else if (this->_operation_stack.top().get_name() == "acos") {
            this->_number_stack.push(acos(num));
        } else if (this->_operation_stack.top().get_name() == "atan") {
            this->_number_stack.push(atan(num));
        } else if (this->_operation_stack.top().get_name() == "sqrt") {
            this->_number_stack.push(sqrt(num));
        } else if (this->_operation_stack.top().get_name() == "ln") {
            this->_number_stack.push(log(num));
        } else if (this->_operation_stack.top().get_name() == "log") {
            this->_number_stack.push(log10(num));
        } else {
            this->_number_stack.push(S21_NAN);
        }
        this->_operation_stack.pop();
    } else {
        this->_number_stack.push(S21_NAN);
    }
}

void CalculatorModel::_binary_calculate() {
    if (!this->_number_stack.empty()) {
        double num1 = this->_number_stack.top();
        this->_number_stack.pop();
        if (!this->_number_stack.empty()) {
            double num2 = this->_number_stack.top();
            this->_number_stack.pop();
            if (this->_operation_stack.top().get_name() == "+") {
                this->_number_stack.push(num2 + num1);
            } else if (this->_operation_stack.top().get_name() == "-") {
                this->_number_stack.push(num2 - num1);
            } else if (this->_operation_stack.top().get_name() == "*") {
                this->_number_stack.push(num2 * num1);
            } else if (this->_operation_stack.top().get_name() == "/") {
                this->_number_stack.push(num2 / num1);
            } else if (this->_operation_stack.top().get_name() == "^") {
                this->_number_stack.push(pow(num2, num1));
            } else if (this->_operation_stack.top().get_name() == "%") {
                this->_number_stack.push(fmod(num2, num1));
            } else {
                this->_number_stack.push(S21_NAN);
            }
            this->_operation_stack.pop();
        } else {
            this->_number_stack.push(S21_NAN);
        }
    } else {
        this->_number_stack.push(S21_NAN);
    }
}

int CalculatorModel::_check_priority(const std::string& str, int operands) {
    int res;
    if (str == "+" || str == "-") {
        res = 1;
        if (operands == 1) {
            res = 5;
        }
    } else if (str == "*" || str == "/" || str == "%") {
        res = 2;
    } else if (str == "^") {
        res = 3;
    } else {
        res = 4;
    }
    return res;
}

int CalculatorModel::_check_associativity(const std::string& str, int operands) {
    int res;
    if (str == "+" || str == "-") {
        res = 0;
        if (operands == 1) {
            res = 1;
        }
    } else if (str == "*" || str == "/" || str == "%" || str == "^") {
        res = 0;
    } else {
        res = 1;
    }
    return res;
}

std::string CalculatorModel::_check_name(int& pos, const int& operands) {
    std::string res;
    if (this->_calculate_line[pos] == '+' || this->_calculate_line[pos] == '-' ||
        this->_calculate_line[pos] == '*' || this->_calculate_line[pos] == '/' ||
        this->_calculate_line[pos] == '^' || this->_calculate_line[pos] == '%') {
        res.push_back(this->_calculate_line[pos]);
    } else if (operands == 1) {
        if (this->_calculate_line[pos] == 'a') {
            res = _check_arc(pos);
        } else if (this->_calculate_line[pos] == 's') {
            res = this->_check_sin(pos);
            if (res.empty()) {
                res = this->_check_sqrt(pos);
            }
        } else if (this->_calculate_line[pos] == 'c') {
            res = this->_check_cos(pos);
        } else if (this->_calculate_line[pos] == 't') {
            res = this->_check_tan(pos);
        } else if (this->_calculate_line[pos] == 'l') {
            res = this->_check_ln(pos);
            if (res.empty()) {
                res = this->_check_log(pos);
            }
        } else {
            res.clear();
        }
    } else {
        res.clear();
    }
    pos += res.empty() ? 0 : res.size() - 1;
    return res;
}

std::string CalculatorModel::_check_arc(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 's' && this->_check_sin(pos).size()) {
        res += this->_check_sin(pos);
    } else if (this->_calculate_line[pos] == 'c' && this->_check_cos(pos).size()) {
        res += this->_check_cos(pos);
    } else if (this->_calculate_line[pos] == 't' && this->_check_tan(pos).size()) {
        res += this->_check_tan(pos);
    } else {
        res.clear();
    }
    return res;
}

std::string CalculatorModel::_check_sin(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 'i') {
        res += this->_calculate_line[pos++];
        if (this->_calculate_line[pos] == 'n') {
            res += this->_calculate_line[pos];
        } else {
            res.clear();
        }
    } else {
        res.clear();
    }
    return res;
}

std::string CalculatorModel::_check_cos(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 'o') {
        res += this->_calculate_line[pos++];
        if (this->_calculate_line[pos] == 's') {
            res += this->_calculate_line[pos];
        } else {
            res.clear();
        }
    } else {
        res.clear();
    }
    return res;
}

std::string CalculatorModel::_check_tan(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 'a') {
        res += this->_calculate_line[pos++];
        if (this->_calculate_line[pos] == 'n') {
            res += this->_calculate_line[pos];
        } else {
            res.clear();
        }
    } else {
        res.clear();
    }
    return res;
}

std::string CalculatorModel::_check_sqrt(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 'q') {
        res += this->_calculate_line[pos++];
        if (this->_calculate_line[pos] == 'r') {
            res += this->_calculate_line[pos++];
            if (this->_calculate_line[pos] == 't') {
                res += this->_calculate_line[pos];
            } else {
                res.clear();
            }
        } else {
            res.clear();
        }
    } else {
        res.clear();
    }
    return res;
}

std::string CalculatorModel::_check_ln(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 'n') {
        res += this->_calculate_line[pos];
    } else {
        res.clear();
    }
    return res;
}

std::string CalculatorModel::_check_log(int pos) {
    std::string res;
    res += this->_calculate_line[pos++];
    if (this->_calculate_line[pos] == 'o') {
        res += this->_calculate_line[pos++];
        if (this->_calculate_line[pos] == 'g') {
            res += this->_calculate_line[pos];
        } else {
            res.clear();
        }
    } else {
        res.clear();
    }
    return res;
}

}  // namespace s21
