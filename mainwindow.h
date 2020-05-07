#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void cambio_estado(void );

    void on_boton1_clicked();

    void on_boton2_clicked();

    void on_boton3_clicked();

    void on_boton4_clicked();

    void on_boton5_clicked();

    void on_boton6_clicked();

    void on_boton7_clicked();

    void on_boton8_clicked();

    void on_boton9_clicked();

    void on_boton10_clicked();

    void on_boton11_clicked();

private:
    Ui::MainWindow *ui;
    QTimer  *_timer;
    char _estado;
    int conteo=0;

    QPixmap *rd, *rl;

};

#endif // MAINWINDOW_H
