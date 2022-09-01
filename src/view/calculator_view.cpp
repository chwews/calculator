#include "calculator_view.h"

CalculatorView::CalculatorView(QWidget *parent, chwews::CalculatorController *c)
    : QMainWindow(parent),
      ui(new Ui::CalculatorView),
      _controller(c),
      _inverse_flag(false),
      _resize_flag(false) {
    this->ui->setupUi(this);
    this->ui->display_line->setReadOnly(true);
    this->setFixedSize(340, 505);

    this->_setup_shortcuts();
    this->_setup_plot();
    this->_setup_credit_table();
}

CalculatorView::~CalculatorView() { delete ui; }

Ui::CalculatorView *CalculatorView::get_ui() { return this->ui; }

void CalculatorView::setup_controller(chwews::CalculatorController *c) {
    this->_controller = c;
    QObject::connect(this->ui->delete_symbol_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->left_bracket_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->right_bracket_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->sqrt_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->ln_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->log_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->x_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->mod_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->sin_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->division_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->seven_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->eight_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->nine_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->cos_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->multiplication_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->four_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->five_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->six_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->tan_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->subtraction_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->one_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->two_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->three_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->power_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->addition_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->zero_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->dot_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->graph_button, SIGNAL(clicked()), this, SLOT(resize()));
    QObject::connect(this->ui->answer_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->all_clear_button, SIGNAL(clicked()), this, SLOT(update()));
    QObject::connect(this->ui->inverse_button, SIGNAL(clicked()), this, SLOT(inverse()));
    QObject::connect(this->ui->draw_button, SIGNAL(clicked()), this, SLOT(draw()));

    //  Credit Calculator
    QObject::connect(this->ui->credit_detail_button, SIGNAL(clicked()), this, SLOT(resize()));
    QObject::connect(this->ui->credit_calculate_button, SIGNAL(clicked()), this, SLOT(credit_calculate()));
}

void CalculatorView::update() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button != nullptr) {
        this->ui->display_line->setText(QString::fromStdString(
            this->_controller->process_event(button->text().toStdString(), this->ui->x_enter_box->value())));
    }
}

void CalculatorView::credit_calculate() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button != nullptr) {
        if (this->ui->annuity_radiobutton->isChecked()) {
            this->_show_credit(this->_controller->process_credit(this->ui->totat_credit_spinbox->value(),
                                                                 this->ui->term_spinbox->value(),
                                                                 this->ui->interest_spinbox->value(), true),
                               true);
        } else {
            this->_show_credit(this->_controller->process_credit(this->ui->totat_credit_spinbox->value(),
                                                                 this->ui->term_spinbox->value(),
                                                                 this->ui->interest_spinbox->value(), false),
                               false);
        }
    }
}

void CalculatorView::inverse() {
    if (this->_inverse_flag == false) {
        ui->inverse_button->setStyleSheet(
            "QPushButton:pressed  { background: gainsboro; }"
            "QPushButton {background:white; border-radius: 30px;"
            "max-width: 60px; max-height: 60px;min-width: 60px;min-height: "
            "60px; color: darkred;}");
        this->_inverse_flag = true;
        ui->x_button->setText("e");
        ui->sin_button->setText("asin");
        ui->cos_button->setText("acos");
        ui->tan_button->setText("atan");
    } else {
        ui->inverse_button->setStyleSheet(
            "QPushButton:pressed  { background: gainsboro; }"
            "QPushButton {background:white; border-radius: 30px;"
            "max-width: 60px; max-height: 60px; min-width: 60px;min-height: "
            "60px; color: black;}");
        this->_inverse_flag = false;
        ui->x_button->setText("x");
        ui->sin_button->setText("sin");
        ui->cos_button->setText("cos");
        ui->tan_button->setText("tan");
    }
}

void CalculatorView::resize() {
    if (this->_resize_flag == false) {
        this->setFixedSize(this->width() + 650, this->height());
        this->_resize_flag = true;
    } else {
        this->setFixedSize(this->width() - 650, this->height());
        this->_resize_flag = false;
    }
}

void CalculatorView::draw() {
    std::pair<std::vector<double>, std::vector<double>> values = this->_controller->process_graph();
    for (int g = 0; g < ui->draw_plot->graphCount(); g++) {
        ui->draw_plot->graph(g)->data()->clear();
    }
    ui->draw_plot->replot();
    auto points = new QCPGraph(ui->draw_plot->xAxis, ui->draw_plot->yAxis);
    points->setAdaptiveSampling(false);
    points->setLineStyle(QCPGraph::lsNone);
    points->setScatterStyle(QCPScatterStyle::ssDisc);
    points->setPen(QPen(QBrush(Qt::red), 1));
    for (auto it = values.first.begin(), it1 = values.second.begin();
         it != values.first.end() && it1 != values.second.end(); ++it, ++it1) {
        points->addData(*it, *it1);
    }
    ui->draw_plot->replot();
}

void CalculatorView::_show_credit(std::vector<std::vector<double>> result, bool annuity) {
    if (!result.empty()) {
        if (annuity) {
            this->ui->monthly_payment_value_label->setText(QString::number(result[0][1]));
        } else {
            this->ui->monthly_payment_value_label->setText(QString::number(result[0][0]) + "..." +
                                                           QString::number(result[result.size() - 1][0]));
        }
        this->ui->overpayment_value_label->setText(
            QString::number(result[result.size() - 1][result[result.size() - 1].size() - 2]));
        this->ui->total_payment_value_label->setText(
            QString::number(result[result.size() - 1][result[result.size() - 1].size() - 1]));
        this->_fill_credit_table(result, annuity);
    } else {
        this->ui->monthly_payment_value_label->setText("0");
        this->ui->overpayment_value_label->setText("0");
        this->ui->total_payment_value_label->setText("0");
        this->ui->credit_details_table->setRowCount(0);
    }
}

void CalculatorView::_setup_shortcuts() {
    this->ui->delete_symbol_button->setShortcut(Qt::Key_Backspace);
    auto action = new QAction(this);
    action->setShortcuts({Qt::Key_Equal, Qt::Key_Return, Qt::Key_Enter});
    this->addAction(action);
    QObject::connect(action, &QAction::triggered, this->ui->answer_button,
                     [this]() { this->ui->answer_button->animateClick(); });
    this->ui->left_bracket_button->setShortcut(Qt::Key_ParenLeft);
    this->ui->right_bracket_button->setShortcut(Qt::Key_ParenRight);

    this->ui->zero_button->setShortcut(Qt::Key_0);
    this->ui->one_button->setShortcut(Qt::Key_1);
    this->ui->two_button->setShortcut(Qt::Key_2);
    this->ui->three_button->setShortcut(Qt::Key_3);
    this->ui->four_button->setShortcut(Qt::Key_4);
    this->ui->five_button->setShortcut(Qt::Key_5);
    this->ui->six_button->setShortcut(Qt::Key_6);
    this->ui->seven_button->setShortcut(Qt::Key_7);
    this->ui->eight_button->setShortcut(Qt::Key_8);
    this->ui->nine_button->setShortcut(Qt::Key_9);

    this->ui->addition_button->setShortcut(Qt::Key_Plus);
    this->ui->subtraction_button->setShortcut(Qt::Key_Minus);
    this->ui->multiplication_button->setShortcut(Qt::Key_Asterisk);
    this->ui->division_button->setShortcut(Qt::Key_Slash);
    this->ui->dot_button->setShortcut(Qt::Key_Period);
    this->ui->mod_button->setShortcut(Qt::Key_Percent);
    this->ui->x_button->setShortcut(Qt::Key_X);
    this->ui->power_button->setShortcut(Qt::Key_AsciiCircum);
}

void CalculatorView::_setup_plot() {
    this->ui->draw_plot->setInteraction(QCP::iRangeDrag, true);
    this->ui->draw_plot->setInteraction(QCP::iRangeZoom, true);

    this->ui->draw_plot->addGraph();
    this->ui->draw_plot->xAxis->setRange(-5, 5);
    this->ui->draw_plot->yAxis->setRange(-5, 5);
    this->ui->draw_plot->rescaleAxes();
    QPen pen;
    pen.setWidth(1);
    pen.setColor(QColor(255, 0, 0));
    this->ui->draw_plot->graph(0)->setPen(pen);
    this->ui->draw_plot->replot();
}

void CalculatorView::_setup_credit_table() {
    this->ui->credit_details_table->setColumnCount(6);
    this->ui->credit_details_table->setColumnWidth(0, 35);
    this->ui->credit_details_table->setColumnWidth(1, 151);
    this->ui->credit_details_table->setColumnWidth(2, 108);
    this->ui->credit_details_table->setColumnWidth(3, 108);
    this->ui->credit_details_table->setColumnWidth(4, 108);
    this->ui->credit_details_table->verticalHeader()->setVisible(false);
    this->ui->credit_details_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->ui->credit_details_table->setFocusPolicy(Qt::NoFocus);
    this->ui->credit_details_table->setSelectionMode(QAbstractItemView::NoSelection);
    this->ui->credit_details_table->horizontalHeader()->setSectionsClickable(false);
    this->ui->credit_details_table->setShowGrid(true);
    this->ui->credit_details_table->setHorizontalHeaderLabels(
        {"№", "Month", "Payment", "Main payment", "Percent payment", "Left credit"});
    this->ui->credit_details_table->horizontalHeader()->setStretchLastSection(true);
    this->ui->credit_details_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

void CalculatorView::_fill_credit_table(std::vector<std::vector<double>> result, bool annuity) {
    std::array<QString, 12> months = {"January", "February", "March",     "April",   "May",      "June",
                                      "July",    "August",   "September", "October", "November", "December"};
    time_t now = time(0);
    struct tm tmp = {.tm_mday = 1};
    tm *ltm = &tmp;
    localtime_r(&now, ltm);
    int cur_month = ltm->tm_mon;
    int cur_year = 1900 + ltm->tm_year;
    this->ui->credit_details_table->setRowCount(0);
    for (auto i = 0; i < (int)result.size(); ++i) {
        this->ui->credit_details_table->insertRow(i);
        QTableWidgetItem *numerate = new QTableWidgetItem(QString::number(i + 1));
        numerate->setTextAlignment(Qt::AlignLeft | Qt::AlignCenter);
        this->ui->credit_details_table->setItem(i, 0, numerate);
        if (cur_month == 12) {
            cur_month = 0;
            ++cur_year;
        }
        QTableWidgetItem *date = new QTableWidgetItem(months[cur_month++] + " " + QString::number(cur_year));
        numerate->setTextAlignment(Qt::AlignLeft | Qt::AlignCenter);
        this->ui->credit_details_table->setItem(i, 1, date);
        for (auto j = (annuity ? 1 : 0); j < (int)result[i].size() - 2; ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(QString::number(result[i][j]));
            item->setTextAlignment(Qt::AlignLeft | Qt::AlignCenter);
            this->ui->credit_details_table->setItem(i, j + (annuity ? 1 : 2), item);
        }
    }
}
