#ifndef FULLSCAN_H
#define FULLSCAN_H

#include <QDialog>

namespace Ui {
class fullscan;
}

class fullscan : public QDialog
{
    Q_OBJECT

public:
    explicit fullscan(QWidget *parent = nullptr);
    ~fullscan();

private slots:
    void on_startFullScan_clicked();

    void on_toScanpage_clicked();

private:
    Ui::fullscan *ui;
};

#endif // FULLSCAN_H
