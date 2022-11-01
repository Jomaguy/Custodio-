#include "scheduledscan.h"
#include "ui_scheduledscan.h"
#include "scanpage.h"

scheduledscan::scheduledscan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scheduledscan)
{
    ui->setupUi(this);
}

scheduledscan::~scheduledscan()
{
    delete ui;
}

void scheduledscan::on_startFullScheduledScan_clicked() // put full scheduled scan function here
{

}


void scheduledscan::on_toScanpage_clicked()
{
    hide();
    scanpage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}


void scheduledscan::on_startFolderScheduledScan_clicked() // put folder scheduled scan function here
{

}

// have condition to check if more than one time are selected?
void scheduledscan::on_dailyScan_stateChanged(int arg1) //
{
    if (arg1 == 1) {
        // make variable for daily scanning
    }
}


void scheduledscan::on_weeklyScan_stateChanged(int arg1)
{
    if (arg1 == 1) {
        // make variable for weekly scanning
    }
}


void scheduledscan::on_monthlyScan_stateChanged(int arg1)
{
    if (arg1 == 1) {
        // make variable for monthly scanning
    }
}

