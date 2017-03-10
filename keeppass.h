#ifndef KEEPPASS_H
#define KEEPPASS_H

#include <QMainWindow>
#include "moduikeeppass.h"

namespace Ui {
class KeepPass;
}

class KeepPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit KeepPass(QWidget *parent = 0);
    ~KeepPass();

private slots:
    void on_leKey_textEdited(const QString &arg1);

    void on_btURL_clicked();

    void on_btNewUrl_clicked();

    void on_btOK_clicked();

    void on_btNew_clicked();

    void on_btModified_clicked();

    void on_btDelete_clicked();

    void on_btCancel_clicked();

    void on_btAccept_clicked();

    void on_btSave_clicked();

private:
    Ui::KeepPass *ui;
    ModUIKeepPass modelKeepPass;
};

#endif // KEEPPASS_H
