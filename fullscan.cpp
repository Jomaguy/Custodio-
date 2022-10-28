#include "fullscan.h"
#include "ui_fullscan.h"
#include "scanpage.h"

fullScan::fullScan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fullScan)
{
    ui->setupUi(this);
}

fullScan::~fullScan()
{
    delete ui;
}

void fullScan::on_pushButton_2_clicked()
{
    hide();
    scanPage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}


void fullScan::on_pushButton_clicked() // full scan function
{

}

