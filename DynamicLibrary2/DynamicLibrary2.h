// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DYNAMICLIBRARY2_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DYNAMICLIBRARY2_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DYNAMICLIBRARY2_EXPORTS
#define DYNAMICLIBRARY2_API __declspec(dllexport)
#else
#define DYNAMICLIBRARY2_API __declspec(dllimport)
#endif

// �����Ǵ� DynamicLibrary2.dll ������
class DYNAMICLIBRARY2_API CDynamicLibrary2 {
public:
	CDynamicLibrary2(void);
	// TODO: �ڴ�������ķ�����
};

extern DYNAMICLIBRARY2_API int nDynamicLibrary2;

DYNAMICLIBRARY2_API int fnDynamicLibrary2(void);
