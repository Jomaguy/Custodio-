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

void menu::on_pushButton_clicked()
{
    hide();
    scanPage scanPage;
    scanPage.setModal(true);
    scanPage.exec();
}


void menu::on_pushButton_3_clicked()
{
    hide();
    historyPage historyPage;
    historyPage.setModal(true);
    historyPage.exec();
}

