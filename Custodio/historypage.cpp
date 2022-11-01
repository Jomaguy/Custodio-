#include "historypage.h"
#include "ui_historypage.h"
#include "menu.h"

historypage::historypage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historypage)
{
    ui->setupUi(this);
}

historypage::~historypage()
{
    delete ui;
}

void historypage::on_toMenu_clicked()
{
    hide();
    menu toMenu;
    toMenu.setModal(true);
    toMenu.exec();
}

