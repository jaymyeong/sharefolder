#include <QtGui/qguiapplication.h>
#include <QtWidgets/qlabel.h>

int main(int argc, char *argv[]) {
	QGuiApplication app(argc, argv);
	QLabel *label = new QLabel("Hello QT!");
	label->show();
	return app.exec();
}
