#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setFixedSize (802 , 602);

    mainView = new MainView(this);
}

MainWindow::~MainWindow()
{

}
