#include "cmainwindow.h"

#include "openCV.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	cMainWindow w;
	w.show();

	core__mat_the_basic_image_container();

	return a.exec();
}
