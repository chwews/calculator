#pragma once

#include "../model/calculator_model.h"
#include "../ui/ui_calculatorview.h"

class CalculatorView;

namespace s21 {
class CalculatorController {
 public:
    explicit CalculatorController(s21::CalculatorModel* m) : _model(m) {}
    ~CalculatorController() = default;

    std::string process_event(std::string event, double x_value) {
        return this->_model->update(event, x_value);
    }
    std::pair<std::vector<double>, std::vector<double>> process_graph() {
        return this->_model->graph_calculate();
    }
    std::vector<std::vector<double>> process_credit(double amount, int term, double rate, bool annuity) {
        return this->_model->credit_calculate(amount, term, rate, annuity);
    }

 private:
    s21::CalculatorModel* _model;
};
}  // namespace s21
