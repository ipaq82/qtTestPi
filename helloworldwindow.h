#include <QWidget>
#include <QtWidgets>
#include <QMainWindow>

//test

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
class QUdpSocket;
class QAction;
class QPlainTextEdit;
class QString;
QT_END_NAMESPACE


class HelloWorld : public QWidget
{
	Q_OBJECT
	
public: 
	HelloWorld (QWidget *parent = 0);
	~HelloWorld();
	
private:
	void setMainForm();
	QGroupBox   *groupBoxView;
	QPushButton *buttonTest;
	QGridLayout *layoutWindow;
	
private slots:
	void slotClickButtonTest();
	
};
