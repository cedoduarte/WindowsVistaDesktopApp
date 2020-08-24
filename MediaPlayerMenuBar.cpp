#include "MediaPlayerMenuBar.h"
#include <QMenu>
#include <QAction>
#include <QMediaPlayer>
#include <QFileDialog>

MediaPlayerMenuBar::MediaPlayerMenuBar(QWidget *parent)
    : QMenuBar(parent)
{
    m_mediaPlayer = nullptr;
}

void MediaPlayerMenuBar::setMediaPlayer(QMediaPlayer *mediaPlayer)
{
    m_mediaPlayer = mediaPlayer;
    addMenu(makeFileMenu());
    addMenu(makePlayerMenu());
}

void MediaPlayerMenuBar::onOpen()
{
    QString filename = QFileDialog::getOpenFileName(this, "Abrir", "/");
    if (filename.isEmpty())
    {
        return;
    }
    m_mediaPlayer->setMedia(QUrl::fromLocalFile(filename));
    m_mediaPlayer->play();
}

QMenu *MediaPlayerMenuBar::makeFileMenu()
{
    QMenu *menu = new QMenu(this);
    menu->setTitle("Archivo");
    menu->addAction(makeOpenAction());
    return menu;
}

QMenu *MediaPlayerMenuBar::makePlayerMenu()
{
    QMenu *menu = new QMenu(this);
    menu->setTitle("Reproductor");
    menu->addAction(makePlayAction());
    menu->addAction(makePauseAction());
    menu->addAction(makeStopAction());
    return menu;
}

QAction *MediaPlayerMenuBar::makeOpenAction()
{
    QAction *action = new QAction(this);
    action->setText("Abrir");
    action->setIcon(QIcon(":/open.png"));
    connect(action, &QAction::triggered, this, &MediaPlayerMenuBar::onOpen);
    return action;
}

QAction *MediaPlayerMenuBar::makePlayAction()
{
    QAction *action = new QAction(this);
    action->setText("Reproducir");
    action->setIcon(QIcon(":/play.png"));
    connect(action, &QAction::triggered, m_mediaPlayer, &QMediaPlayer::play);
    return action;
}

QAction *MediaPlayerMenuBar::makePauseAction()
{
    QAction *action = new QAction(this);
    action->setText("Pausar");
    action->setIcon(QIcon(":/pause.png"));
    connect(action, &QAction::triggered, m_mediaPlayer, &QMediaPlayer::pause);
    return action;
}

QAction *MediaPlayerMenuBar::makeStopAction()
{
    QAction *action = new QAction(this);
    action->setText("Detener");
    action->setIcon(QIcon(":/stop.png"));
    connect(action, &QAction::triggered, m_mediaPlayer, &QMediaPlayer::stop);
    return action;
}
