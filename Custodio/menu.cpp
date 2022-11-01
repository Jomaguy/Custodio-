#include "menu.h"
#include "ui_menu.h"
#include "scanpage.h"
#include "historypage.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_toScanPage_clicked()
{
    hide();
    scanpage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}


void menu::on_toHistoryPage_clicked()
{
    hide();
    historypage historyPage;
    historyPage.setModal(true);
    historyPage.exec();
}

