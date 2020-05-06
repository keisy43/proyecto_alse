#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _timer = new QTimer(this);

    // Primero configuro los leds para que arranque en el estado 1

    // Estados :
    // 1- Green and Blue on and Red off
    // 2- Red and Blue on and Green off
    // 3- Red and Green On and Blue off
    // Fires:
    // 1 -> 2 3 seg.
    // 2 -> 3 2 seg.
    // 3 -> 1 5 seg.
    // 3 -> 2 Button.



    rd = new QPixmap(":/images/RC_led.png");
    rl = new QPixmap(":/images/RD_led.png");

    ui->b1->setPixmap( *rd );
    ui->b2->setPixmap( *rl );
    ui->b3->setPixmap( *rd );
    ui->b4->setPixmap( *rd );
    ui->b5->setPixmap( *rd );
    ui->b6->setPixmap( *rd );
    ui->b7->setPixmap( *rd );
    ui->b8->setPixmap( *rd );
    ui->b9->setPixmap( *rd );
    ui->b10->setPixmap( *rd );
    ui->b11->setPixmap( *rd );
    _estado = 1;

    connect(_timer, &QTimer::timeout, this, &MainWindow::cambio_estado );
    _timer->setInterval( 1000 );
    _timer->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Estados :
// 1- Green and Blue on and Red off
// 2- Red and Blue on and Green off
// 3- Red and Green On and Blue off
// Fires:
// 1 -> 2 3 seg.
// 2 -> 3 2 seg.
// 3 -> 1 5 seg.
// 3 -> 2 Button.

void MainWindow::cambio_estado(void){
    switch ( _estado ) {
    case 1:
        _estado = 2;
        ui->b1->setPixmap( *rd );
        ui->b2->setPixmap( *rd );
        ui->b3->setPixmap( *rd );
        ui->b4->setPixmap( *rd );
        ui->b5->setPixmap( *rd );
        ui->b6->setPixmap( *rd );
        ui->b7->setPixmap( *rd );
        ui->b8->setPixmap( *rd );
        ui->b9->setPixmap( *rl );
        ui->b10->setPixmap( *rd );
        ui->b11->setPixmap( *rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 2:
        _estado = 3;
        ui->b1->setPixmap( *rd );
        ui->b2->setPixmap( *rd );
        ui->b3->setPixmap( *rd );
        ui->b4->setPixmap( *rd );
        ui->b5->setPixmap( *rl );
        ui->b6->setPixmap( *rd );
        ui->b7->setPixmap( *rd );
        ui->b8->setPixmap( *rd );
        ui->b9->setPixmap( *rd );
        ui->b10->setPixmap( *rd );
        ui->b11->setPixmap( *rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 3:
        _estado = 4;
        ui->b1->setPixmap( *rd );
        ui->b2->setPixmap( *rd );
        ui->b3->setPixmap( *rd );
        ui->b4->setPixmap( *rd );
        ui->b5->setPixmap( *rd );
        ui->b6->setPixmap( *rd );
        ui->b7->setPixmap( *rl );
        ui->b8->setPixmap( *rd );
        ui->b9->setPixmap( *rd );
        ui->b10->setPixmap( *rd );
        ui->b11->setPixmap( *rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 4:
        _estado = 5;
        ui->b1->setPixmap( *rd );
        ui->b2->setPixmap( *rd );
        ui->b3->setPixmap( *rd );
        ui->b4->setPixmap( *rd );
        ui->b5->setPixmap( *rd );
        ui->b6->setPixmap( *rd );
        ui->b7->setPixmap( *rl );
        ui->b8->setPixmap( *rd );
        ui->b9->setPixmap( *rd );
        ui->b10->setPixmap( *rd );
        ui->b11->setPixmap( *rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 5:
        _estado = 1;
        ui->b1->setPixmap( *rd );
        ui->b2->setPixmap( *rl );
        ui->b3->setPixmap( *rd );
        ui->b4->setPixmap( *rd );
        ui->b5->setPixmap( *rd );
        ui->b6->setPixmap( *rd );
        ui->b7->setPixmap( *rd );
        ui->b8->setPixmap( *rd );
        ui->b9->setPixmap( *rd );
        ui->b10->setPixmap( *rd );
        ui->b11->setPixmap( *rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    default:
        break;
    }
}


