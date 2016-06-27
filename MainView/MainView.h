#ifndef MAINVIEW_H
#define MAINVIEW_H


#include <QGraphicsView>
#include "SQLTableScene/SQLTableScene.h"

class MainView : public QGraphicsView
{
    public:
        MainView(QWidget * parent = 0);

    private:
        SQLTableScene * sqlTableScene;
};

#endif // MAINVIEW_H
