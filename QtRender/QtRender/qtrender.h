#ifndef QTRENDER_H
#define QTRENDER_H

#include <QtGui/QMainWindow>
#include "ui_qtrender.h"

class QtRenderWidget;

class QtRender : public QMainWindow
{
	Q_OBJECT

public:
	QtRender(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QtRender();

private:
	Ui::QtRenderClass	ui;
	QtRenderWidget*		_pRenderWidget;
};

#endif // QTRENDER_H
