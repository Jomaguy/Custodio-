#ifndef FOLDERSCAN_H
#define FOLDERSCAN_H

#include <QDialog>

namespace Ui {
class folderScan;
}

class folderScan : public QDialog
{
    Q_OBJECT

public:
    explicit folderScan(QWidget *parent = nullptr);
    ~folderScan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::folderScan *ui;
};

#endif // FOLDERSCAN_H
