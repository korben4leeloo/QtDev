#include "QtRenderWidget.h"

QtRenderWidget::QtRenderWidget(QWidget *	pParent)
: QGLWidget( pParent )
{

}

void QtRenderWidget::initializeGL()
{
	 qglClearColor( Qt::darkGray );
}

void QtRenderWidget::resizeGL(int w, int h)
{
	
}

void QtRenderWidget::paintGL()
{
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
}