#include <string>
#include <QtCore/QCoreApplication>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	printf("Hello world!\n");
	char* str10 = "授权激活";//"啊";//
	char str11[] = "授权激活";
	QString str1("授权激活");
	QString str2(QString::fromStdWString(L"啊"));
// 	QString str3(QString::fromUtf8(u8"啊"));	//c++11
	QString str4(QObject::tr("啊"));

	return a.exec();
}
