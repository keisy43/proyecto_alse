#ifndef REGU_H
#define REGU_H

#include <QDialog>
#include"db_local.h"
#include"datosu.h"
#include "qstring.h"
#include <string>



namespace Ui {
class regu;
}

class regu : public QDialog
{
    Q_OBJECT

public:
    explicit regu(QWidget *parent = 0);
    ~regu();

    QString getNom() const;
    void setNom(const QString &value);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::regu *ui;

    db_local   _db;
    datosu _dato;

};

#endif // REGU_H
