QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
RC_ICONS = imagens/icon.ico
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    pesquisar.cpp \
    tela_adicionar.cpp \
    tela_inicial.cpp

HEADERS += \
    pesquisar.h \
    tela_adicionar.h \
    tela_inicial.h

FORMS += \
    pesquisar.ui \
    tela_adicionar.ui \
    tela_inicial.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
