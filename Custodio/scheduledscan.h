#ifndef SCHEDULEDSCAN_H
#define SCHEDULEDSCAN_H

#include <QDialog>

namespace Ui {
class scheduledScan;
}

class scheduledScan : public QDialog
{
    Q_OBJECT

public:
    explicit scheduledScan(QWidget *parent = nullptr);
    ~scheduledScan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::scheduledScan *ui;
};

#endif // SCHEDULEDSCAN_H
