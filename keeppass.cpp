#include "keeppass.h"
#include "ui_keeppass.h"
#include "qfiledialog.h"


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

void KeepPass::on_leKey_textEdited(const QString &arg1)
{
    if(arg1!=""){
        ui->btOK->setEnabled(true);
    }else{
        ui->btOK->setEnabled(false);
    }
}

void KeepPass::on_btURL_clicked()
{
    ui->leURL->setText(QFileDialog::getOpenFileName(this, tr("Open File"),"/home", tr("base log (*.blp)")));
}

void KeepPass::on_btNewUrl_clicked()
{
    ui->leURL->setText(QFileDialog::getSaveFileName(this, tr("New File"),"/home", tr("base log (*.blp)")));
}

void KeepPass::on_btOK_clicked()
{
    //
}

void KeepPass::on_btNew_clicked()
{
    //
}

void KeepPass::on_btModified_clicked()
{
    //
}

void KeepPass::on_btDelete_clicked()
{
    //
}

void KeepPass::on_btCancel_clicked()
{
    //
}

void KeepPass::on_btAccept_clicked()
{
    //
}

void KeepPass::on_btSave_clicked()
{
    modelKeepPass._setFileName(ui->leURL->text());
}
