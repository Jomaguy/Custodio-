#include "scanpage.h"
#include "ui_scanpage.h"
#include "fullscan.h"
#include "folderscan.h"
#include "scheduledscan.h"
#include "menu.h"

scanPage::scanPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scanPage)
{
    ui->setupUi(this);
}

scanPage::~scanPage()
{
    delete ui;
}

void scanPage::on_pushButton_clicked()
{
    hide();
    fullScan fullScan;
    fullScan.setModal(true);
    fullScan.exec();
}


void scanPage::on_pushButton_2_clicked()
{
    hide();
    folderScan folderScan;
    folderScan.setModal(true);
    folderScan.exec();
}


void scanPage::on_pushButton_3_clicked()
{
    hide();
    scheduledScan scheduledScan;
    scheduledScan.setModal(true);
    scheduledScan.exec();
}


void scanPage::on_pushButton_4_clicked()
{
    hide();
    menu toMenu;
    toMenu.setModal(true);
    toMenu.exec();
}

