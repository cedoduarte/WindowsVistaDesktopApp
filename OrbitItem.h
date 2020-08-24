#ifndef ORBITITEM_H
#define ORBITITEM_H

#include <QGraphicsObject>
#include <QPixmap>

class OrbitItem : public QGraphicsObject
{
    Q_OBJECT
public:
    OrbitItem(QGraphicsItem *parent = nullptr);
    void setPixmap(const QPixmap &pixmap);
protected:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
private:
    QPixmap m_pixmap;
};

#endif // ORBITITEM_H
