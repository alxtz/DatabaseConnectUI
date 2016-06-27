#ifndef POPDOWNLIST_H
#define POPDOWNLIST_H


#include <vector>
#include <QGraphicsRectItem>

using namespace std;

class PopdownList : public QGraphicsRectItem
{
    public:
        PopdownList(QGraphicsItem * parent = 0);

        //Functions
        void setTableList(vector<QString> * inputTableList );
        void setSize(int width , int height);
        void setOptions();

        //Option data
        int optionWidth;
        int optionHeight;

    private:
        vector<QString> * tableList;
};

#endif // POPDOWNLIST_H
