#include <QApplication>
#include <QDebug>
#include <stdio.h>
#include "helloworldwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    qDebug() << "Start Qt5"; 
    HelloWorld mainWindow;
    mainWindow.show();
    mainWindow.setMinimumHeight(480);
    mainWindow.setMinimumWidth(640);
    return app.exec();
}
