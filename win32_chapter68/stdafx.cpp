// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// win32_chapter68.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"
#include <stdio.h>

// TODO: �� STDAFX.H ��
// �����κ�����ĸ���ͷ�ļ����������ڴ��ļ�������

void __cdecl OutputDebugStringF(const char* format, ...)
{
	va_list vlArgs;
	char *strBuffer = (char*)GlobalAlloc(GPTR, 4096);

	va_start(vlArgs, format);
	_vsnprintf(strBuffer, 4096-1, format, vlArgs);
	va_end(vlArgs);

	strcat(strBuffer, "\n");
	OutputDebugStringA(strBuffer);
	GlobalFree(strBuffer);
	return ;
}