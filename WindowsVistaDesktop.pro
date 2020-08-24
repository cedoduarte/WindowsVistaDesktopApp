QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CalendarItemForm.cpp \
    CardsItemForm.cpp \
    ChessItemForm.cpp \
    DesktopItemForm.cpp \
    DiskRecorderItemForm.cpp \
    ExplorerItemForm.cpp \
    InternetItemForm.cpp \
    MediaPlayerItemForm.cpp \
    MediaPlayerMenuBar.cpp \
    MessengerItemForm.cpp \
    MinesweeperItemForm.cpp \
    MonitorItemForm.cpp \
    NotepadItemForm.cpp \
    NotepadMenuBar.cpp \
    OrbitButton.cpp \
    OrbitGraphicsScene.cpp \
    OrbitItem.cpp \
    PokerItemForm.cpp \
    ScreenItemForm.cpp \
    StartMenu.cpp \
    StartMenuForm.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    CalendarItemForm.h \
    CardsItemForm.h \
    ChessItemForm.h \
    Defines.h \
    DesktopItemForm.h \
    DiskRecorderItemForm.h \
    ExplorerItemForm.h \
    InternetItemForm.h \
    MainWindow.h \
    MediaPlayerItemForm.h \
    MediaPlayerMenuBar.h \
    MessengerItemForm.h \
    MinesweeperItemForm.h \
    MonitorItemForm.h \
    NotepadItemForm.h \
    NotepadMenuBar.h \
    OrbitButton.h \
    OrbitGraphicsScene.h \
    OrbitItem.h \
    PokerItemForm.h \
    ScreenItemForm.h \
    StartMenu.h \
    StartMenuForm.h

FORMS += \
    CalendarItemForm.ui \
    CardsItemForm.ui \
    ChessItemForm.ui \
    DesktopItemForm.ui \
    DiskRecorderItemForm.ui \
    ExplorerItemForm.ui \
    InternetItemForm.ui \
    MainWindow.ui \
    MediaPlayerItemForm.ui \
    MessengerItemForm.ui \
    MinesweeperItemForm.ui \
    MonitorItemForm.ui \
    NotepadItemForm.ui \
    PokerItemForm.ui \
    ScreenItemForm.ui \
    StartMenuForm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

RC_ICONS = icon.ico
