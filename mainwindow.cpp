#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, Factory * controller) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->factory = controller;
    ui->setupUi(this);
    currentDatabaseButton = ui->pushCharacter;
    ui->stackedDatabase->setCurrentWidget(ui->pageCharacter);
    ui->stackedMain->setCurrentWidget(ui->pageMapEditor);
    ui->stackedSkill->setCurrentWidget(ui->pageSkillNormal);
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
    ui->stackedDatabase->setCurrentWidget(ui->pageCharacter);
    //actualize pointers
    currentDatabaseButton = ui->pushCharacter;
}

void MainWindow::on_pushCurve_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCurve->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCurve);
    //actualize pointers
    currentDatabaseButton = ui->pushCurve;
}

void MainWindow::on_pushSkill_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushSkill->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageSkill);
    //actualize pointers
    currentDatabaseButton = ui->pushSkill;
}

void MainWindow::on_pushItem_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushItem->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageItem);
    //actualize pointers
    currentDatabaseButton = ui->pushItem;
}

void MainWindow::on_pushAttribute_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushAttribute->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageAttribute);
    //actualize pointers
    currentDatabaseButton = ui->pushAttribute;
}

void MainWindow::on_pushCondition_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCondition->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCondition);
    //actualize pointers
    currentDatabaseButton = ui->pushCondition;
}

void MainWindow::on_pushFaceSets_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushFaceSets->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageFaceSet);
    //actualize pointers
    currentDatabaseButton = ui->pushFaceSets;
}

void MainWindow::on_pushAnimationSet_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushAnimationSet->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageAnimationSet);
    //actualize pointers
    currentDatabaseButton = ui->pushAnimationSet;
}

void MainWindow::on_pushCharaSets_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCharaSets->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageCharaSet);
    //actualize pointers
    currentDatabaseButton = ui->pushCharaSets;
}

void MainWindow::on_pushVocabulary_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushVocabulary->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageVocabulary);
    //actualize pointers
    currentDatabaseButton = ui->pushVocabulary;
}

void MainWindow::on_pushSystem_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushSystem->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageSystem);
    //actualize pointers
    currentDatabaseButton = ui->pushSystem;
}

void MainWindow::on_pushActions_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushActions->setChecked(true);
    //Handle Page's status
    ui->stackedDatabase->setCurrentWidget(ui->pageActions);
    //actualize pointers
    currentDatabaseButton = ui->pushActions;
}

void MainWindow::on_pushCommonEvents_clicked()
{
    //Handle buttons's status
    currentDatabaseButton->setChecked(false);
    ui->pushCommonEvents->setChecked(true);
    //Handle Page
    ui->stackedDatabase->setCurrentWidget(ui->pageCommonEvents);

    //actualize pointers
    currentDatabaseButton = ui->pushCommonEvents;

}

void MainWindow::on_actionDatabase_Manager_triggered()
{
    ui->stackedMain->setCurrentWidget(ui->pageDatabase);
}

void MainWindow::on_actionMaterial_Manager_triggered()
{
    ui->stackedMain->setCurrentWidget(ui->pageMaterialManager);
}

void MainWindow::on_actionScene_Editor_triggered()
{
ui->stackedMain->setCurrentWidget(ui->pageSceneEditor);
}

void MainWindow::on_actionM_ap_Editor_triggered()
{
ui->stackedMain->setCurrentWidget(ui->pageMapEditor);
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

void MainWindow::on_lineSkillFilter_textChanged(const QString &arg1)
{
    int listskillSize = ui->listSkill->count();

    for(int l = 0; l < listskillSize; l++){
        if (ui->listSkill->item(l)->text().contains(arg1, Qt::CaseInsensitive)){
            ui->listSkill->item(l)->setHidden(false);
        }
        else{
          ui->listSkill->item(l)->setHidden(true);
        }
    }
}


void MainWindow::on_radioSkillFixedCost_toggled(bool checked)
{
    ui->spinSkillFixedCost->setEnabled(checked);
}

void MainWindow::on_radioSkillPercentCost_toggled(bool checked)
{
    ui->spinSkillPercentCost->setEnabled(checked);
}

void MainWindow::on_sliderSkillHitChange_valueChanged(int value)
{
    ui->lcdSkillHitChance->display(value);
}

void MainWindow::on_sliderSkillMindChange_valueChanged(int value)
{
    ui->lcdSkillMindChance->display(value);
}

void MainWindow::on_sliderSkillVariance_valueChanged(int value)
{
    ui->lcdSkillVariance->display(value);
}

void MainWindow::on_comboSkillType_currentIndexChanged(int index)
{
    ui->stackedSkill->setCurrentIndex(index);
    switch (index){
        case 0:
            ui->scrollSkillPropertiesContents->setMaximumHeight(1019);
            break;
        case 1:
            ui->scrollSkillPropertiesContents->setMaximumHeight(250);
            break;
        case 2:
            ui->scrollSkillPropertiesContents->setMaximumHeight(250);
            break;
        case 3:
            ui->scrollSkillPropertiesContents->setMaximumHeight(420);
            break;
        case 4:
            ui->scrollSkillPropertiesContents->setMaximumHeight(360);
            break;
    }
}
