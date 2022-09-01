#include <QApplication>

#include "controller/calculator_controller.h"
#include "model/calculator_model.h"
#include "view/calculator_view.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalculatorView w;
    chwews::CalculatorModel m;
    chwews::CalculatorController c(&m);
    w.setup_controller(&c);
    w.show();
    return a.exec();
}
