#include "StartMenu.h"
#include "StartMenuForm.h"
#include <QWidgetAction>
#include <QVBoxLayout>

StartMenu::StartMenu(QWidget *parent)
    : QMenu(parent)
{
    init();
    resize(sizeHint());
    setStyleSheet("background-color: rgb(78, 96, 140);");
    connect(m_startMenuForm, &StartMenuForm::appItemSelected, this, &StartMenu::appItemSelected);
    connect(m_startMenuForm, &StartMenuForm::systemItemSelected, this, &StartMenu::systemItemSelected);
    connect(m_startMenuForm, &StartMenuForm::appItemSelected, this, &StartMenu::close);
    connect(m_startMenuForm, &StartMenuForm::systemItemSelected, this, &StartMenu::close);
}

QWidgetAction *StartMenu::makeWidgetAction()
{
    QWidgetAction *action = new QWidgetAction(this);
    action->setDefaultWidget(m_startMenuForm);
    addAction(action);
    return action;
}

void StartMenu::init()
{
    m_startMenuForm = new StartMenuForm(this);
    m_widgetAction = makeWidgetAction();
}
