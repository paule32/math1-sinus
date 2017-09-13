#include <cmath>
#include <QDebug>
#include "paintgraph.h"

#ifndef PI
#define PI 3.142
#endif

PaintGraph::PaintGraph() { }

QRectF PaintGraph::boundingRect() const
{
    return QRectF(0,0,200,200);
}

void PaintGraph::paint(QPainter *painter,
                       const QStyleOptionGraphicsItem * option,
                       QWidget * widget)
{
    QRectF rect = boundingRect();

    QPen pen(Qt::black,2);
    painter->setPen(pen);

    painter->drawLine(QPoint(10 ,  100), QPoint(200,  100));
    painter->drawLine(QPoint(100,   10), QPoint(100,  210));
    painter->drawLine(QPoint(100, -100), QPoint(100, -210));

    float freq = 200;
    float amp  = 50;

    int xpos, ypos;
    int p1, p2;

    for (xpos = 0; xpos < 200; xpos++) {
        ypos = floor(100+amp*sin(2*PI*xpos/freq));
        painter->drawPoint(xpos,ypos);

        p1 = xpos;
        p2 = ypos;
        pixel_counter += p1 + p2;
    }

    painter->drawText(10,10,QString("Pixels: %1")
    .arg(-pixel_counter/2));
}
