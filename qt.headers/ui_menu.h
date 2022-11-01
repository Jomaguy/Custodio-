/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(1280, 720);
        pushButton = new QPushButton(menu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 180, 400, 200));
        pushButton_3 = new QPushButton(menu);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(750, 180, 400, 200));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "Scan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menu", "History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
