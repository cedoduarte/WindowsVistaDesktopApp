#include "OrbitGraphicsScene.h"
#include "OrbitItem.h"
#include <QGraphicsSceneMouseEvent>

OrbitGraphicsScene::OrbitGraphicsScene(QObject *parent)
    : QGraphicsScene(parent)
{
    setBackgroundBrush(QBrush(Qt::transparent));
    m_orbitItem = makeOrbitItem();
}

void OrbitGraphicsScene::setPixmap(const QPixmap &pixmap)
{
    m_orbitItem->setPixmap(pixmap);
}

void OrbitGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_orbitItem->isUnderMouse())
    {
        emit clicked();
    }
    QGraphicsScene::mousePressEvent(event);
}

void OrbitGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_orbitItem->isUnderMouse())
    {
        emit clicked();
    }
    QGraphicsScene::mouseDoubleClickEvent(event);
}

OrbitItem *OrbitGraphicsScene::makeOrbitItem()
{
    OrbitItem *item = new OrbitItem;
    addItem(item);
    return item;
}
