// DynamicLibrary2.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "DynamicLibrary2.h"


// ���ǵ���������һ��ʾ��
DYNAMICLIBRARY2_API int nDynamicLibrary2=0;

// ���ǵ���������һ��ʾ����
DYNAMICLIBRARY2_API int fnDynamicLibrary2(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� DynamicLibrary2.h
CDynamicLibrary2::CDynamicLibrary2()
{
	return;
}
