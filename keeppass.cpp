#include "keeppass.h"
#include "ui_keeppass.h"

KeepPass::KeepPass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KeepPass)
{
    ui->setupUi(this);
}

KeepPass::~KeepPass()
{
    delete ui;
}
