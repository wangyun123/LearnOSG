/*
*	1������library03: Դ���к���ǰ��ӹؼ��� __declspec(dllexport)
*
*	ע��ʹ��΢��ר�õ�_declspec (dllexport)ʱ��cpp�ļ��ڱ���ΪOBJ�ļ�ʱ
*	Ҫ�Ժ�����������������C���Ի�Ѻ���name��������Ϊ_name,
*	��C++����������Ϊ_name@@decoration,
*	����ʱ����Func add = (Func)GetProcAddress(hModule, "?add@@YAHHH@Z");
*	
*	extern "C" TEST_LIBRARY_API int add3(int a, int b);
*
*/

#ifndef LIBRARY_03_H
#define LIBRARY_03_H

#define TEST_LIBRARY

#ifdef TEST_LIBRARY
#define TEST_LIBRARY_API __declspec(dllexport)
#else
#define TEST_LIBRARY_API __declspec(dllimport)
#endif

extern "C" TEST_LIBRARY_API int add3(int a, int b);
extern "C" TEST_LIBRARY_API int sub3(int a, int b);
extern "C" TEST_LIBRARY_API int mul3(int a, int b);
extern "C" TEST_LIBRARY_API int div3(int a, int b);
extern "C" int add(int a, int b);

#endif //LIBRARY_03_H