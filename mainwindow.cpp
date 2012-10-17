#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, Factory * controller) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->factory = controller;
    ui->setupUi(this);
    currentDatabasePage = ui->stackedDatabase->currentWidget();
    currentDatabaseButton = ui->pushCharacter;
    currentView = ui->stackedMain->currentWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    factory->on_Quit();
}

void MainWindow::on_pushCharacter_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCharacter->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageCharacter->show();
    //actualize pointers
    currentDatabaseButton = ui->pushCharacter;
    currentDatabasePage = ui->pageCharacter;
}

void MainWindow::on_pushCurve_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCurve->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageCurve->show();
    //actualize pointers
    currentDatabaseButton = ui->pushCurve;
    currentDatabasePage = ui->pageCurve;
}

void MainWindow::on_pushSkill_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushSkill->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageSkill->show();
    //actualize pointers
    currentDatabaseButton = ui->pushSkill;
    currentDatabasePage = ui->pageSkill;
}

void MainWindow::on_pushItem_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushItem->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageItem->show();
    //actualize pointers
    currentDatabaseButton = ui->pushItem;
    currentDatabasePage = ui->pageItem;
}

void MainWindow::on_pushAttribute_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushAttribute->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageAttribute->show();
    //actualize pointers
    currentDatabaseButton = ui->pushAttribute;
    currentDatabasePage = ui->pageAttribute;
}

void MainWindow::on_pushCondition_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCondition->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageCondition->show();
    //actualize pointers
    currentDatabaseButton = ui->pushCondition;
    currentDatabasePage = ui->pageCondition;
}

void MainWindow::on_pushFaceSets_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushFaceSets->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageFaceSet->show();
    //actualize pointers
    currentDatabaseButton = ui->pushFaceSets;
    currentDatabasePage = ui->pageFaceSet;
}

void MainWindow::on_pushAnimationSet_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushAnimationSet->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageAnimationSet->show();
    //actualize pointers
    currentDatabaseButton = ui->pushAnimationSet;
    currentDatabasePage = ui->pageAnimationSet;
}

void MainWindow::on_pushCharaSets_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCharaSets->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageCharaSet->show();
    //actualize pointers
    currentDatabaseButton = ui->pushCharaSets;
    currentDatabasePage = ui->pageCharaSet;
}

void MainWindow::on_pushVocabulary_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushVocabulary->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageVocabulary->show();
    //actualize pointers
    currentDatabaseButton = ui->pushVocabulary;
    currentDatabasePage = ui->pageVocabulary;
}

void MainWindow::on_pushSystem_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushSystem->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageSystem->show();
    //actualize pointers
    currentDatabaseButton = ui->pushSystem;
    currentDatabasePage = ui->pageSystem;
}

void MainWindow::on_pushCommonEvents_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCommonEvents->setChecked(true);
    //Handle Page's status
    currentDatabasePage->hide();
    ui->pageCommonEvents->show();
    //actualize pointers
    currentDatabaseButton = ui->pushCommonEvents;
    currentDatabasePage = ui->pageCommonEvents;
}

void MainWindow::on_actionDatabase_Manager_triggered()
{
    currentView->hide();
    ui->pageDatabase->show();
    currentView = ui->pageDatabase;
}

void MainWindow::on_actionMaterial_Manager_triggered()
{
    currentView->hide();
    ui->pageMaterialManager->show();
    currentView = ui->pageMaterialManager;
}

void MainWindow::on_actionScene_Editor_triggered()
{
    currentView->hide();
    ui->pageSceneEditor->show();
    currentView = ui->pageSceneEditor;
}

void MainWindow::on_actionM_ap_Editor_triggered()
{
    currentView->hide();
    ui->pageMapEditor->show();
    currentView = ui->pageMapEditor;
}



void MainWindow::on_lineCharacterFilter_textChanged(const QString &arg1)
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

void MainWindow::on_lineCurveFilter_textChanged(const QString &arg1)
{
    int listCurveSize = ui->listCurve->count();

    for(int l = 0; l < listCurveSize; l++){
        if (ui->listCurve->item(l)->text().contains(arg1, Qt::CaseInsensitive)){
            ui->listCurve->item(l)->setHidden(false);
        }
        else{
          ui->listCurve->item(l)->setHidden(true);
        }
    }
}


void MainWindow::on_lineCharaSetFilter_textChanged(const QString &arg1)
{
    int listCharaSetSize = ui->listCharaSet->count();

    for(int l = 0; l < listCharaSetSize; l++){
        if (ui->listCharaSet->item(l)->text().contains(arg1, Qt::CaseInsensitive)){
            ui->listCharaSet->item(l)->setHidden(false);
        }
        else{
          ui->listCharaSet->item(l)->setHidden(true);
        }
    }
}
