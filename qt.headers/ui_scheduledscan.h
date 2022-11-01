/********************************************************************************
** Form generated from reading UI file 'scheduledscan.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEDSCAN_H
#define UI_SCHEDULEDSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_scheduledScan
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_5;

    void setupUi(QDialog *scheduledScan)
    {
        if (scheduledScan->objectName().isEmpty())
            scheduledScan->setObjectName("scheduledScan");
        scheduledScan->resize(1280, 720);
        pushButton = new QPushButton(scheduledScan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 100, 32));
        pushButton_2 = new QPushButton(scheduledScan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 380, 100, 32));
        pushButton_3 = new QPushButton(scheduledScan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(230, 380, 100, 32));
        pushButton_4 = new QPushButton(scheduledScan);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 380, 100, 32));
        checkBox = new QCheckBox(scheduledScan);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(110, 450, 131, 20));
        checkBox_2 = new QCheckBox(scheduledScan);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(110, 470, 111, 20));
        pushButton_5 = new QPushButton(scheduledScan);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(100, 500, 400, 150));

        retranslateUi(scheduledScan);

        QMetaObject::connectSlotsByName(scheduledScan);
    } // setupUi

    void retranslateUi(QDialog *scheduledScan)
    {
        scheduledScan->setWindowTitle(QCoreApplication::translate("scheduledScan", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("scheduledScan", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("scheduledScan", "Daily", nullptr));
        pushButton_3->setText(QCoreApplication::translate("scheduledScan", "Weekly", nullptr));
        pushButton_4->setText(QCoreApplication::translate("scheduledScan", "Monthly", nullptr));
        checkBox->setText(QCoreApplication::translate("scheduledScan", "Full Scan", nullptr));
        checkBox_2->setText(QCoreApplication::translate("scheduledScan", "Custom Scan", nullptr));
        pushButton_5->setText(QCoreApplication::translate("scheduledScan", "Start Scheduled Scan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scheduledScan: public Ui_scheduledScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEDSCAN_H
