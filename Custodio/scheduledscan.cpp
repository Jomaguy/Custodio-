#include "scheduledscan.h"
#include "ui_scheduledscan.h"
#include "scanpage.h"

scheduledScan::scheduledScan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scheduledScan)
{
    ui->setupUi(this);
}

scheduledScan::~scheduledScan()
{
    delete ui;
}

void scheduledScan::on_pushButton_clicked()
{
    hide();
    scanPage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}


void scheduledScan::on_pushButton_5_clicked() // scheduled scan function
{

}

