#include "qtrender.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtRender w;
	w.show();
	return a.exec();
}
