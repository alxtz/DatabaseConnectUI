#ifndef COMBOBOX_H
#define COMBOBOX_H


#include <vector>
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include "PopdownList.h"

using namespace std;

class ComboBox : public QObject , public QGraphicsRectItem
{
    Q_OBJECT

    public:
        ComboBox();

        //Mouse reactions
        void mousePressEvent (QGraphicsSceneMouseEvent * event);
        void hoverEnterEvent (QGraphicsSceneMouseEvent * event);
        void hoverLeaveEvent (QGraphicsSceneMouseEvent * event);

    private:
        //Default
        int width;
        int height;
        bool isPop;

        //Texts
        QGraphicsTextItem * focusTableTextItem;
        QString focusTable;
        vector<QString> * tableList;

        //PopdownList
        PopdownList * popdownList;

        //Functions
        void setTableList();
        void setFocusTable();
};

#endif // COMBOBOX_H
