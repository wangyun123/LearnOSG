#include "testwidgets.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testWidgets w;
	w.show();
	return a.exec();
}
