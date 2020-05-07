#include "prueba.h"
#include "ui_prueba.h"
#include <QTimer>

prueba::prueba(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prueba)
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

    ui->boton1->setIcon(*rd );
    ui->boton2->setIcon(*rd );
    ui->boton3->setIcon( *rd );
    ui->boton4->setIcon( *rd );
    ui->boton5->setIcon( *rd );
    ui->boton6->setIcon( *rd );
    ui->boton7->setIcon( *rd );
    ui->boton8->setIcon(*rd );
    ui->boton9->setIcon(*rd );
    ui->boton10->setIcon(*rd );
    ui->boton11->setIcon(*rd );
    _estado = 1;

    connect(_timer, &QTimer::timeout, this, &prueba::cambio_estado );
    _timer->setInterval( 1000 );
    _timer->start();

}



prueba::~prueba()
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

void prueba::cambio_estado(void){
    switch ( _estado ) {
    case 1:
        _estado = 2;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rl );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 2:
        _estado = 3;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rl );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 3:
        _estado = 4;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rl );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 4:
        _estado = 5;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rl );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 5:
        _estado = 6;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd);
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd);
        ui->boton9->setIcon(*rl );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 6:
        _estado = 7;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rl );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 7:
        _estado = 8;
        ui->boton1->setIcon(*rd );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rl );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    case 8:
        _estado = 9;
        ui->boton1->setIcon(*rl );
        ui->boton2->setIcon(*rd );
        ui->boton3->setIcon( *rd );
        ui->boton4->setIcon( *rd );
        ui->boton5->setIcon( *rd );
        ui->boton6->setIcon( *rd );
        ui->boton7->setIcon( *rd );
        ui->boton8->setIcon(*rd );
        ui->boton9->setIcon(*rd );
        ui->boton10->setIcon(*rd );
        ui->boton11->setIcon(*rd );
        _timer->setInterval( 1000 );
        _timer->start();
        break;
    default:
        break;
    }
}



void prueba::on_boton1_clicked()
{
    if(_estado == 9){
        conteo+=1;
        ui->cont->setText(QString (conteo));
        cambio_estado();

    }
}

void prueba::on_boton2_clicked()
{
    if(_estado == 1){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();
    }
}

void prueba::on_boton3_clicked()
{
    if(_estado == 5){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();
    }
};

void prueba::on_boton4_clicked()
{
    if(_estado == 7){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();
    }
}

void prueba::on_boton5_clicked()
{
    if(_estado == 3){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();

    }
}

void prueba::on_boton6_clicked()
{

}

void prueba::on_boton7_clicked()
{

}

void prueba::on_boton8_clicked()
{

    if(_estado == 2){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();

    }
}

void prueba::on_boton9_clicked()
{

    if(_estado == 6){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();
    }
}

void prueba::on_boton10_clicked()
{

    if(_estado == 8){
        conteo+=1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();
    }
}

void prueba::on_boton11_clicked()
{

    if(_estado == 4){
        conteo= conteo+1;
        ui->cont->setText(QString::number(conteo));
        cambio_estado();
    }

}

