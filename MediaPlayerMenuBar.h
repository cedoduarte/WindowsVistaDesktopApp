#ifndef MEDIAPLAYERMENUBAR_H
#define MEDIAPLAYERMENUBAR_H

#include <QMenuBar>

class QMediaPlayer;

class MediaPlayerMenuBar : public QMenuBar
{
    Q_OBJECT
public:
    MediaPlayerMenuBar(QWidget *parent = nullptr);
    void setMediaPlayer(QMediaPlayer *mediaPlayer);
private slots:
    void onOpen();
private:
    QMenu *makeFileMenu();
    QMenu *makePlayerMenu();
    QAction *makeOpenAction();
    QAction *makePlayAction();
    QAction *makePauseAction();
    QAction *makeStopAction();

    QMediaPlayer *m_mediaPlayer;
};

#endif // MEDIAPLAYERMENUBAR_H
