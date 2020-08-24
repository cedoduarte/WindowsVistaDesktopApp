#ifndef ORBITBUTTON_H
#define ORBITBUTTON_H

#include <QGraphicsView>

class OrbitGraphicsScene;

class OrbitButton : public QGraphicsView
{
    Q_OBJECT
public:
    OrbitButton(QWidget *parent = nullptr);
    void setPixmap(const QPixmap &pixmap);
signals:
    void clicked();
private:
    OrbitGraphicsScene *makeScene();
    OrbitGraphicsScene *m_scene;
};

#endif // ORBITBUTTON_H
