/********************************************************************************
** Form generated from reading UI file 'scanpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANPAGE_H
#define UI_SCANPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_scanPage
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *scanPage)
    {
        if (scanPage->objectName().isEmpty())
            scanPage->setObjectName("scanPage");
        scanPage->resize(1280, 720);
        pushButton_3 = new QPushButton(scanPage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(900, 500, 300, 100));
        pushButton = new QPushButton(scanPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 500, 300, 100));
        pushButton_4 = new QPushButton(scanPage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 10, 60, 32));
        pushButton_2 = new QPushButton(scanPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 500, 300, 100));

        retranslateUi(scanPage);

        QMetaObject::connectSlotsByName(scanPage);
    } // setupUi

    void retranslateUi(QDialog *scanPage)
    {
        scanPage->setWindowTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("scanPage", "Scheduled Scan", nullptr));
        pushButton->setText(QCoreApplication::translate("scanPage", "Full Scan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("scanPage", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("scanPage", "Folder Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scanPage: public Ui_scanPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANPAGE_H
