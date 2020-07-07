#-------------------------------------------------
#
# Project created by QtCreator 2014-04-30T10:42:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RTSPTool
TEMPLATE = app


SOURCES += main.cpp\
        frmmain.cpp \
    qffmpeg.cpp \
    rtspthread.cpp

HEADERS  += frmmain.h \
    qffmpeg.h \
    rtspthread.h

FORMS    += frmmain.ui

INCLUDEPATH +=  $$/mnt/hgfs/shared/RTSPTool/ffmpeg/include
LIBS += $$/mnt/hgfs/shared/RTSPTool/ffmpeg/lib/libavcodec.so \
        $$/mnt/hgfs/shared/RTSPTool/ffmpeg/lib/libavfilter.so \
        $$/mnt/hgfs/shared/RTSPTool/ffmpeg/lib/libavformat.so \
        $$/mnt/hgfs/shared/RTSPTool/ffmpeg/lib/libswscale.so \
        $$/mnt/hgfs/shared/RTSPTool/ffmpeg/lib/libavutil.so \

#INCLUDEPATH +=  $$/usr/lib/top-iot/ffmpeg/include
#LIBS += $$/usr/lib/top-iot/ffmpeg/lib/libavcodec.so \
#        $$/usr/lib/top-iot/ffmpeg/lib/libavformat.so \
#        $$/usr/lib/top-iot/ffmpeg/lib/libswscale.so \
#        $$/usr/lib/top-iot/ffmpeg/lib/libavutil.so \
#        $$-lavformat -lavcodec -lavutil -lswresample \
#MOC_DIR=temp/moc
#RCC_DIR=temp/rcc
#UI_DIR=temp/ui
#OBJECTS_DIR=temp/obj
#DESTDIR=bin

win32:RC_FILE=main.rc

RESOURCES += \
    res.qrc

#unix:!macx: LIBS += -L$$PWD/../../../../usr/lib/top-iot/ffmpeg/lib/ -lavcodec

#INCLUDEPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include
#DEPENDPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include

#unix:!macx: LIBS += -L$$PWD/../../../../usr/lib/top-iot/ffmpeg/lib/ -lavformat

#INCLUDEPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include
#DEPENDPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include

#unix:!macx: LIBS += -L$$PWD/../../../../usr/lib/top-iot/ffmpeg/lib/ -lavutil

#INCLUDEPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include
#DEPENDPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include

#unix:!macx: LIBS += -L$$PWD/../../../../usr/lib/top-iot/ffmpeg/lib/ -lswresample

#INCLUDEPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include
#DEPENDPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include

#unix:!macx: LIBS += -L$$PWD/../../../../usr/lib/top-iot/ffmpeg/lib/ -lswscale

#INCLUDEPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include
#DEPENDPATH += $$PWD/../../../../usr/lib/top-iot/ffmpeg/include
