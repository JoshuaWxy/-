DEFINES += QT_MESSAGELOGCONTEXT        # release模式下输出日志

FORMS += \
    $$PWD/logwidgettext.ui

HEADERS += \
    $$PWD/logconfig.h \
    $$PWD/loginput.h \
    $$PWD/logsavebase.h \
    $$PWD/logsavetxt.h \
    $$PWD/logwidgetbase.h \
    $$PWD/logwidgettext.h

SOURCES += \
    $$PWD/logconfig.cpp \
    $$PWD/loginput.cpp \
    $$PWD/logsavebase.cpp \
    $$PWD/logsavetxt.cpp \
    $$PWD/logwidgetbase.cpp \
    $$PWD/logwidgettext.cpp

