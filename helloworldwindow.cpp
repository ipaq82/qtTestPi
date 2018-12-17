#include "helloworldwindow.h"

HelloWorld::HelloWorld(QWidget *parent) : QWidget(parent)
{
    
    setMainForm();
}

HelloWorld::~HelloWorld()
{
        
}

void HelloWorld::setMainForm()
{
    QWidget *centralWidget;
    centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout;
    centralWidget->setLayout(layout);
 
    groupBoxView = new QGroupBox("Лог:");
    groupBoxView->setMinimumWidth(200);
    layout->addWidget(groupBoxView);
    
    layoutWindow = new QGridLayout;
    groupBoxView->setLayout(layoutWindow);
    
    buttonTest = new QPushButton("Test");
    layoutWindow->addWidget(buttonTest);
    setWindowTitle("test app");
    
    connect(buttonTest, SIGNAL(clicked()), this, SLOT(slotClickButtonTest()));    
}

void HelloWorld::slotClickButtonTest()
{
    qDebug() << "clickButtonTest!";
}
