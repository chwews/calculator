#pragma once

#include <cmath>
#include <stack>
#include <string>
#include <vector>

// #include "../ui/ui_calculatorview.h"

namespace chwews {
class CalculatorModel {
 public:
    CalculatorModel() = default;
    CalculatorModel(const CalculatorModel& other);
    ~CalculatorModel() = default;

    std::string update(std::string text, double x);
    std::pair<std::vector<double>, std::vector<double>> graph_calculate();
    std::vector<std::vector<double>> credit_calculate(double amount, int term, double rate, bool annuity);

 private:
    class struct_operation {
     public:
        struct_operation(const std::string& n, int pr, int ass, int oc)
            : _name(n), _priority(pr), _associativity(ass), _operand_count(oc) {}
        ~struct_operation() {}
        std::string get_name() { return this->_name; }
        int get_priority() { return this->_priority; }
        int get_associativity() { return this->_associativity; }
        int get_operand_count() { return this->_operand_count; }

     private:
        std::string _name;
        int _priority;
        int _associativity;  // 1 - right-to-left, 0 - left-to-right
        int _operand_count;
    };
    using operation_t = struct_operation;

    std::string _calculate_line;
    std::string _display_line;
    std::stack<std::string> _history;
    std::stack<double> _number_stack;
    std::stack<operation_t> _operation_stack;

    double _calculate_monthly_pay(double amount, double P, int term);
    double _calculate_percent(double amount, double P);
    void _add_action(const std::string& text);
    void _full_clear();
    void _action_clear();
    double _calculate(const double& x);

    void _process_bracket();
    void _process_operation(int& pos);
    double _get_result();
    void _get_digits(int& pos, std::string& string);
    double _get_number(int& pos);
    void _calculate_operation();
    void _unary_calculate();
    void _binary_calculate();
    int _check_priority(const std::string& str, int operands);
    int _check_associativity(const std::string& str, int operands);
    std::string _check_name(int& pos, const int& operands);
    std::string _check_arc(int pos);
    std::string _check_sin(int pos);
    std::string _check_cos(int pos);
    std::string _check_tan(int pos);
    std::string _check_sqrt(int pos);
    std::string _check_ln(int pos);
    std::string _check_log(int pos);

    template <typename T>
    void _clear_stack(std::stack<T>& st) {
        while (!st.empty()) {
            st.pop();
        }
    }
};
}  // namespace chwews
