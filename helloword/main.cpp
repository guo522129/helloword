#include "helloword.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	helloword w;
	w.show();
	return a.exec();
}
