#include <gl/glew.h>

#include "qtrender.h"
#include "QtRenderWidget.h"

#include <QHBoxLayout>
#include <QGLFormat>
#include <QtOpenGL/qgl.h>

QtRender::QtRender(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	//OpenGLVersionFlags version = QGLFormat::openGLVersionFlags();
	QGLFormat::OpenGLVersionFlags version = QGLFormat::openGLVersionFlags();

	_pRenderWidget = new QtRenderWidget( ui.centralWidget );
	ui.renderLayout->addWidget( _pRenderWidget );
}

QtRender::~QtRender()
{

}
