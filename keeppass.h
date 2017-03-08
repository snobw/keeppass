#ifndef KEEPPASS_H
#define KEEPPASS_H

#include <QMainWindow>

namespace Ui {
class KeepPass;
}

class KeepPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit KeepPass(QWidget *parent = 0);
    ~KeepPass();

private:
    Ui::KeepPass *ui;
};

#endif // KEEPPASS_H
