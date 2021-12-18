#include "playercontrols.h"

#include <QBoxLayout>
#include <QSlider>
#include <QStyle>
#include <QToolButton>
#include <QComboBox>
#include <QAudio>

PlayerControls::PlayerControls(QWidget *parent)
    : QWidget(parent)
    , playerState(QMediaPlayer::StoppedState)
    , playerMuted(false)
    , playButton(0)
    , stopButton(0)
    , nextButton(0)
    , previousButton(0)
{
    playButton = new QToolButton(this);
    playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));

    stopButton = new QToolButton(this);
    stopButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    stopButton->setEnabled(false);

    nextButton = new QToolButton(this);
    nextButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));

    previousButton = new QToolButton(this);
    previousButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));


    QBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);
    layout->addWidget(stopButton);
    layout->addWidget(previousButton);
    layout->addWidget(playButton);
    layout->addWidget(nextButton);
    setLayout(layout);
}


