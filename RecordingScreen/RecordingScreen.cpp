// RecordingScreen.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CaptureScreen.h"
extern "C"
{
	#include <libavutil/opt.h>
	#include <libavutil/mathematics.h>
#include <libavutil\time.h>
	#include <libavformat/avformat.h>
	#include <libswscale/swscale.h>
	#include <libswresample/swresample.h>
	#include <libavutil/imgutils.h>
	#include <libavcodec/avcodec.h>
#include <libavdevice\avdevice.h>
}
#include <ipp.h>
#include <chrono>

//signed int Bgr2YuvI420(const BYTE* srcBgr, int image_width, int image_height, BYTE* dstYuvI420)
//{
//	IppStatus ipp_status;
//
//	int srcStep = image_width * 3;
//	int dstYStep = image_width;
//	int dstCbCrStep = image_width;
//	IppiSize roiSize = { image_width, image_height };
//
//	const Ipp8u* pSrc = (Ipp8u*)srcBgr;
//
//	Ipp8u *pDstY = (Ipp8u*)dstYuvI420;
//	Ipp8u *pDstU = (Ipp8u*)&dstYuvI420[image_width * image_height];
//	Ipp8u *pDstV = (Ipp8u*)&dstYuvI420[image_width * image_height * 5 / 4];
//	Ipp8u *pDst[3];
//	pDst[0] = pDstY;
//	pDst[1] = pDstU;
//	pDst[2] = pDstV;
//	int dstStep[3] = { image_width, image_width / 2, image_width / 2 };
//
//	ipp_status = ippiBGRToYCbCr420_8u_C3P3R(pSrc, srcStep, pDst, dstStep, roiSize);
//
//	return ipp_status;
//}

unsigned char clip_value(unsigned char x, unsigned char min_val, unsigned char  max_val){
	if (x>max_val){
		return max_val;
	}
	else if (x<min_val){
		return min_val;
	}
	else{
		return x;
	}
}

//RGB to YUV420
bool RGB24_TO_YUV420(unsigned char *RgbBuf, int w, int h, unsigned char *yuvBuf)
{
	unsigned char*ptrY, *ptrU, *ptrV, *ptrRGB;
	memset(yuvBuf, 0, w*h * 3 / 2);
	ptrY = yuvBuf;
	ptrU = yuvBuf + w*h;
	ptrV = ptrU + (w*h * 1 / 4);
	unsigned char y, u, v, r, g, b;
	for (int j = h-1; j>=0; j--){
		ptrRGB = RgbBuf + w*j * 3;
		for (int i = 0; i<w; i++){

			b = *(ptrRGB++);
			g = *(ptrRGB++);
			r = *(ptrRGB++);
			

			y = (unsigned char)((66 * r + 129 * g + 25 * b + 128) >> 8) + 16;
			u = (unsigned char)((-38 * r - 74 * g + 112 * b + 128) >> 8) + 128;
			v = (unsigned char)((112 * r - 94 * g - 18 * b + 128) >> 8) + 128;
			*(ptrY++) = clip_value(y, 0, 255);
			if (j % 2 == 0 && i % 2 == 0){
				*(ptrU++) = clip_value(u, 0, 255);
			}
			else{
				if (i % 2 == 0){
					*(ptrV++) = clip_value(v, 0, 255);
				}
			}
		}
	}
	return true;
}


int _tmain(int argc, _TCHAR* argv[])
{
	//av_register_all();
	avformat_network_init();
	avdevice_register_all();


	CCaptureScreen* ccs = new CCaptureScreen();
	int width = 0;
	int height = 0;

	ccs->Init(width, height);

	AVFormatContext* avFormCtx_Out;
	AVCodecContext*  avCodecCtx_Out;
	AVCodec*  avCodec;
	AVStream* avStream;
	AVFrame* frame;
	AVPacket* packet;

	int frameRate = 15;
	int ret = 0;
	char* filename = "out.mp4";

	ret = avformat_alloc_output_context2(&avFormCtx_Out, NULL, NULL, filename);
	if (ret < 0)
	{
		printf("Init avformat object is faild! \n");
		return 0;
	}

	avCodec = avcodec_find_encoder(avFormCtx_Out->oformat->video_codec);
	if (!avCodec)
	{
		printf("Init avCodec object is faild! \n");
		return 0;
	}
	
	avCodecCtx_Out = avcodec_alloc_context3(avCodec);
	if (!avCodecCtx_Out)
	{
		printf("Init avCodecCtx_Out object is faild! \n");
		return 0;
	}
	avStream = avformat_new_stream(avFormCtx_Out, avCodec);
	if (!avStream)
	{
		printf("Init avStream object is faild! \n");
		return 0;
	}
	
	avCodecCtx_Out->flags |= AV_CODEC_FLAG_QSCALE;
	avCodecCtx_Out->bit_rate = 4000000;
	avCodecCtx_Out->rc_min_rate = 4000000;
	avCodecCtx_Out->rc_max_rate = 4000000;
	avCodecCtx_Out->bit_rate_tolerance = 4000000;
	avCodecCtx_Out->time_base.den = frameRate;
	avCodecCtx_Out->time_base.num = 1;

	avCodecCtx_Out->width = width;
	avCodecCtx_Out->height = height;
	//pH264Encoder->pCodecCtx->frame_number = 1;
	avCodecCtx_Out->gop_size = 12;
	avCodecCtx_Out->max_b_frames = 0;
	avCodecCtx_Out->thread_count = 4;
	avCodecCtx_Out->pix_fmt = AV_PIX_FMT_YUV420P;
	avCodecCtx_Out->codec_id = AV_CODEC_ID_H264;
	avCodecCtx_Out->codec_type = AVMEDIA_TYPE_VIDEO;
 
	av_opt_set(avCodecCtx_Out->priv_data, "b-pyramid", "none", 0);
	av_opt_set(avCodecCtx_Out->priv_data, "preset", "superfast", 0);
	av_opt_set(avCodecCtx_Out->priv_data, "tune", "zerolatency", 0);

	if (avFormCtx_Out->oformat->flags & AVFMT_GLOBALHEADER)
		avCodecCtx_Out->flags |= AV_CODEC_FLAG_GLOBAL_HEADER;

	ret = avcodec_open2(avCodecCtx_Out, avCodec, NULL);
	if (ret < 0)
	{
		printf("Open avcodec is faild! \n");
		return 0;
	}

	avcodec_parameters_from_context(avStream->codecpar, avCodecCtx_Out);
	if (!(avFormCtx_Out->oformat->flags & AVFMT_NOFILE))
	{
		ret = avio_open(&avFormCtx_Out->pb, filename, AVIO_FLAG_WRITE);
		if (ret < 0)
		{
			printf("Open file is faild! \n");
			return 0;
		}
	}
	ret = avformat_write_header(avFormCtx_Out, NULL);
	if (ret < 0)
	{
		printf("write header is faild! \n");
		return 0;
	}

	frame = av_frame_alloc();
	if (!frame)
	{
		printf("Init frame is faild! \n");
		return 0;
	}
	frame->format = AV_PIX_FMT_YUV420P;
	frame->width = width;
	frame->height = height;

	LONG64 frameSize = av_image_get_buffer_size(AV_PIX_FMT_YUV420P, 1920, 1080, 1);
	BYTE* outbuffer = new BYTE[frameSize];

	ret = av_image_fill_arrays(frame->data,
								frame->linesize,
								outbuffer,
								AV_PIX_FMT_YUV420P,
								1920,
								1080, 1);

	if (ret < 0)
	{
		printf("av_image_fill_arrays is faild! \n");
		return 0;
	}
	packet = av_packet_alloc();
	av_init_packet(packet);
	if (!packet)
	{
		printf("packet is faild! \n");
		return 0;
	}

	int frameNumber = 0;
	int got_packet = 0;

	for (;;)
	{
		BYTE* frameimage = ccs->CaptureImage();

		RGB24_TO_YUV420(frameimage, width, height, outbuffer);
		//Sframe->pkt_dts = frame->pts = frameNumber * avCodecCtx_Out->time_base.num * avStream->time_base.den / (avCodecCtx_Out->time_base.den *  avStream->time_base.num);
		frame->pkt_dts = frame->pts = av_rescale_q_rnd(frameNumber, avCodecCtx_Out->time_base, avStream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
		frame->pkt_duration = 0;
		frame->pkt_pos = -1;

		ret = avcodec_send_frame(avCodecCtx_Out, frame);
		if (ret < 0)
			continue;

		ret = avcodec_receive_packet(avCodecCtx_Out, packet);
		if (ret < 0)
			continue;

		if (packet->size > 0)
		{
			//av_packet_rescale_ts(packet, avCodecCtx_Out->time_base, avStream->time_base);

			av_write_frame(avFormCtx_Out, packet);
			frameNumber++;
			printf("录入第%d帧....\n", frameNumber);
		}

		if (frameNumber > 500)
			break;
	}
	av_write_trailer(avFormCtx_Out);
	avformat_free_context(avFormCtx_Out);
	avcodec_close(avCodecCtx_Out);
	avcodec_free_context(&avCodecCtx_Out);
	av_free(avCodec);
	av_packet_free(&packet);
	av_frame_free(&frame);

	return 0;
}



