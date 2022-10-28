#ifndef FULLSCAN_H
#define FULLSCAN_H

#include <QDialog>

namespace Ui {
class fullScan;
}

class fullScan : public QDialog
{
    Q_OBJECT

public:
    explicit fullScan(QWidget *parent = nullptr);
    ~fullScan();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::fullScan *ui;
};

#endif // FULLSCAN_H
