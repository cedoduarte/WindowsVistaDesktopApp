#ifndef STARTMENU_H
#define STARTMENU_H

#include <QMenu>

class QWidgetAction;
class StartMenuForm;

class StartMenu : public QMenu
{
    Q_OBJECT
public:
    StartMenu(QWidget *parent = nullptr);
signals:
    void appItemSelected(int item);
    void systemItemSelected(int item);
private:
    void init();
    QWidgetAction *makeWidgetAction();

    QWidgetAction *m_widgetAction;
    StartMenuForm *m_startMenuForm;
};

#endif // STARTMENU_H
