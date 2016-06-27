#ifndef POPOUTLISTOPTION_H
#define POPOUTLISTOPTION_H


#include <QObject>
#include <QGraphicsTextItem>
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class PopoutListOption : public QObject , public QGraphicsRectItem
{
    Q_OBJECT

    public:
        PopoutListOption(QGraphicsItem * parent = 0);
        void setSize(int width , int height);
        void setOptionText(QString inputString);
        void setIndex(int inputIndex);

        //Mouse reactions
        void mousePressEvent (QGraphicsSceneMouseEvent * event);
        void hoverEnterEvent (QGraphicsSceneMouseEvent * event);
        void hoverLeaveEvent (QGraphicsSceneMouseEvent * event);

    signals:
        void clickedIndex(int);

    private:
        int index;
        QString optionText;
        QGraphicsTextItem * optionTextItem;
};

#endif // POPOUTLISTOPTION_H
