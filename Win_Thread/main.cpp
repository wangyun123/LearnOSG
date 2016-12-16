#include <process.h>
#include <stdio.h>
#include <windows.h>

static int g_buffer;
DWORD WINAPI ProductorThread(LPVOID lpParameter)
{
	for (int i=0; i<10000; i++)
	{
		g_buffer = i;
	}
	return 0;
}

DWORD WINAPI ConsumerThread(LPVOID lpParameter)
{
	while (TRUE)
	{
		if (g_buffer)
			printf("The consumer read : %d...\n", g_buffer);
		else
			Sleep(1);
	}
	//return 0;
}

int main(int argc, char* argv[])
{
	HANDLE hProducter1 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ProductorThread, 0, 0, 0);
	HANDLE hProducter2 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ProductorThread, 0, 0, 0);

	return 0;
}