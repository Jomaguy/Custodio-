#include "scanpage.h"
#include "ui_scanpage.h"
#include "fullscan.h"
#include "folderscan.h"
#include "scheduledscan.h"
#include "menu.h"

scanpage::scanpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scanpage)
{
    ui->setupUi(this);
}

scanpage::~scanpage()
{
    delete ui;
}

void scanpage::on_toFullScan_clicked()
{
    hide();
    fullscan fullScan;
    fullScan.setModal(true);
    fullScan.exec();
}


void scanpage::on_toFolderScan_clicked()
{
    hide();
    folderscan folderScan;
    folderScan.setModal(true);
    folderScan.exec();
}


void scanpage::on_toScheduledScan_clicked()
{
    hide();
    scheduledscan scheduledScan;
    scheduledScan.setModal(true);
    scheduledScan.exec();
}


void scanpage::on_backToMenu_clicked()
{
    hide();
    menu toMenu;
    toMenu.setModal(true);
    toMenu.exec();
}

