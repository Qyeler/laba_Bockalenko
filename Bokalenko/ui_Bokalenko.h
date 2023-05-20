/********************************************************************************
** Form generated from reading UI file 'BokalenkoEeRmfD.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef BOKALENKOEERMFD_H
#define BOKALENKOEERMFD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BokalenkoClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *output;
    QLineEdit *enter;
    QTextBrowser *path;
    QPushButton *to_do;
    QTextBrowser *disc;
    QPushButton *variant;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BokalenkoClass)
    {
        if (BokalenkoClass->objectName().isEmpty())
            BokalenkoClass->setObjectName("BokalenkoClass");
        BokalenkoClass->resize(831, 683);
        centralWidget = new QWidget(BokalenkoClass);
        centralWidget->setObjectName("centralWidget");
        output = new QTextBrowser(centralWidget);
        output->setObjectName("output");
        output->setGeometry(QRect(20, 40, 791, 421));
        QFont font;
        font.setPointSize(10);
        output->setFont(font);
        output->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        output->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        enter = new QLineEdit(centralWidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(10, 520, 461, 51));
        path = new QTextBrowser(centralWidget);
        path->setObjectName("path");
        path->setGeometry(QRect(10, 470, 331, 41));
        to_do = new QPushButton(centralWidget);
        to_do->setObjectName("to_do");
        to_do->setGeometry(QRect(10, 580, 141, 24));
        disc = new QTextBrowser(centralWidget);
        disc->setObjectName("disc");
        disc->setGeometry(QRect(20, 0, 791, 31));
        variant = new QPushButton(centralWidget);
        variant->setObjectName("variant");
        variant->setGeometry(QRect(170, 580, 141, 24));
        BokalenkoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BokalenkoClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 831, 22));
        BokalenkoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BokalenkoClass);
        mainToolBar->setObjectName("mainToolBar");
        BokalenkoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BokalenkoClass);
        statusBar->setObjectName("statusBar");
        BokalenkoClass->setStatusBar(statusBar);

        retranslateUi(BokalenkoClass);
        QObject::connect(to_do, SIGNAL(clicked(bool)), BokalenkoClass, SLOT(Click_to_info()));
        QObject::connect(variant, SIGNAL(clicked(bool)), BokalenkoClass, SLOT(Click_to_description()));

        QMetaObject::connectSlotsByName(BokalenkoClass);
    } // setupUi

    void retranslateUi(QMainWindow *BokalenkoClass)
    {
        BokalenkoClass->setWindowTitle(QCoreApplication::translate("BokalenkoClass", "Bokalenko", nullptr));
        path->setHtml(QCoreApplication::translate("BokalenkoClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\272 \320\277\320\260\320\277\320\272\320\265:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", nullptr));
        to_do->setText(QCoreApplication::translate("BokalenkoClass", "\320\220\320\275\320\260\320\273\320\270\320\267", nullptr));
        disc->setHtml(QCoreApplication::translate("BokalenkoClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265	          \320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\265                      \320\224\320\260\321\202\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217                       \320\220\321\202\321"
                        "\200\320\270\320\261\321\203\321\202\321\213	</p></body></html>", nullptr));
        variant->setText(QCoreApplication::translate("BokalenkoClass", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BokalenkoClass: public Ui_BokalenkoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BOKALENKOEERMFD_H
