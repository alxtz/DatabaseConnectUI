#ifndef POPOUTLISTOPTION_H
#define POPOUTLISTOPTION_H


#include <QGraphicsTextItem>
#include <QGraphicsRectItem>

class PopoutListOption : public QGraphicsRectItem
{
    public:
        PopoutListOption(QGraphicsItem * parent = 0);
        void setSize(int width , int height);
        void setOptionText(QString inputString);

    private:
        QString optionText;
        QGraphicsTextItem * optionTextItem;
};

#endif // POPOUTLISTOPTION_H
