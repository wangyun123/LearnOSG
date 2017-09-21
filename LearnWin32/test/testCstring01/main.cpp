
#include <QtCore/QCoreApplication>

#include <afx.h>
#include <afxdb.h>
#include <iostream>


// CWinApp theApp;
using namespace std;

int main(int argc, char *argv[])
{
	// try to initialize MFC

	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		cerr << "MFC failed to initialize!" << endl;
		return 1;
	}

	// try to connect to an ODBC database that doesn't exist
	// (this wouldn't work at all without initializing MFC)

	CDatabase db;


	QCoreApplication a(argc, argv);
	CString ss = "123";
// 	CArray<int, int&>  aa ;
	return a.exec();
}
