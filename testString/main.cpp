#include <string>
#include <QtCore/QCoreApplication>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	printf("Hello world!\n");
	char* str10 = "��Ȩ����";//"��";//
	char str11[] = "��Ȩ����";
	QString str1("��Ȩ����");
	QString str2(QString::fromStdWString(L"��"));
// 	QString str3(QString::fromUtf8(u8"��"));	//c++11
	QString str4(QObject::tr("��"));

	return a.exec();
}
