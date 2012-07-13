#include <QGLWidget>

class QtRenderWidget: public QGLWidget
{
					Q_OBJECT

public:
					QtRenderWidget(QWidget* pParent);

protected:
	virtual void	initializeGL();
	virtual void	resizeGL(int w, int h);
	virtual void	paintGL();
};