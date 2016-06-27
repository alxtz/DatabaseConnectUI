#ifndef COMBOBOX_H
#define COMBOBOX_H


#include <vector>
#include <QGraphicsRectItem>
#include "PopdownList.h"

using namespace std;

class ComboBox : public QGraphicsRectItem
{
    public:
        ComboBox();

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
