/********************************************************************************
** Form generated from reading UI file 'folderscan.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERSCAN_H
#define UI_FOLDERSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_folderScan
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *folderScan)
    {
        if (folderScan->objectName().isEmpty())
            folderScan->setObjectName("folderScan");
        folderScan->resize(1280, 720);
        pushButton = new QPushButton(folderScan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 10, 60, 32));
        pushButton_2 = new QPushButton(folderScan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 500, 400, 150));

        retranslateUi(folderScan);

        QMetaObject::connectSlotsByName(folderScan);
    } // setupUi

    void retranslateUi(QDialog *folderScan)
    {
        folderScan->setWindowTitle(QCoreApplication::translate("folderScan", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("folderScan", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("folderScan", "Start Folder Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class folderScan: public Ui_folderScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERSCAN_H
