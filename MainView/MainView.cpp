#include "MainView.h"

MainView::MainView(QWidget * parent) : QGraphicsView(parent)
{
    setFixedSize (802 , 602);

    sqlTableScene = new SQLTableScene();
    setScene(sqlTableScene);
}
