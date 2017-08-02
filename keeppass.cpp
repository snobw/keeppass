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
    ui->leURL->setText("");
    ui->leURL->setText(QFileDialog::getOpenFileName(this, tr("Open File"),"/home", tr("base log (*.blp)")));
      modelKeepPass._setFileName(ui->leURL->text());
}

void KeepPass::on_btNewUrl_clicked()
{
    ui->leURL->setText("");
        //create a empty file
    ui->leURL->setText(QFileDialog::getSaveFileName(this, tr("New File"),"/home", tr("base log (*.blp)")));
      modelKeepPass._setFileName(ui->leURL->text());
}

void KeepPass::on_btSave_clicked()
{
  //todo : verification que le nom du fichier n'est pas changé
    modelKeepPass._checkName(ui->leURL->text());
}

void KeepPass::on_btOK_clicked()
{
    //TODO to debug
    _onEnablePannelCmd(true);
_onEnableMenu(true);
//verification crypt
//si ok active les pannels
}

void KeepPass::on_btNew_clicked()
{
    ui->gbInfo->setEnabled(true);
}

void KeepPass::on_btModified_clicked()
{
      ui->gbInfo->setEnabled(true);
      //todo change
}

void KeepPass::on_btDelete_clicked()
{
      ui->gbInfo->setEnabled(false);
      //todo delete
}

void KeepPass::on_btCancel_clicked()
{
    ui->gbInfo->setEnabled(false);
}

void KeepPass::on_btAccept_clicked()
{
    ui->gbInfo->setEnabled(false);
    //stock en ram les mots de passes deja chiffré
}


void KeepPass::_onEnablePannelCmd(bool flag){
    ui->gbCmd->setEnabled(flag);

}
void KeepPass::_onEnableMenu(bool flag){
    ui->gbMenu->setEnabled(flag);
}
void KeepPass::_onEnableInformation(bool flag){
    ui->gbInfo->setEnabled(flag);
}
