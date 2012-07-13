/********************************************************************************
** Form generated from reading UI file 'qtrender.ui'
**
** Created: Fri 13. Jul 11:24:09 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRENDER_H
#define UI_QTRENDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtRenderClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *renderLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtRenderClass)
    {
        if (QtRenderClass->objectName().isEmpty())
            QtRenderClass->setObjectName(QString::fromUtf8("QtRenderClass"));
        QtRenderClass->resize(829, 469);
        centralWidget = new QWidget(QtRenderClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        renderLayout = new QVBoxLayout();
        renderLayout->setSpacing(6);
        renderLayout->setObjectName(QString::fromUtf8("renderLayout"));

        verticalLayout_2->addLayout(renderLayout);

        QtRenderClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtRenderClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 829, 21));
        QtRenderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtRenderClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtRenderClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtRenderClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtRenderClass->setStatusBar(statusBar);

        retranslateUi(QtRenderClass);

        QMetaObject::connectSlotsByName(QtRenderClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtRenderClass)
    {
        QtRenderClass->setWindowTitle(QApplication::translate("QtRenderClass", "QtRender", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtRenderClass: public Ui_QtRenderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRENDER_H
