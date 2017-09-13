#ifndef PAINTGRAPH_H
#define PAINTGRAPH_H

#include <QObject>
#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsItem>

class PaintGraph: public QGraphicsItem
{
public:
    PaintGraph();
    QRectF boundingRect() const;

    virtual void paint(QPainter *painter,
               const QStyleOptionGraphicsItem * option,
               QWidget * widget) override;
    int pixel_counter;
};

#endif // PAINTGRAPH_H
