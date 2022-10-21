#include "historypage.h"
#include "ui_historypage.h"
#include "menu.h"

historyPage::historyPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historyPage)
{
    ui->setupUi(this);
}

historyPage::~historyPage()
{
    delete ui;
}




void historyPage::on_pushButton_clicked()
{
    hide();
    menu toMenu;
    toMenu.setModal(true);
    toMenu.exec();
}

