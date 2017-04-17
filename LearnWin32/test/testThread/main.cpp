#include <windows.h>
#include <stdio.h>

//1>MSVCRTD.lib(crtexew.obj) : error LNK2019: �޷��������ⲿ���� _WinMain@16���÷����ں��� ___tmainCRTStartup �б�����
// 1>D:\Learn\LearnOSG\LearnWin32\test\Debug\testThread.exe : fatal error LNK1120: 1 ���޷��������ⲿ����
#include <tchar.h>
#include "resource.h"

/*
*	ע���̵߳���ֹ�����֣�
*	1�� ExitThread()
*	    �ŵ㣺��ȫ�ġ������ȴ��߳̽�������ִ�������̵���һ�д���
*		ȱ�㣺ֻ�����߳��ڲ�ʹ�øú������������� ThreadProc������ʹ�ã�
*	    
*	2) �߳�ִ����ɣ���ȫ�ġ�
*	    �ŵ㣺��ȫ�ġ������ȴ��߳̽���
*		ȱ�㣺ֻ�ܵȴ��߳��Լ��������
*
*	3) TerminateThread(),����ȫ�ġ����������߳�����ָֹ���߳�
*	   �ص㣺CPU����ȴ��߳̽�����ִ����һ�д��롣��Ҫʹ��WaitForSingleObject()���ȴ��߳̽�����
*
*/
DWORD nCount=1000;
HWND hEdit=NULL;		// �༭��
HANDLE hThread=NULL;	// �߳̾��

// �Ի������Ϣ��Ӧ����
BOOL CALLBACK MainDlgProc(HWND   hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);

// �߳�1 ����
DWORD WINAPI ThreadProc1(LPVOID lpParameter);
// �߳�2 ����
DWORD WINAPI ThreadProc2(LPVOID lpParameter);
// �߳�3 ����
DWORD WINAPI ThreadProc3(LPVOID lpParameter);

int APIENTRY _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       nCmdShow)
{
	printf("hInstance=\t %x\n", hInstance);
	printf("hPrevInstance=\t %x\n", hPrevInstance);
	printf("lpCmdLine=\t %s\n", lpCmdLine);
	printf("nCmdShow=\t %d\n", nCmdShow);
	DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG_MAIN), NULL, MainDlgProc);
	return 0;
}

BOOL CALLBACK MainDlgProc(HWND   hwndDlg,
	UINT   uMsg, WPARAM wParam, LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_INITDIALOG:
		{
			hEdit= GetDlgItem(hwndDlg, IDC_EDIT_COUNT);
			LPCTSTR str=L"1000";
			SetWindowText(hEdit, str);
			break;
		}
	case WM_CLOSE:
		{
			::EndDialog(hwndDlg, 0);
			break;
		}
	case WM_COMMAND:
		{
			switch(LOWORD(wParam))
			{
			case IDC_BUTTON_START:
				{
					LPDWORD lpThreadId=NULL;
					hThread = ::CreateThread(NULL, 0, ThreadProc1, NULL, 0,lpThreadId);
					// ��ȡcontext
					CONTEXT context;
					context.ContextFlags = CONTEXT_CONTROL;
					::GetThreadContext(hThread, &context);
					break;
				}
			case IDC_BUTTON_SUSPEND:
				{
					::SuspendThread(hThread);
				}
				break;
			case IDC_BUTTON_RESUME:
				{
					::ResumeThread(hThread);
				}
				break;
			case IDC_BUTTON_EXIT:
				{
					// [�����̷߳�ʽ 3] �������߳��н���ָ���߳�
					::TerminateThread(hThread, 2);
					::WaitForSingleObject(hThread, INFINITE);
				}
				break;
			}
			break;
		}
	}
	return 0;
}

DWORD WINAPI ThreadProc(LPVOID lpParameter)
{
	while(nCount>0)
	{
		if (nCount == 950)
		{
			// [�����̷߳�ʽ 1] ͨ�������ж��������߳�����
			ExitThread(2);
		}
		TCHAR str[10];
		memset(str, 0, sizeof(TCHAR)*10);
		// sprintf��wprintf������
		swprintf(str, L"%d", --nCount);
		Sleep(200);
		SetWindowText(hEdit, str);
	}

	// [�����̷߳�ʽ 2]�����ȴ��߳����н���
	return 0;
}

DWORD WINAPI ThreadProc1(LPVOID lpParameter)
{
	int i;
	while(i>10)
	{
// 		printf();
		Sleep(200);
	}

	// [�����̷߳�ʽ 2]�����ȴ��߳����н���
	return 0;
}