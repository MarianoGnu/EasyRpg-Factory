#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, Factory * controller) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->factory = controller;
    ui->setupUi(this);
    ui->toolBar->allowedAreas() = Qt::BottomToolBarArea;
    databaseCurrentPage = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    factory->on_Quit();
}

void MainWindow::on_lineFilter_textChanged(const QString &arg1)
{

    int listCharacterSize = ui->listCharacter->count();

    for(int l = 0; l < listCharacterSize; l++){
        if (ui->listCharacter->item(l)->text().contains(arg1, Qt::CaseInsensitive)){
            ui->listCharacter->item(l)->setHidden(false);
        }
        else{
          ui->listCharacter->item(l)->setHidden(true);
        }
    }
}

void MainWindow::on_pushCharacter_clicked()
{
    uncheck_database_buttons();
    ui->pushCharacter->setChecked(true);
    hide_database_pages();
    ui->pageCharacter->show();
}

void MainWindow::on_pushCurve_clicked()
{
    uncheck_database_buttons();
    ui->pushCurve->setChecked(true);
    hide_database_pages();
    ui->pageCurve->show();
}

    void MainWindow::uncheck_database_buttons()
{
        ui->pushCharacter->setChecked(false);
        ui->pushAnimationSet->setChecked(false);
        ui->pushAttribute->setChecked(false);
        ui->pushCharaSets->setChecked(false);
        ui->pushCommonEvents->setChecked(false);
        ui->pushCondition->setChecked(false);
        ui->pushCurve->setChecked(false);
        ui->pushFaceSets->setChecked(false);
        ui->pushItem->setChecked(false);
        ui->pushSkill->setChecked(false);
        ui->pushSystem->setChecked(false);
        ui->pushVocabulary->setChecked(false);
}

void MainWindow::hide_database_pages()
{
    ui->pageAnimationSet->hide();
    ui->pageAttribute->hide();
    ui->pageCharacter->hide();
    ui->pageCommonEvents->hide();
    ui->pageCondition->hide();
    ui->pageCurve->hide();
    ui->pageItem->hide();
    ui->pageSkill->hide();
    ui->pageSystem->hide();
    ui->pageVocabulary->hide();
    ui->pageCharaSet->hide();
    ui->pageFaceSet->hide();
}
