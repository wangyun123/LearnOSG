// win32_chapter68.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Winnt.h>

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	int i=10;
	OutputDebugStringA("hello world!\n");
	OutputDebugStringF("�й� %d\n", i);
	OutputDebugStringW(L"�й�\n");

	return 0;
}
