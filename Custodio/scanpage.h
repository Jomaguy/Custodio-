#ifndef SCANPAGE_H
#define SCANPAGE_H

#include <QDialog>


namespace Ui {
class scanPage;
}

class scanPage : public QDialog
{
    Q_OBJECT

public:
    explicit scanPage(QWidget *parent = nullptr);
    ~scanPage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::scanPage *ui;
};

#endif // SCANPAGE_H
