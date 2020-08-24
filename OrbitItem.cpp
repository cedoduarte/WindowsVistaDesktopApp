#include "OrbitItem.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>

OrbitItem::OrbitItem(QGraphicsItem *parent)
    : QGraphicsObject(parent)
{
    m_pixmap.load(":/orbit.png");
}

void OrbitItem::setPixmap(const QPixmap &pixmap)
{
    m_pixmap = pixmap;
    update();
}

QRectF OrbitItem::boundingRect() const
{
    return m_pixmap.rect();
}

void OrbitItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    (void) option;
    (void) widget;
    painter->drawPixmap(boundingRect().toRect(), m_pixmap);
}
