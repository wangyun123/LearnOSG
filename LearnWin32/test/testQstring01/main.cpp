
#include <QtCore/QCoreApplication>
#include <QString>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	QString ss = "asdf";

	return a.exec();
}
