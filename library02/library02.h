/*
*	2������library02: def�ļ��е�EXPORTS��� 
*
*	���*.def�ļ���������->����->ģ�鶨���ļ���ָ����def�ļ�
*	ע��ʹ��.def�ļ���DLL�е�������ʱ������Ҫ�ڱ�����ָ��__declspec(dllexport)
*	���ǣ����κ�ʹ��DLL���ļ��У��Ա���������������ʹ��__declspec(dllimport)?? ��֪�ο��δ�
*	���������ڣ�http://blog.csdn.net/u010003835/article/details/48348733
*
*	���Թ��̣�������load-time����run-time���ã�������Ҫʹ������__declspec(dllimport)
*
*	�ɽ�ԭ�к����������������
*	�ο���http://www.cppblog.com/FateNo13/archive/2009/08/24/94224.html
*
*	�ȿ���EXPORTS�﷨����
*	entryname[=internalname] [@ordinal [NONAME]] [PRIVATE] [DATA]
*
*	EXPORTS
*	func2=add2	����=����
*
*/

#ifndef LIBRARY_02_H
#define LIBRARY_02_H

int add2(int a, int b);
int sub2(int a, int b);
int mul2(int a, int b);
int div2(int a, int b);

#endif //LIBRARY_02_H