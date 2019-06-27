#ifndef _CCAPTURE_SCREEN_HH
#define _CCAPTURE_SCREEN_HH

#include<time.h>
#include <d3d9.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <windows.h>

#include <tchar.h>
#include <winbase.h>
#include <winreg.h>
#include <Strsafe.h>


//
// ---抓屏类----
//
class CCaptureScreen
{
public:
	CCaptureScreen(void);
	~CCaptureScreen(void);

public:
	/*-----------定义外部调用函数-----------*/
	int Init(int&, int&);//初始化
	BYTE* CaptureImage(); //抓取屏幕

private:
	/*-----------定义内部调用函数-----------*/
	void* CaptureScreenFrame(int, int, int, int);//抓屏
	HCURSOR FetchCursorHandle(); //获取鼠标光标

private:
	/*-----------定义私有变量-----------*/
	int m_width;
	int m_height;
	UINT   wLineLen;
	DWORD  dwSize;
	DWORD  wColSize;

	//设备句柄
	HDC hScreenDC;
	HDC hMemDC;
	//图像RGB内存缓存
	PRGBTRIPLE m_hdib;
	//位图头信息结构体
	BITMAPINFO pbi;

	HBITMAP hbm;
	//鼠标光标
	HCURSOR m_hSavedCursor;


};

#endif //--_CCAPTURE_SCREEN_HH