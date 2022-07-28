/********************************************************************************
** Form generated from reading UI file 'calculatorview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#pragma once

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

#include "../view/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_CalculatorView {
 public:
    QAction *actionSimple_Caculator;
    QAction *actionCredit_Caculator;
    QAction *actionDeposit_Caculator;
    QWidget *centralwidget;
    QTabWidget *calculator_tab_widget;
    QWidget *simple_calculator_tab;
    QWidget *layoutWidget;
    QGridLayout *simple_calculator_grid;
    QPushButton *eight_button;
    QPushButton *multiplication_button;
    QLineEdit *display_line;
    QPushButton *dot_button;
    QPushButton *all_clear_button;
    QPushButton *subtraction_button;
    QPushButton *one_button;
    QPushButton *addition_button;
    QPushButton *delete_symbol_button;
    QPushButton *cos_button;
    QPushButton *three_button;
    QPushButton *mod_button;
    QPushButton *inverse_button;
    QPushButton *left_bracket_button;
    QPushButton *seven_button;
    QPushButton *power_button;
    QPushButton *tan_button;
    QPushButton *two_button;
    QPushButton *sqrt_button;
    QPushButton *division_button;
    QPushButton *ln_button;
    QPushButton *six_button;
    QPushButton *nine_button;
    QPushButton *answer_button;
    QPushButton *graph_button;
    QPushButton *right_bracket_button;
    QPushButton *five_button;
    QPushButton *sin_button;
    QPushButton *x_button;
    QPushButton *zero_button;
    QPushButton *four_button;
    QPushButton *log_button;
    QCustomPlot *draw_plot;
    QDoubleSpinBox *x_enter_box;
    QLabel *label;
    QPushButton *draw_button;
    QWidget *credit_calculator_tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *credit_detail_button;
    QDoubleSpinBox *totat_credit_spinbox;
    QSpinBox *term_spinbox;
    QDoubleSpinBox *interest_spinbox;
    QLabel *total_credit_label;
    QLabel *interest_label;
    QRadioButton *differentiated_radiobutton;
    QLabel *term_label;
    QRadioButton *annuity_radiobutton;
    QPushButton *credit_calculate_button;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *monthly_payment_label;
    QLabel *total_payment_label;
    QLabel *overpayment_label;
    QLabel *monthly_payment_value_label;
    QLabel *overpayment_value_label;
    QLabel *total_payment_value_label;
    QTableWidget *credit_details_table;
    QWidget *deposit_calculator_tab;
    QLabel *label_2;

    void setupUi(QMainWindow *CalculatorView) {
        if (CalculatorView->objectName().isEmpty())
            CalculatorView->setObjectName(QString::fromUtf8("CalculatorView"));
        CalculatorView->setWindowModality(Qt::NonModal);
        CalculatorView->resize(1000, 505);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorView->sizePolicy().hasHeightForWidth());
        CalculatorView->setSizePolicy(sizePolicy);
        CalculatorView->setMinimumSize(QSize(0, 0));
        CalculatorView->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(28);
        CalculatorView->setFont(font);
        CalculatorView->setStyleSheet(QString::fromUtf8("QMainWindow{background: white;}"));
        CalculatorView->setAnimated(false);
        actionSimple_Caculator = new QAction(CalculatorView);
        actionSimple_Caculator->setObjectName(QString::fromUtf8("actionSimple_Caculator"));
        actionSimple_Caculator->setCheckable(true);
        actionCredit_Caculator = new QAction(CalculatorView);
        actionCredit_Caculator->setObjectName(QString::fromUtf8("actionCredit_Caculator"));
        actionCredit_Caculator->setCheckable(true);
        actionCredit_Caculator->setChecked(true);
        actionDeposit_Caculator = new QAction(CalculatorView);
        actionDeposit_Caculator->setObjectName(QString::fromUtf8("actionDeposit_Caculator"));
        actionDeposit_Caculator->setCheckable(true);
        centralwidget = new QWidget(CalculatorView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setMaximumSize(QSize(10000, 10000));
        calculator_tab_widget = new QTabWidget(centralwidget);
        calculator_tab_widget->setObjectName(QString::fromUtf8("calculator_tab_widget"));
        calculator_tab_widget->setGeometry(QRect(0, 0, 1000, 538));
        calculator_tab_widget->setMinimumSize(QSize(300, 538));
        calculator_tab_widget->setMaximumSize(QSize(1000, 538));
        calculator_tab_widget->setStyleSheet(
            QString::fromUtf8("QTabWidget::pane{color:black;background:white;border-width:1px;}\n"
                              "QTabWidget::tab-bar{background:white; left: 0;}\n"
                              "QTabBar::tab{background:white; color:black;}\n"
                              "QTabBar::tab:selected{background: grey; color:black;}\n"
                              "QTabBar::tab:pressed{background: gainsboro;color:black;}"));
        simple_calculator_tab = new QWidget();
        simple_calculator_tab->setObjectName(QString::fromUtf8("simple_calculator_tab"));
        simple_calculator_tab->setMinimumSize(QSize(0, 0));
        simple_calculator_tab->setMaximumSize(QSize(1000, 16777215));
        simple_calculator_tab->setStyleSheet(QString::fromUtf8("QWidget{background:white;}"));
        layoutWidget = new QWidget(simple_calculator_tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 341, 491));
        simple_calculator_grid = new QGridLayout(layoutWidget);
        simple_calculator_grid->setSpacing(0);
        simple_calculator_grid->setObjectName(QString::fromUtf8("simple_calculator_grid"));
        simple_calculator_grid->setContentsMargins(0, 0, 0, 0);
        eight_button = new QPushButton(layoutWidget);
        eight_button->setObjectName(QString::fromUtf8("eight_button"));
        eight_button->setMaximumSize(QSize(60, 60));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        eight_button->setPalette(palette);
        QFont font1;
        font1.setPointSize(20);
        eight_button->setFont(font1);
        eight_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(eight_button, 3, 1, 1, 1);

        multiplication_button = new QPushButton(layoutWidget);
        multiplication_button->setObjectName(QString::fromUtf8("multiplication_button"));
        multiplication_button->setMaximumSize(QSize(60, 60));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(169, 169, 169, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        multiplication_button->setPalette(palette1);
        multiplication_button->setFont(font1);
        multiplication_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background: darkgray;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(multiplication_button, 3, 4, 1, 1);

        display_line = new QLineEdit(layoutWidget);
        display_line->setObjectName(QString::fromUtf8("display_line"));
        display_line->setMinimumSize(QSize(0, 0));
        display_line->setFont(font1);
        display_line->setStyleSheet(QString::fromUtf8(
            "QLineEdit{ background: white; border-radius: 0%; border: none; color: black; }"));
        display_line->setReadOnly(false);

        simple_calculator_grid->addWidget(display_line, 0, 0, 1, 4);

        dot_button = new QPushButton(layoutWidget);
        dot_button->setObjectName(QString::fromUtf8("dot_button"));
        dot_button->setMaximumSize(QSize(60, 60));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        dot_button->setPalette(palette2);
        dot_button->setFont(font1);
        dot_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(dot_button, 6, 2, 1, 1);

        all_clear_button = new QPushButton(layoutWidget);
        all_clear_button->setObjectName(QString::fromUtf8("all_clear_button"));
        all_clear_button->setMaximumSize(QSize(60, 60));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        all_clear_button->setPalette(palette3);
        all_clear_button->setFont(font1);
        all_clear_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(all_clear_button, 2, 0, 1, 1);

        subtraction_button = new QPushButton(layoutWidget);
        subtraction_button->setObjectName(QString::fromUtf8("subtraction_button"));
        subtraction_button->setMaximumSize(QSize(60, 60));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        subtraction_button->setPalette(palette4);
        subtraction_button->setFont(font1);
        subtraction_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background: darkgray;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(subtraction_button, 4, 4, 1, 1);

        one_button = new QPushButton(layoutWidget);
        one_button->setObjectName(QString::fromUtf8("one_button"));
        one_button->setMaximumSize(QSize(60, 60));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        one_button->setPalette(palette5);
        one_button->setFont(font1);
        one_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(one_button, 5, 0, 1, 1);

        addition_button = new QPushButton(layoutWidget);
        addition_button->setObjectName(QString::fromUtf8("addition_button"));
        addition_button->setMaximumSize(QSize(60, 60));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        addition_button->setPalette(palette6);
        addition_button->setFont(font1);
        addition_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background: darkgray;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(addition_button, 5, 4, 1, 1);

        delete_symbol_button = new QPushButton(layoutWidget);
        delete_symbol_button->setObjectName(QString::fromUtf8("delete_symbol_button"));
        delete_symbol_button->setMaximumSize(QSize(60, 40));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        delete_symbol_button->setPalette(palette7);
        delete_symbol_button->setFont(font1);
        delete_symbol_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              "border:none;\n"
                              " max-width:60px;\n"
                              " max-height:40px;\n"
                              " min-width:60px;\n"
                              " min-height:40px; color: black;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/del_symb4.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_symbol_button->setIcon(icon);
        delete_symbol_button->setIconSize(QSize(40, 40));

        simple_calculator_grid->addWidget(delete_symbol_button, 0, 4, 1, 1);

        cos_button = new QPushButton(layoutWidget);
        cos_button->setObjectName(QString::fromUtf8("cos_button"));
        cos_button->setMaximumSize(QSize(60, 60));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        cos_button->setPalette(palette8);
        cos_button->setFont(font1);
        cos_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(cos_button, 3, 3, 1, 1);

        three_button = new QPushButton(layoutWidget);
        three_button->setObjectName(QString::fromUtf8("three_button"));
        three_button->setMaximumSize(QSize(60, 60));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        three_button->setPalette(palette9);
        three_button->setFont(font1);
        three_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(three_button, 5, 2, 1, 1);

        mod_button = new QPushButton(layoutWidget);
        mod_button->setObjectName(QString::fromUtf8("mod_button"));
        mod_button->setMaximumSize(QSize(60, 60));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        mod_button->setPalette(palette10);
        mod_button->setFont(font1);
        mod_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(mod_button, 2, 2, 1, 1);

        inverse_button = new QPushButton(layoutWidget);
        inverse_button->setObjectName(QString::fromUtf8("inverse_button"));
        inverse_button->setMaximumSize(QSize(60, 60));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        inverse_button->setPalette(palette11);
        inverse_button->setFont(font1);
        inverse_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(inverse_button, 6, 0, 1, 1);

        left_bracket_button = new QPushButton(layoutWidget);
        left_bracket_button->setObjectName(QString::fromUtf8("left_bracket_button"));
        left_bracket_button->setMaximumSize(QSize(60, 60));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        left_bracket_button->setPalette(palette12);
        left_bracket_button->setFont(font1);
        left_bracket_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(left_bracket_button, 1, 0, 1, 1);

        seven_button = new QPushButton(layoutWidget);
        seven_button->setObjectName(QString::fromUtf8("seven_button"));
        seven_button->setMaximumSize(QSize(60, 60));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        seven_button->setPalette(palette13);
        seven_button->setFont(font1);
        seven_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(seven_button, 3, 0, 1, 1);

        power_button = new QPushButton(layoutWidget);
        power_button->setObjectName(QString::fromUtf8("power_button"));
        power_button->setMaximumSize(QSize(60, 60));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        power_button->setPalette(palette14);
        power_button->setFont(font1);
        power_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(power_button, 5, 3, 1, 1);

        tan_button = new QPushButton(layoutWidget);
        tan_button->setObjectName(QString::fromUtf8("tan_button"));
        tan_button->setMaximumSize(QSize(60, 60));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        tan_button->setPalette(palette15);
        tan_button->setFont(font1);
        tan_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(tan_button, 4, 3, 1, 1);

        two_button = new QPushButton(layoutWidget);
        two_button->setObjectName(QString::fromUtf8("two_button"));
        two_button->setMaximumSize(QSize(60, 60));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        two_button->setPalette(palette16);
        two_button->setFont(font1);
        two_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(two_button, 5, 1, 1, 1);

        sqrt_button = new QPushButton(layoutWidget);
        sqrt_button->setObjectName(QString::fromUtf8("sqrt_button"));
        sqrt_button->setMaximumSize(QSize(60, 60));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        sqrt_button->setPalette(palette17);
        sqrt_button->setFont(font1);
        sqrt_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(sqrt_button, 1, 2, 1, 1);

        division_button = new QPushButton(layoutWidget);
        division_button->setObjectName(QString::fromUtf8("division_button"));
        division_button->setMaximumSize(QSize(60, 60));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        division_button->setPalette(palette18);
        division_button->setFont(font1);
        division_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background: darkgray;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(division_button, 2, 4, 1, 1);

        ln_button = new QPushButton(layoutWidget);
        ln_button->setObjectName(QString::fromUtf8("ln_button"));
        ln_button->setMaximumSize(QSize(60, 60));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        ln_button->setPalette(palette19);
        ln_button->setFont(font1);
        ln_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(ln_button, 1, 3, 1, 1);

        six_button = new QPushButton(layoutWidget);
        six_button->setObjectName(QString::fromUtf8("six_button"));
        six_button->setMaximumSize(QSize(60, 60));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        six_button->setPalette(palette20);
        six_button->setFont(font1);
        six_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(six_button, 4, 2, 1, 1);

        nine_button = new QPushButton(layoutWidget);
        nine_button->setObjectName(QString::fromUtf8("nine_button"));
        nine_button->setMaximumSize(QSize(60, 60));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        nine_button->setPalette(palette21);
        nine_button->setFont(font1);
        nine_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(nine_button, 3, 2, 1, 1);

        answer_button = new QPushButton(layoutWidget);
        answer_button->setObjectName(QString::fromUtf8("answer_button"));
        answer_button->setMaximumSize(QSize(60, 60));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush3(QColor(139, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        answer_button->setPalette(palette22);
        answer_button->setFont(font1);
        answer_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; color: black;}\n"
                              "QPushButton {background:darkred;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: white;}"));

        simple_calculator_grid->addWidget(answer_button, 6, 4, 1, 1);

        graph_button = new QPushButton(layoutWidget);
        graph_button->setObjectName(QString::fromUtf8("graph_button"));
        graph_button->setMaximumSize(QSize(60, 60));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        graph_button->setPalette(palette23);
        graph_button->setFont(font1);
        graph_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(graph_button, 6, 3, 1, 1);

        right_bracket_button = new QPushButton(layoutWidget);
        right_bracket_button->setObjectName(QString::fromUtf8("right_bracket_button"));
        right_bracket_button->setMaximumSize(QSize(60, 60));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        right_bracket_button->setPalette(palette24);
        right_bracket_button->setFont(font1);
        right_bracket_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(right_bracket_button, 1, 1, 1, 1);

        five_button = new QPushButton(layoutWidget);
        five_button->setObjectName(QString::fromUtf8("five_button"));
        five_button->setMaximumSize(QSize(60, 60));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        five_button->setPalette(palette25);
        five_button->setFont(font1);
        five_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(five_button, 4, 1, 1, 1);

        sin_button = new QPushButton(layoutWidget);
        sin_button->setObjectName(QString::fromUtf8("sin_button"));
        sin_button->setMaximumSize(QSize(60, 60));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        sin_button->setPalette(palette26);
        sin_button->setFont(font1);
        sin_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(sin_button, 2, 3, 1, 1);

        x_button = new QPushButton(layoutWidget);
        x_button->setObjectName(QString::fromUtf8("x_button"));
        x_button->setMaximumSize(QSize(60, 60));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        x_button->setPalette(palette27);
        x_button->setFont(font1);
        x_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(x_button, 2, 1, 1, 1);

        zero_button = new QPushButton(layoutWidget);
        zero_button->setObjectName(QString::fromUtf8("zero_button"));
        zero_button->setMaximumSize(QSize(60, 60));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        zero_button->setPalette(palette28);
        zero_button->setFont(font1);
        zero_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(zero_button, 6, 1, 1, 1);

        four_button = new QPushButton(layoutWidget);
        four_button->setObjectName(QString::fromUtf8("four_button"));
        four_button->setMaximumSize(QSize(60, 60));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        four_button->setPalette(palette29);
        four_button->setFont(font1);
        four_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(four_button, 4, 0, 1, 1);

        log_button = new QPushButton(layoutWidget);
        log_button->setObjectName(QString::fromUtf8("log_button"));
        log_button->setMaximumSize(QSize(60, 60));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        log_button->setPalette(palette30);
        log_button->setFont(font1);
        log_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));

        simple_calculator_grid->addWidget(log_button, 1, 4, 1, 1);

        draw_plot = new QCustomPlot(simple_calculator_tab);
        draw_plot->setObjectName(QString::fromUtf8("draw_plot"));
        draw_plot->setGeometry(QRect(450, 20, 541, 461));
        x_enter_box = new QDoubleSpinBox(simple_calculator_tab);
        x_enter_box->setObjectName(QString::fromUtf8("x_enter_box"));
        x_enter_box->setGeometry(QRect(350, 10, 101, 41));
        QFont font2;
        font2.setPointSize(15);
        x_enter_box->setFont(font2);
        x_enter_box->setStyleSheet(QString::fromUtf8(
            "QDoubleSpinBox{background: white; color:black; border: 1px solid gainsboro;}"));
        x_enter_box->setFrame(true);
        x_enter_box->setButtonSymbols(QAbstractSpinBox::NoButtons);
        x_enter_box->setDecimals(8);
        x_enter_box->setMinimum(-1000000.000000000000000);
        x_enter_box->setMaximum(1000000.000000000000000);
        x_enter_box->setSingleStep(0.100000000000000);
        label = new QLabel(simple_calculator_tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 60, 91, 41));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:black; }"));
        label->setAlignment(Qt::AlignCenter);
        draw_button = new QPushButton(simple_calculator_tab);
        draw_button->setObjectName(QString::fromUtf8("draw_button"));
        draw_button->setGeometry(QRect(370, 410, 60, 60));
        draw_button->setFont(font1);
        draw_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              " border-radius:30px;\n"
                              " max-width:60px;\n"
                              " max-height:60px;\n"
                              " min-width:60px;\n"
                              " min-height:60px; color: black;}"));
        calculator_tab_widget->addTab(simple_calculator_tab, QString());
        credit_calculator_tab = new QWidget();
        credit_calculator_tab->setObjectName(QString::fromUtf8("credit_calculator_tab"));
        credit_calculator_tab->setStyleSheet(QString::fromUtf8(
            "QWidget{background:white;}\n"
            "QRadioButton{color:black; }\n"
            "QRadioButton::indicator::unchecked { image: url(:/images/images/unchecked_radiobutton.png);}\n"
            "QRadioButton::indicator::checked { image: url(:/images/images/checked_radiobutton.png);}\n"
            "QSpinBox{background: white; color:black; border: 1px solid gainsboro;}\n"
            "QDoubleSpinBox{background: white; color:black; border: 1px solid gainsboro;}\n"
            "QLabel{color:black; }\n"
            ""));
        gridLayoutWidget = new QWidget(credit_calculator_tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 325, 331));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        credit_detail_button = new QPushButton(gridLayoutWidget);
        credit_detail_button->setObjectName(QString::fromUtf8("credit_detail_button"));
        credit_detail_button->setFont(font1);
        credit_detail_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              "border-radius: 10px;\n"
                              " max-width:315px;\n"
                              " max-height:60px;\n"
                              " min-width:315px;\n"
                              " min-height:60px; color: black;}"));

        gridLayout_2->addWidget(credit_detail_button, 4, 0, 1, 2);

        totat_credit_spinbox = new QDoubleSpinBox(gridLayoutWidget);
        totat_credit_spinbox->setObjectName(QString::fromUtf8("totat_credit_spinbox"));
        totat_credit_spinbox->setMaximumSize(QSize(120, 16777215));
        totat_credit_spinbox->setFont(font2);
        totat_credit_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        totat_credit_spinbox->setMaximum(999999999.990000009536743);

        gridLayout_2->addWidget(totat_credit_spinbox, 0, 1, 1, 1);

        term_spinbox = new QSpinBox(gridLayoutWidget);
        term_spinbox->setObjectName(QString::fromUtf8("term_spinbox"));
        term_spinbox->setMaximumSize(QSize(120, 16777215));
        term_spinbox->setFont(font2);
        term_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(term_spinbox, 1, 1, 1, 1);

        interest_spinbox = new QDoubleSpinBox(gridLayoutWidget);
        interest_spinbox->setObjectName(QString::fromUtf8("interest_spinbox"));
        interest_spinbox->setMaximumSize(QSize(120, 16777215));
        interest_spinbox->setFont(font2);
        interest_spinbox->setLayoutDirection(Qt::LeftToRight);
        interest_spinbox->setAlignment(Qt::AlignLeading | Qt::AlignLeft | Qt::AlignVCenter);
        interest_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        interest_spinbox->setDecimals(5);
        interest_spinbox->setMaximum(9999.999990000000253);

        gridLayout_2->addWidget(interest_spinbox, 2, 1, 1, 1);

        total_credit_label = new QLabel(gridLayoutWidget);
        total_credit_label->setObjectName(QString::fromUtf8("total_credit_label"));
        total_credit_label->setFont(font1);

        gridLayout_2->addWidget(total_credit_label, 0, 0, 1, 1);

        interest_label = new QLabel(gridLayoutWidget);
        interest_label->setObjectName(QString::fromUtf8("interest_label"));
        interest_label->setFont(font1);

        gridLayout_2->addWidget(interest_label, 2, 0, 1, 1);

        differentiated_radiobutton = new QRadioButton(gridLayoutWidget);
        differentiated_radiobutton->setObjectName(QString::fromUtf8("differentiated_radiobutton"));
        differentiated_radiobutton->setFont(font1);
        differentiated_radiobutton->setIconSize(QSize(14, 14));
        differentiated_radiobutton->setChecked(false);

        gridLayout_2->addWidget(differentiated_radiobutton, 3, 1, 1, 1);

        term_label = new QLabel(gridLayoutWidget);
        term_label->setObjectName(QString::fromUtf8("term_label"));
        term_label->setFont(font1);

        gridLayout_2->addWidget(term_label, 1, 0, 1, 1);

        annuity_radiobutton = new QRadioButton(gridLayoutWidget);
        annuity_radiobutton->setObjectName(QString::fromUtf8("annuity_radiobutton"));
        annuity_radiobutton->setFont(font1);
        annuity_radiobutton->setIconSize(QSize(14, 14));
        annuity_radiobutton->setChecked(true);

        gridLayout_2->addWidget(annuity_radiobutton, 3, 0, 1, 1);

        credit_calculate_button = new QPushButton(gridLayoutWidget);
        credit_calculate_button->setObjectName(QString::fromUtf8("credit_calculate_button"));
        credit_calculate_button->setFont(font1);
        credit_calculate_button->setStyleSheet(
            QString::fromUtf8("QPushButton:pressed  { background: gainsboro; }\n"
                              "QPushButton {background:white;\n"
                              "border-radius: 10px;\n"
                              " max-width:315px;\n"
                              " max-height:60px;\n"
                              " min-width:315px;\n"
                              " min-height:60px; color: black;}"));

        gridLayout_2->addWidget(credit_calculate_button, 5, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(credit_calculator_tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 340, 321, 141));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        monthly_payment_label = new QLabel(gridLayoutWidget_2);
        monthly_payment_label->setObjectName(QString::fromUtf8("monthly_payment_label"));
        monthly_payment_label->setFont(font1);

        gridLayout_3->addWidget(monthly_payment_label, 0, 0, 1, 1);

        total_payment_label = new QLabel(gridLayoutWidget_2);
        total_payment_label->setObjectName(QString::fromUtf8("total_payment_label"));
        total_payment_label->setFont(font1);

        gridLayout_3->addWidget(total_payment_label, 2, 0, 1, 1);

        overpayment_label = new QLabel(gridLayoutWidget_2);
        overpayment_label->setObjectName(QString::fromUtf8("overpayment_label"));
        overpayment_label->setFont(font1);

        gridLayout_3->addWidget(overpayment_label, 1, 0, 1, 1);

        monthly_payment_value_label = new QLabel(gridLayoutWidget_2);
        monthly_payment_value_label->setObjectName(QString::fromUtf8("monthly_payment_value_label"));
        monthly_payment_value_label->setFont(font1);

        gridLayout_3->addWidget(monthly_payment_value_label, 0, 1, 1, 1);

        overpayment_value_label = new QLabel(gridLayoutWidget_2);
        overpayment_value_label->setObjectName(QString::fromUtf8("overpayment_value_label"));
        overpayment_value_label->setFont(font1);

        gridLayout_3->addWidget(overpayment_value_label, 1, 1, 1, 1);

        total_payment_value_label = new QLabel(gridLayoutWidget_2);
        total_payment_value_label->setObjectName(QString::fromUtf8("total_payment_value_label"));
        total_payment_value_label->setFont(font1);

        gridLayout_3->addWidget(total_payment_value_label, 2, 1, 1, 1);

        credit_details_table = new QTableWidget(credit_calculator_tab);
        credit_details_table->setObjectName(QString::fromUtf8("credit_details_table"));
        credit_details_table->setGeometry(QRect(350, 10, 631, 461));
        QFont font3;
        font3.setPointSize(17);
        credit_details_table->setFont(font3);
        credit_details_table->setStyleSheet(
            QString::fromUtf8("QTableView::item{color:black;}\n"
                              "QHeaderView{color:black; font: 13px;background: gainsboro;}"));
        calculator_tab_widget->addTab(credit_calculator_tab, QString());
        deposit_calculator_tab = new QWidget();
        deposit_calculator_tab->setObjectName(QString::fromUtf8("deposit_calculator_tab"));
        label_2 = new QLabel(deposit_calculator_tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 170, 340, 101));
        QFont font4;
        font4.setPointSize(25);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{color:black; }"));
        label_2->setAlignment(Qt::AlignCenter);
        calculator_tab_widget->addTab(deposit_calculator_tab, QString());
        CalculatorView->setCentralWidget(centralwidget);

        retranslateUi(CalculatorView);

        calculator_tab_widget->setCurrentIndex(0);

        QMetaObject::connectSlotsByName(CalculatorView);
    }  // setupUi

    void retranslateUi(QMainWindow *CalculatorView) {
        CalculatorView->setWindowTitle(
            QCoreApplication::translate("CalculatorView", "SmartCalc v2.0", nullptr));
        actionSimple_Caculator->setText(
            QCoreApplication::translate("CalculatorView", "Simple Caculator", nullptr));
        actionCredit_Caculator->setText(
            QCoreApplication::translate("CalculatorView", "Credit Caculator", nullptr));
        actionDeposit_Caculator->setText(
            QCoreApplication::translate("CalculatorView", "Deposit Caculator", nullptr));
        eight_button->setText(QCoreApplication::translate("CalculatorView", "8", nullptr));
        multiplication_button->setText(QCoreApplication::translate("CalculatorView", "*", nullptr));
        dot_button->setText(QCoreApplication::translate("CalculatorView", ".", nullptr));
        all_clear_button->setText(QCoreApplication::translate("CalculatorView", "AC", nullptr));
        subtraction_button->setText(QCoreApplication::translate("CalculatorView", "-", nullptr));
        one_button->setText(QCoreApplication::translate("CalculatorView", "1", nullptr));
        addition_button->setText(QCoreApplication::translate("CalculatorView", "+", nullptr));
        delete_symbol_button->setText(QString());
        cos_button->setText(QCoreApplication::translate("CalculatorView", "cos", nullptr));
        three_button->setText(QCoreApplication::translate("CalculatorView", "3", nullptr));
        mod_button->setText(QCoreApplication::translate("CalculatorView", "%", nullptr));
        inverse_button->setText(QCoreApplication::translate("CalculatorView", "inv", nullptr));
        left_bracket_button->setText(QCoreApplication::translate("CalculatorView", "(", nullptr));
        seven_button->setText(QCoreApplication::translate("CalculatorView", "7", nullptr));
        power_button->setText(QCoreApplication::translate("CalculatorView", "^", nullptr));
        tan_button->setText(QCoreApplication::translate("CalculatorView", "tan", nullptr));
        two_button->setText(QCoreApplication::translate("CalculatorView", "2", nullptr));
        sqrt_button->setText(QCoreApplication::translate("CalculatorView", "sqrt", nullptr));
        division_button->setText(QCoreApplication::translate("CalculatorView", "/", nullptr));
        ln_button->setText(QCoreApplication::translate("CalculatorView", "ln", nullptr));
        six_button->setText(QCoreApplication::translate("CalculatorView", "6", nullptr));
        nine_button->setText(QCoreApplication::translate("CalculatorView", "9", nullptr));
        answer_button->setText(QCoreApplication::translate("CalculatorView", "=", nullptr));
        graph_button->setText(QCoreApplication::translate("CalculatorView", "graph", nullptr));
        right_bracket_button->setText(QCoreApplication::translate("CalculatorView", ")", nullptr));
        five_button->setText(QCoreApplication::translate("CalculatorView", "5", nullptr));
        sin_button->setText(QCoreApplication::translate("CalculatorView", "sin", nullptr));
        x_button->setText(QCoreApplication::translate("CalculatorView", "x", nullptr));
        zero_button->setText(QCoreApplication::translate("CalculatorView", "0", nullptr));
        four_button->setText(QCoreApplication::translate("CalculatorView", "4", nullptr));
        log_button->setText(QCoreApplication::translate("CalculatorView", "log", nullptr));
        label->setText(QCoreApplication::translate("CalculatorView", "Enter X", nullptr));
        draw_button->setText(QCoreApplication::translate("CalculatorView", "draw", nullptr));
        calculator_tab_widget->setTabText(calculator_tab_widget->indexOf(simple_calculator_tab),
                                          QCoreApplication::translate("CalculatorView", "Simple", nullptr));
        credit_detail_button->setText(QCoreApplication::translate("CalculatorView", "Details", nullptr));
        total_credit_label->setText(
            QCoreApplication::translate("CalculatorView", "Total credit amount:", nullptr));
        interest_label->setText(QCoreApplication::translate("CalculatorView", "Interest rate:", nullptr));
        differentiated_radiobutton->setText(
            QCoreApplication::translate("CalculatorView", "Differentiated", nullptr));
        term_label->setText(QCoreApplication::translate("CalculatorView", "Term:", nullptr));
        annuity_radiobutton->setText(QCoreApplication::translate("CalculatorView", "Annuity", nullptr));
        credit_calculate_button->setText(QCoreApplication::translate("CalculatorView", "Calculate", nullptr));
        monthly_payment_label->setText(
            QCoreApplication::translate("CalculatorView", "Monthly payment:", nullptr));
        total_payment_label->setText(
            QCoreApplication::translate("CalculatorView", "Total payment:", nullptr));
        overpayment_label->setText(QCoreApplication::translate("CalculatorView", "Overpayment:", nullptr));
        monthly_payment_value_label->setText(QCoreApplication::translate("CalculatorView", "0", nullptr));
        overpayment_value_label->setText(QCoreApplication::translate("CalculatorView", "0", nullptr));
        total_payment_value_label->setText(QCoreApplication::translate("CalculatorView", "0", nullptr));
        calculator_tab_widget->setTabText(calculator_tab_widget->indexOf(credit_calculator_tab),
                                          QCoreApplication::translate("CalculatorView", "Credit", nullptr));
        label_2->setText(QCoreApplication::translate("CalculatorView", "Coming Soon", nullptr));
        calculator_tab_widget->setTabText(calculator_tab_widget->indexOf(deposit_calculator_tab),
                                          QCoreApplication::translate("CalculatorView", "Deposit", nullptr));
    }  // retranslateUi
};

namespace Ui {
class CalculatorView : public Ui_CalculatorView {};
}  // namespace Ui

QT_END_NAMESPACE
