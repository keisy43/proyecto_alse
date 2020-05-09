#include "regu.h"
#include "ui_regu.h"
#include "db_local.h"
#include "QDebug"

regu::regu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regu)
{
    ui->setupUi(this);
}

regu::~regu()
{
    delete ui;
}

void regu::on_buttonBox_accepted()
{
    //guarda las variables que se ingresan


   _db.abrirDB("_Datos");
   _db.cargarusuario(_dato);
   ui->nombre->setText(QString( _dato.getnombre().c_str() )  );
   ui->apellido->setText(QString(_dato.getapellido().c_str()));
   ui->docident->setText(QString(_dato.getdocident().c_str()));
  ui->fechan->setText(QString(_dato.getFechan().c_str()));
  ui->_nickname->setText(QString(_dato.getUser().c_str()));
  ui->contra->setText(QString(_dato.getContra().c_str() ));
  _db.cerrarDB();

}





