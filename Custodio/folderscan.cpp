#include "folderscan.h"
#include "ui_folderscan.h"
#include "scanpage.h"

folderscan::folderscan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::folderscan)
{
    ui->setupUi(this);
}

folderscan::~folderscan()
{
    delete ui;
}

void folderscan::on_startFolderScan_clicked() // put function for folder scan here
{

}


void folderscan::on_toScanpage_clicked()
{
    hide();
    scanpage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}

