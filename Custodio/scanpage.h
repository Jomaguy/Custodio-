#ifndef SCANPAGE_H
#define SCANPAGE_H

#include <QDialog>

namespace Ui {
class scanpage;
}

class scanpage : public QDialog
{
    Q_OBJECT

public:
    explicit scanpage(QWidget *parent = nullptr);
    ~scanpage();

private slots:
    void on_toFullScan_clicked();

    void on_toFolderScan_clicked();

    void on_toScheduledScan_clicked();

    void on_backToMenu_clicked();

private:
    Ui::scanpage *ui;
};

#endif // SCANPAGE_H
