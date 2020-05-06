#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void cambio_estado(void );



private:
    Ui::MainWindow *ui;
    QTimer  *_timer;
    char _estado;
    QPixmap *rd, *rl;
};

#endif // MAINWINDOW_H
