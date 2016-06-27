#include <QBrush>
#include <QColor>
#include "SQLTableScene.h"

SQLTableScene::SQLTableScene()
{
    setSceneRect ( 0 , 0 , 800 , 600 );
    setBackgroundBrush (QBrush(QColor(255 , 255 , 171)));

    //Title
    titleText = new TitleText();
    addItem(titleText);

    //ComboBox for table
    tableComboBox = new ComboBox();
    addItem(tableComboBox);
}
