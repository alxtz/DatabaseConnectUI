#include <QColor>
#include <QBrush>
#include "PopoutListOption.h"

PopoutListOption::PopoutListOption(QGraphicsItem * parent) : QGraphicsRectItem(parent)
{
    setRect(0 , 0 , 0 , 0);
    setBrush(QColor(Qt::green));
    optionTextItem = new QGraphicsTextItem(this);
}

void PopoutListOption::setSize(int width, int height)
{
    setRect( 0 , 0 , width , height );
}

void PopoutListOption::setOptionText(QString inputString)
{
    optionText = inputString;
    optionTextItem->setPlainText (optionText);
}
