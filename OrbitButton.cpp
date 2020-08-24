#include "OrbitButton.h"
#include "OrbitGraphicsScene.h"

OrbitButton::OrbitButton(QWidget *parent)
    : QGraphicsView(parent)
{
    setStyleSheet("background: transparent");
    m_scene = makeScene();
}

void OrbitButton::setPixmap(const QPixmap &pixmap)
{
    m_scene->setPixmap(pixmap);
}

OrbitGraphicsScene *OrbitButton::makeScene()
{
    OrbitGraphicsScene *scene = new OrbitGraphicsScene(this);
    setScene(scene);
    connect(scene, &OrbitGraphicsScene::clicked, this, &OrbitButton::clicked);
    return scene;
}
