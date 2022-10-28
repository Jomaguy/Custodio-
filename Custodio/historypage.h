#ifndef HISTORYPAGE_H
#define HISTORYPAGE_H

#include <QDialog>

namespace Ui {
class historyPage;
}

class historyPage : public QDialog
{
    Q_OBJECT

public:
    explicit historyPage(QWidget *parent = nullptr);
    ~historyPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::historyPage *ui;
};

#endif // HISTORYPAGE_H
