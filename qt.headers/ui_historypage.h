/********************************************************************************
** Form generated from reading UI file 'historypage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYPAGE_H
#define UI_HISTORYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_historyPage
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *historyPage)
    {
        if (historyPage->objectName().isEmpty())
            historyPage->setObjectName("historyPage");
        historyPage->resize(1280, 720);
        pushButton = new QPushButton(historyPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 111, 41));

        retranslateUi(historyPage);

        QMetaObject::connectSlotsByName(historyPage);
    } // setupUi

    void retranslateUi(QDialog *historyPage)
    {
        historyPage->setWindowTitle(QCoreApplication::translate("historyPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("historyPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class historyPage: public Ui_historyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYPAGE_H
