#include <QColor>
#include <QBrush>
#include "PopdownList.h"
#include "PopoutListOption.h"

PopdownList::PopdownList(QGraphicsItem * parent) : QGraphicsRectItem(parent)
{
    setBrush (QColor(Qt::cyan));
}

void PopdownList::setTableList(vector<QString> * inputTableList)
{
    tableList = inputTableList;
}

void PopdownList::setSize(int width, int height)
{
    setRect( 0 , 0 , width , height*tableList->size () );
    setPos( 0 , height );

    optionWidth = width;
    optionHeight = height;
}

void PopdownList::setOptions()
{
    for( int i=0; i<tableList->size(); ++i )
    {
        PopoutListOption * newOption = new PopoutListOption(this);
        newOption->setSize ( optionWidth , optionHeight );
        newOption->setPos(0 , optionHeight*i );
        newOption->setOptionText (tableList->at(i));
    }
}
