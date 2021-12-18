#include "player.h"
#include "playercontrols.h"

#include <QMediaService>
#include <QMediaPlaylist>
#include <QVideoProbe>
#include <QAudioProbe>
#include <QMediaMetaData>
#include <QtWidgets>

Player::Player(QWidget *parent)
    : QWidget(parent)
    , coverLabel(0)
    , slider(0)
{

    player = new QMediaPlayer(this);



    slider = new QSlider(Qt::Horizontal, this);
    slider->setRange(0, player->duration() / 1000);

    labelDuration = new QLabel(this);


    QPushButton *openButton = new QPushButton(tr("Open"), this);


    PlayerControls *controls = new PlayerControls(this);


    QBoxLayout *displayLayout = new QHBoxLayout;

    QBoxLayout *controlLayout = new QHBoxLayout;
    controlLayout->setMargin(0);
    controlLayout->addWidget(openButton);
    controlLayout->addStretch(1);
    controlLayout->addWidget(controls);
    controlLayout->addStretch(1);

    QBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(displayLayout);
    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(slider);
    hLayout->addWidget(labelDuration);
    layout->addLayout(hLayout);
    layout->addLayout(controlLayout);

    setLayout(layout);

}

Player::~Player()
{
}

bool Player::isPlayerAvailable() const
{
   return player->isAvailable();
}
