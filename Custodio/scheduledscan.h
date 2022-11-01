#ifndef SCHEDULEDSCAN_H
#define SCHEDULEDSCAN_H

#include <QDialog>

namespace Ui {
class scheduledscan;
}

class scheduledscan : public QDialog
{
    Q_OBJECT

public:
    explicit scheduledscan(QWidget *parent = nullptr);
    ~scheduledscan();

private slots:
    void on_startFullScheduledScan_clicked();

    void on_toScanpage_clicked();

    void on_startFolderScheduledScan_clicked();

    void on_dailyScan_stateChanged(int arg1);

    void on_weeklyScan_stateChanged(int arg1);

    void on_monthlyScan_stateChanged(int arg1);

private:
    Ui::scheduledscan *ui;
};

#endif // SCHEDULEDSCAN_H
