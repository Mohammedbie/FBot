
# You can choose either configTests for tests or configAPP for the application without tests.
CONFIG += c++11 configTests

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




configAPP {
TARGET = APP
QT += quick
DEFINES += PARAMA

HEADERS += \
    Logic/medium.h \
    Logic/post.h \
    Logic/publisher.h \
    Logic/sharingtimeline.h \
    Logic/sharingtimelinetype.h \
    Logic/user.h \
    Logic/usercredentials.h

SOURCES += \
        Logic/post.cpp \
        Logic/publisher.cpp \
        Logic/sharingtimeline.cpp \
        Logic/user.cpp \
        Logic/usercredentials.cpp \
        main.cpp
}

configTests {
TARGET = Tests
QT += core testlib
DEFINES += PARAMB

HEADERS += \
        Logic/post.h \
        Logic/user.h \
        Tests/testuser.h

SOURCES += \
        Logic/post.cpp \
        Logic/user.cpp \
        Tests/testuser.cpp
}
