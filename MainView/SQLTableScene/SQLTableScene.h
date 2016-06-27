#ifndef SQLTABLESCENE_H
#define SQLTABLESCENE_H


#include <QGraphicsScene>
#include "TitleText.h"
#include "SceneWidgets/ComboBox/ComboBox.h"

class SQLTableScene : public QGraphicsScene
{
    public:
        SQLTableScene();

    private:
        TitleText * titleText;
        ComboBox * tableComboBox;
};

#endif // SQLTABLESCENE_H
