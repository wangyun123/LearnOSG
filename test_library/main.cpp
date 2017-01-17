/*
*	ѧϰwindows�¶�̬���̼���
*	�ο���http://blog.csdn.net/u010003835/article/details/48348733
*	���ֵ�����������ķ���
*
*	1������library03: Դ���к���ǰ��ӹؼ��� __declspec(dllexport)
*
*	ע��ʹ��΢��ר�õ�_declspec (dllexport)ʱ��cpp�ļ��ڱ���ΪOBJ�ļ�ʱ
*	Ҫ�Ժ�����������������C���Ի�Ѻ���name��������Ϊ_name,
*	��C++����������Ϊ_name@@decoration,
*	����ʱ����Func add = (Func)GetProcAddress(hModule, "?add@@YAHHH@Z");
*	
*	extern "C" TEST_LIBRARY_API int add3(int a, int b);
*
*	2������library02: def�ļ��е�EXPORTS��� 
*
*	���*.def�ļ���������->����->ģ�鶨���ļ���ָ����def�ļ�
*	ע��ʹ��.def�ļ���DLL�е�������ʱ������Ҫ�ڱ�����ָ��__declspec(dllexport)
*	���ǣ����κ�ʹ��DLL���ļ��У��Ա���������������ʹ��__declspec(dllimport)
*
*	3����δ����: LINK�����е�/EXPORT�淶  
*
*/
#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

//#define DYNAMIC_LOADING

// exe�ļ�ͬ�����Ե�����������
// �ο���http://www.cppblog.com/Streamlet/archive/2012/12/01/195858.html
// ������DLLһ������EXE�ﵼ������������ʱ���Ծ�̬����Ҳ���Զ�̬���ء�
// EXEֻ��Ϊһ�������ڵ�ģ�鱻���أ���������һ�����̡����ع�����EXE�е�WinMain�������ᱻ���á�

#ifndef DYNAMIC_LOADING
#include "../library04/library04.h"
#pragma comment(lib, "../debug/library04.lib")
#endif

int main(int argc, char* argv[])
{
#ifdef DYNAMIC_LOADING
	//! ��̬���ؿ��ļ�
	printf("dynamic loading the library!\n");
	int result;
	result = add4(10,20);
	printf("static library01, this is exe file! result=%d\n", result);
#else
	//! ��̬���ؿ��ļ�
	HMODULE hModule = LoadLibrary(_T("library01.exe"));
	if (hModule== nullptr)
	{
		printf("can't load library01\n");
		//getchar();
		return 0;
	}

	typedef int (*Func)(int a, int b);
	Func add = (Func)GetProcAddress(hModule, "?add@@YAHHH@Z");
	if (add == nullptr)
	{
		printf("can't load func\n");
		//getchar();
		return 0;
	}
	int result;
	result = add(10,20);
	printf("synamic library01, this is exe file! result=%d\n", result);

	FreeLibrary(hModule);
#endif

	return 0;
}