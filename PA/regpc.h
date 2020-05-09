#ifndef REGPC_H
#define REGPC_H

#include <QDialog>

#include <string>
#include <sqlite3.h>

namespace Ui {
class regpc;
}

class regpc : public QDialog
{
    Q_OBJECT

public:
    explicit regpc(QWidget *parent = 0);
    ~regpc();

private:
    Ui::regpc *ui;
};

#endif // REGPC_H
