QT       += core gui network sql multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    introduction.cpp \
       main.cpp \
    appinit.cpp \
    mainwindow.cpp \
 mymessagebox.cpp \
    mythread.cpp \
    playimage.cpp \
    recording.cpp \
    screenrect.cpp \
    screenshot.cpp \
    sharescreenthread.cpp \
    sharescreenthread_handler.cpp \
    showsharedscreen.cpp \
    widget.cpp \
    windowrect.cpp

HEADERS += \
    appinit.h \
    introduction.h \
    mainwindow.h \
    mymessagebox.h \
    mythread.h \
    playimage.h \
    recording.h \
    screenrect.h \
    screenshot.h \
    sharescreenthread.h \
    showsharedscreen.h \
    widget.h \
    windowrect.h

FORMS += \
    introduction.ui \
    mainwindow.ui \
    mymessagebox.ui \
    recording.ui \
    screenshot.ui \
    showsharedscreen.ui \
    video.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resMain.qrc


# include(QLog/QLog.pri)
# INCLUDEPATH += $$PWD/QLog/

include(PersonalHomePage/PersonalHomePage.pri)
INCLUDEPATH += $$PWD/PersonalHomePage/

include(ScreenRecording/ScreenRecording.pri)
INCLUDEPATH += $$PWD/ScreenRecording/

include(MyNotePad/notePad.pri)
INCLUDEPATH +=$$PWD/MyNotePad

include(PlayVideo/PlayVideo.pri)
INCLUDEPATH +=$$PWD/PlayVideo

include(WordLearning/WordLearning.pri)
INCLUDEPATH +=$$PWD/WordLearning

include(MyLogin/MyLogin.pri)
INCLUDEPATH +=$$PWD/MyLogin

include(MyMusic/mymusic.pri)
INCLUDEPATH +=$$PWD/MuMusic
