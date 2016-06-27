#include <QDebug>
#include <QBrush>
#include <QColor>
#include <QPixmap>
#include "ComboBox.h"

ComboBox::ComboBox()
{
    //Default
    width = 200;
    height = 25;
    isPop = false;
    setRect( 0 , 0 , width , height );
    setPos(300 , 80);
    setBrush(QBrush(QColor(255 , 255 , 255)));
    tableList = new vector<QString>();

    //FocusTableTextItem;
    focusTableTextItem= new QGraphicsTextItem(this);

    //PopdownList
    popdownList = new PopdownList(this);

    //Arrow
    arrow = new QGraphicsPixmapItem(this);
    arrow->setPixmap (QPixmap("./Images/downArrow.png"));
    arrow->setPos(180 , 5);

    //Setup
    setTableList ();
    setFocusTable ();
    popdownList->setTableList (tableList);
    popdownList->setSize (width , height);
    popdownList->setOptions ();
    popdownList->setVisible (false);

    //Set focus signal and slots
    for(int i=0; i<tableList->size (); ++i)
    {
        connect(popdownList->optionList.at(i) , SIGNAL(clickedIndex(int)) , this , SLOT(getIndex(int)) );
    }
}

void ComboBox::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(isPop==false)
    {
        isPop = true;
        popdownList->setVisible (true);
        arrow->setPixmap (QPixmap("./Images/upArrow.png"));
    }
    else
    {
        isPop = false;
        popdownList->setVisible (false);
        arrow->setPixmap (QPixmap("./Images/downArrow.png"));
    }
}

void ComboBox::hoverEnterEvent(QGraphicsSceneMouseEvent *event)
{

}

void ComboBox::hoverLeaveEvent(QGraphicsSceneMouseEvent *event)
{

}

void ComboBox::getIndex(int clickedIndex)
{
    if(isPop==false)
    {
        isPop = true;
        popdownList->setVisible (true);
        arrow->setPixmap (QPixmap("./Images/upArrow.png"));
    }
    else
    {
        focusTable = tableList->at(clickedIndex);
        focusTableTextItem->setPlainText (focusTable);

        isPop = false;
        popdownList->setVisible (false);
        arrow->setPixmap (QPixmap("./Images/downArrow.png"));
    }
}

void ComboBox::setTableList()
{
    tableList->push_back (QString("CODE_COMPANY_MAIN"));
    tableList->push_back (QString("CODE_DAY"));
    tableList->push_back (QString("CODE_HARBOR"));
    tableList->push_back (QString("CODE_TEU_RANGE"));
    tableList->push_back (QString("CODE_VESSEL_SIZE"));
    tableList->push_back (QString("REPORT_B01"));
    tableList->push_back (QString("REPORT_B02"));
    tableList->push_back (QString("REPORT_B04"));
    tableList->push_back (QString("REPORT_B08"));
    tableList->push_back (QString("REPORT_B012"));
    tableList->push_back (QString("REPORT_B016"));
    tableList->push_back (QString("REPORT_MAP_PORT"));
    tableList->push_back (QString("REPORT_TITLE"));
    tableList->push_back (QString("TEMP_LIST_LOOP"));
}

void ComboBox::setFocusTable()
{
    //Set the focus table to CODE_COMPANY_MAIN
    focusTable = tableList->at(0);
    focusTableTextItem->setPlainText (focusTable);
}
