#ifndef FOLDERSCAN_H
#define FOLDERSCAN_H

#include <QDialog>

namespace Ui {
class folderscan;
}

class folderscan : public QDialog
{
    Q_OBJECT

public:
    explicit folderscan(QWidget *parent = nullptr);
    ~folderscan();

private slots:
    void on_startFolderScan_clicked();

    void on_toScanpage_clicked();

private:
    Ui::folderscan *ui;
};

#endif // FOLDERSCAN_H
