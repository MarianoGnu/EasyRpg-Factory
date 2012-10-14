#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "factory.h"


class Factory;

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0, Factory *controller = 0);
    ~MainWindow();
    
private slots:
    void on_action_Quit_triggered();

    void on_lineFilter_textChanged(const QString &arg1);

    void on_pushCharacter_clicked();

    void on_pushCurve_clicked();

private:
    Ui::MainWindow *ui;
    Factory * factory;
    int databaseCurrentPage;

    //methods
    void uncheck_database_buttons();
    void hide_database_pages();
};

#endif // MAINWINDOW_H


