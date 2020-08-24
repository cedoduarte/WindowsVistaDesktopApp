#ifndef ORBITGRAPHICSSCENE_H
#define ORBITGRAPHICSSCENE_H

#include <QGraphicsScene>

class OrbitItem;

class OrbitGraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    OrbitGraphicsScene(QObject *parent = nullptr);
    void setPixmap(const QPixmap &pixmap);
signals:
    void clicked();
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override;
private:
    OrbitItem *makeOrbitItem();
    OrbitItem *m_orbitItem;
};

#endif // ORBITGRAPHICSSCENE_H
