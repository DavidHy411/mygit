#include "mainwindow.h"
#include <QApplication>
#include <qpushbutton.h>
#include <qfont.h>

int main(int argc, char *argv[])
{
     QApplication a( argc, argv );
     MainWindow w;
     w.setWindowTitle("慕熠电子测试软件");
     w.show();
     return a.exec();
}
