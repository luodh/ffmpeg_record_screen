#include "stdafx.h"
#include "CaptureScreen.h"

CCaptureScreen::CCaptureScreen(void)
{
	m_hdib = NULL;
	m_hSavedCursor = NULL;
	hScreenDC = NULL;
	hMemDC = NULL;
	hbm = NULL;
	m_width = 1920;
	m_height = 1080;
	FetchCursorHandle();
}
//
// 释放资源
//
CCaptureScreen::~CCaptureScreen(void)
{
	DeleteObject(hbm);
	if (m_hdib){

		free(m_hdib);
		m_hdib = NULL;
	}
	if (hScreenDC){

		::ReleaseDC(NULL, hScreenDC);
	}
	if (hMemDC) {

		DeleteDC(hMemDC);
	}
	if (hbm)
	{
		DeleteObject(hbm);
	}
}

//
// 初始化
//
int CCaptureScreen::Init(int& src_VideoWidth, int& src_VideoHeight)
{
	hScreenDC = ::GetDC(GetDesktopWindow());
	if (hScreenDC == NULL) return 0;

	int m_nMaxxScreen = GetDeviceCaps(hScreenDC, HORZRES);
	int m_nMaxyScreen = GetDeviceCaps(hScreenDC, VERTRES);

	hMemDC = ::CreateCompatibleDC(hScreenDC);
	if (hMemDC == NULL) return 0;

	m_width = m_nMaxxScreen;
	m_height = m_nMaxyScreen;

	if (!m_hdib){
		m_hdib = (PRGBTRIPLE)malloc(m_width * m_height * 3);//24位图像大小
	}
	//位图头信息结构体
	pbi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	pbi.bmiHeader.biWidth = m_width;
	pbi.bmiHeader.biHeight = m_height;
	pbi.bmiHeader.biPlanes = 1;
	pbi.bmiHeader.biBitCount = 24;
	pbi.bmiHeader.biCompression = BI_RGB;

	src_VideoWidth = m_width;
	src_VideoHeight = m_height;

	hbm = CreateCompatibleBitmap(hScreenDC, m_width, m_height);
	SelectObject(hMemDC, hbm);

	wLineLen = ((m_width * 24 + 31) & 0xffffffe0) / 8;
	wColSize = sizeof(RGBQUAD)* ((24 <= 8) ? 1 << 24 : 0);
	dwSize = (DWORD)(UINT)wLineLen * (DWORD)(UINT)m_height;

	return 1;
}

//抓取屏幕数据
BYTE* CCaptureScreen::CaptureImage()
{

	VOID*  alpbi = CaptureScreenFrame(0, 0, m_width, m_height);
	return (BYTE*)(alpbi);
}

void* CCaptureScreen::CaptureScreenFrame(int left, int top, int width, int height)
{

	if (hbm == NULL || hMemDC == NULL || hScreenDC == NULL) return NULL;

	BitBlt(hMemDC, 0, 0, width, height, hScreenDC, left, top, SRCCOPY);
	/*-------------------------捕获鼠标-------------------------------*/
	{
		POINT xPoint;
		GetCursorPos(&xPoint);
		HCURSOR hcur = FetchCursorHandle();
		xPoint.x -= left;
		xPoint.y -= top;

		ICONINFO iconinfo;
		BOOL ret;
		ret = GetIconInfo(hcur, &iconinfo);
		if (ret){
			xPoint.x -= iconinfo.xHotspot;
			xPoint.y -= iconinfo.yHotspot;

			if (iconinfo.hbmMask) DeleteObject(iconinfo.hbmMask);
			if (iconinfo.hbmColor) DeleteObject(iconinfo.hbmColor);
		}
		/*画鼠标*/
		::DrawIcon(hMemDC, xPoint.x, xPoint.y, hcur);
	}
	//动态分配的内存
	PRGBTRIPLE hdib = m_hdib;
	if (!hdib)
		return hdib;

	GetDIBits(hMemDC, hbm, 0, m_height, hdib, (LPBITMAPINFO)&pbi, DIB_RGB_COLORS);
	return hdib;
}

//
// 获取窗体鼠标光标
//
HCURSOR CCaptureScreen::FetchCursorHandle()
{
	if (m_hSavedCursor == NULL)
	{
		m_hSavedCursor = GetCursor();
	}
	return m_hSavedCursor;
}