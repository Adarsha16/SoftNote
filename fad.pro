QT += core gui sql
QT += widgets

FONT_PATH = :/Merriweather-Regular.ttf
EXTRA_FILES += $$FONT_PATH

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    forgotpassword.cpp \
    hasingFunction.cpp \
    main.cpp \
    mainwindow.cpp \
    signin.cpp

HEADERS += \
    forgotpassword.h \
    hashingFunction.h \
    mainwindow.h \
    signin.h

FORMS += \
    forgotpassword.ui \
    mainwindow.ui \
    signin.ui

SUBDIRS += notepad/

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resorce.qrc

RC_ICONS = penIcon.ico
