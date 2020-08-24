#include "MediaPlayerItemForm.h"
#include "ui_MediaPlayerItemForm.h"
#include <QMediaPlayer>

MediaPlayerItemForm::MediaPlayerItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MediaPlayerItemForm)
{
    ui->setupUi(this);
    ui->playButton->setPixmap(QPixmap(":/play.png"));
    ui->pauseButton->setPixmap(QPixmap(":/pause.png"));
    ui->stopButton->setPixmap(QPixmap(":/stop.png"));
    m_mediaPlayer = new QMediaPlayer(this);
    m_mediaPlayer->setVideoOutput(ui->videoWidget);
    ui->menuBar->setMediaPlayer(m_mediaPlayer);
    connect(ui->playButton, &OrbitButton::clicked, m_mediaPlayer, &QMediaPlayer::play);
    connect(ui->pauseButton, &OrbitButton::clicked, m_mediaPlayer, &QMediaPlayer::pause);
    connect(ui->stopButton, &OrbitButton::clicked, m_mediaPlayer, &QMediaPlayer::stop);
}

MediaPlayerItemForm::~MediaPlayerItemForm()
{
    delete ui;
}
