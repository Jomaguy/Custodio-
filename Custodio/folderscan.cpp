#include "folderscan.h"
#include "ui_folderscan.h"
#include "scanpage.h"

folderScan::folderScan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::folderScan)
{
    ui->setupUi(this);
}

folderScan::~folderScan()
{
    delete ui;
}

void folderScan::on_pushButton_clicked()
{
    hide();
    scanPage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}


void folderScan::on_pushButton_2_clicked() // folder scan function here
{

}

