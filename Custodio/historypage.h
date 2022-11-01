#ifndef HISTORYPAGE_H
#define HISTORYPAGE_H

#include <QDialog>

namespace Ui {
class historypage;
}

class historypage : public QDialog
{
    Q_OBJECT

public:
    explicit historypage(QWidget *parent = nullptr);
    ~historypage();

private slots:
    void on_toMenu_clicked();

private:
    Ui::historypage *ui;
};

#endif // HISTORYPAGE_H
