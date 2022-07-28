QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    model/calculator_model.cpp \
    view/calculator_view.cpp \
    view/qcustomplot.cpp

HEADERS += \
    controller/calculator_controller.h \
    model/calculator_model.h \
    view/calculator_view.h \
    view/qcustomplot.h
    

FORMS += \
    ui/calculatorview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/calculator_resources.qrc

DISTFILES += \
    checked_radiobutton.png \
    del_symb4.png \
    unchecked_radiobutton.png
