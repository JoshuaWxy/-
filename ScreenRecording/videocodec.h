#ifndef VIDEOCODEC_H
#define VIDEOCODEC_H

#include <QPoint>
#include <qmutex.h>
#include <qstring.h>
/*
 * AVCodecParameters: 这个结构体包含了描述音视频编解码器参数的信息，例如编码类型、帧率、分辨率等。

AVFormatContext: AVFormatContext 是一个多媒体容器格式的基本结构体，它存储了整个多媒体文件的相关信息，例如文件格式、数据流等。

AVCodecContext: AVCodecContext 存储了音视频编解码器的上下文信息，包括编解码器的参数、状态等。

AVStream: AVStream 是音视频流的结构体，它包含了单个音频或视频流的相关信息，例如流的索引、编解码器信息等。

AVFrame: AVFrame 存储了解码后的音视频帧数据，它包含了像素数据、采样数据等。

AVPacket: AVPacket 是音视频数据包的结构体，它包含了压缩编码后的音视频数据。

AVOutputFormat: AVOutputFormat 是输出格式的结构体，它定义了输出多媒体数据的封装格式。

SwsContext: SwsContext 是用于图像转换的结构体，它包含了图像转换所需的参数和状态。
*/
struct AVCodecParameters;
struct AVFormatContext;
struct AVCodecContext;
struct AVStream;
struct AVFrame;
struct AVPacket;
struct AVOutputFormat;
struct SwsContext;

class VideoCodec
{
public:
    VideoCodec();
    ~VideoCodec();

    bool open(AVCodecContext *codecContext, QPoint point, const QString& fileName);
    void write(AVFrame* frame);
    void close();

private:
    void showError(int err);
    bool swsFormat(AVFrame* frame);

private:
    AVFormatContext* m_formatContext = nullptr;
    AVCodecContext * m_codecContext  = nullptr;    // 编码器上下文
    SwsContext     * m_swsContext    = nullptr;    // 图像转换上下文
    AVStream       * m_videoStream   = nullptr;
    AVPacket       * m_packet        = nullptr;    // 数据包
    AVFrame        * m_frame         = nullptr;    // 解码后的视频帧
    int m_index = 0;
    bool             m_writeHeader   = false;      // 是否写入头
    QMutex           m_mutex;
public:
    void setRecording_qulity(int size);
    int m_recording_qulity;
};

#endif // VIDEOCODEC_H
