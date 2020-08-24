#include "NotepadMenuBar.h"
#include <QPlainTextEdit>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

NotepadMenuBar::NotepadMenuBar(QWidget *parent)
    : QMenuBar(parent)
{
    m_plainTextEdit = nullptr;
}

void NotepadMenuBar::setPlainTextEdit(QPlainTextEdit *plainTextEdit)
{
    m_plainTextEdit = plainTextEdit;
    addMenu(makeFileMenu());
    addMenu(makeEditMenu());
}

QMenu *NotepadMenuBar::makeFileMenu()
{
    QMenu *menu = new QMenu(this);
    menu->setTitle("Archivo");
    menu->addAction(makeNewAction());
    menu->addAction(makeOpenAction());
    menu->addAction(makeSaveAction());
    return menu;
}

QMenu *NotepadMenuBar::makeEditMenu()
{
    QMenu *menu = new QMenu(this);
    menu->setTitle("Editar");
    menu->addAction(makeCopyAction());
    menu->addAction(makeCutAction());
    menu->addAction(makePasteAction());
    return menu;
}

QAction *NotepadMenuBar::makeNewAction()
{
    QAction *action = new QAction(this);
    action->setText("Nuevo");
    action->setIcon(QIcon(":/new.png"));
    connect(action, &QAction::triggered, m_plainTextEdit, &QPlainTextEdit::clear);
    return action;
}

QAction *NotepadMenuBar::makeOpenAction()
{
    QAction *action = new QAction(this);
    action->setText("Abrir");
    action->setIcon(QIcon(":/open.png"));
    connect(action, &QAction::triggered, this, &NotepadMenuBar::onOpen);
    return action;
}

QAction *NotepadMenuBar::makeSaveAction()
{
    QAction *action = new QAction(this);
    action->setText("Guardar");
    action->setIcon(QIcon(":/save.png"));
    connect(action, &QAction::triggered, this, &NotepadMenuBar::onSave);
    return action;
}

QAction *NotepadMenuBar::makeCopyAction()
{
    QAction *action = new QAction(this);
    action->setText("Copiar");
    action->setIcon(QIcon(":/copy.png"));
    connect(action, &QAction::triggered, m_plainTextEdit, &QPlainTextEdit::copy);
    return action;
}

QAction *NotepadMenuBar::makeCutAction()
{
    QAction *action = new QAction(this);
    action->setText("Cortar");
    action->setIcon(QIcon(":/cut.png"));
    connect(action, &QAction::triggered, m_plainTextEdit, &QPlainTextEdit::cut);
    return action;
}

QAction *NotepadMenuBar::makePasteAction()
{
    QAction *action = new QAction(this);
    action->setText("Pegar");
    action->setIcon(QIcon(":/paste.png"));
    connect(action, &QAction::triggered, m_plainTextEdit, &QPlainTextEdit::paste);
    return action;
}

void NotepadMenuBar::onOpen()
{
    QString filename = QFileDialog::getOpenFileName(this, "Abrir", "/");
    if (filename.isEmpty())
    {
        return;
    }
    QFile F(filename);
    if (F.open(QIODevice::Text | QIODevice::ReadOnly))
    {
        QTextStream xin(&F);
        m_plainTextEdit->setPlainText(xin.readAll());
        F.close();
    }
}

void NotepadMenuBar::onSave()
{
    QString filename = QFileDialog::getSaveFileName(this, "Guardar", "/");
    if (filename.isEmpty())
    {
        return;
    }
    QFile F(filename);
    if (F.open(QIODevice::Text | QIODevice::WriteOnly))
    {
        QTextStream xout(&F);
        xout << m_plainTextEdit->toPlainText();
        F.flush();
        F.close();
    }
}

