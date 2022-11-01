#include "fullscan.h"
#include "ui_fullscan.h"
#include "scanpage.h"

fullscan::fullscan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fullscan)
{
    ui->setupUi(this);
}

fullscan::~fullscan()
{
    delete ui;
}

void fullscan::on_startFullScan_clicked() // put full scan function in here
{

}


void fullscan::on_toScanpage_clicked()
{
    hide();
    scanpage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}

