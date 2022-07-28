#pragma once

#include <QKeyEvent>
#include <QMainWindow>
#include <array>
#include <ctime>
#include <vector>

#include "../controller/calculator_controller.h"
#include "../ui/ui_calculatorview.h"
#include "qcustomplot.h"

namespace s21 {
class CalculatorController;
}

QT_BEGIN_NAMESPACE
namespace Ui {
class CalculatorView;
}
QT_END_NAMESPACE

class CalculatorView : public QMainWindow {
    Q_OBJECT

 public:
    explicit CalculatorView(QWidget *parent = nullptr, s21::CalculatorController *c = nullptr);
    ~CalculatorView();

    Ui::CalculatorView *get_ui();
    void setup_controller(s21::CalculatorController *c);

 private slots:
    void update();
    void credit_calculate();
    void inverse();
    void resize();
    void draw();

 private:
    Ui::CalculatorView *ui;
    s21::CalculatorController *_controller;
    bool _inverse_flag;
    bool _resize_flag;

    void _show_credit(std::vector<std::vector<double>> result, bool annuity);
    void _setup_shortcuts();
    void _setup_plot();
    void _setup_credit_table();
    void _fill_credit_table(std::vector<std::vector<double>> result, bool annuity);
};
