#include <QGraphicsView>
#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent),
  ui(new Ui::MainWindow)
{
    setFixedSize (802 , 602);

    ui->setupUi (this);

    sqlTableScene = new SQLTableScene();
    ui->graphicsView->setHorizontalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setScene (sqlTableScene);


}

MainWindow::~MainWindow()
{
    delete ui;
}
