/********************************************************************************
** Form generated from reading UI file 'fullscan.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLSCAN_H
#define UI_FULLSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fullScan
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *fullScan)
    {
        if (fullScan->objectName().isEmpty())
            fullScan->setObjectName("fullScan");
        fullScan->resize(1280, 720);
        pushButton = new QPushButton(fullScan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 500, 400, 150));
        pushButton_2 = new QPushButton(fullScan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 100, 32));

        retranslateUi(fullScan);

        QMetaObject::connectSlotsByName(fullScan);
    } // setupUi

    void retranslateUi(QDialog *fullScan)
    {
        fullScan->setWindowTitle(QCoreApplication::translate("fullScan", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("fullScan", "Start Full Scan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("fullScan", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fullScan: public Ui_fullScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLSCAN_H
