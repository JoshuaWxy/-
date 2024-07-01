
HEADERS += \
    $$PWD/readthread.h \       # 录屏线程类
    $$PWD/videocodec.h \       # 录屏编码类（将图像保存到视频文件中）
    $$PWD/videodecode.h        # 录屏解码类（捕获桌面图像并解码）

SOURCES += \
    $$PWD/readthread.cpp \
    $$PWD/videocodec.cpp \
    $$PWD/videodecode.cpp

INCLUDEPATH +=$$PWD/ffmpeg_sdk_win64/include

LIBS += $$PWD/ffmpeg_sdk_win64/lib/avdevice.lib \
        $$PWD/ffmpeg_sdk_win64/lib/avfilter.lib\
        $$PWD/ffmpeg_sdk_win64/lib/avformat.lib\
        $$PWD/ffmpeg_sdk_win64/lib/avutil.lib\
        $$PWD/ffmpeg_sdk_win64/lib/avcodec.lib\
        $$PWD/ffmpeg_sdk_win64/lib/postproc.lib\
        $$PWD/ffmpeg_sdk_win64/lib/swresample.lib\
        $$PWD/ffmpeg_sdk_win64/lib/swscale.lib
