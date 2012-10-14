#ifndef FACTORY_H
#define FACTORY_H

#include <QApplication>
#include <QKeySequence>
#include <QObject>
#include "mainwindow.h"

class MainWindow;

class Factory : public QObject
{
    Q_OBJECT
public:
    explicit Factory(QObject *parent = 0);
    //Views
    MainWindow* view_main;
    //Actions
    /*QAction *action_newProject;
    QAction *action_quit;
    QAction *action_openProject;
    QAction *action_saveProject;
    QAction *action_closeProject;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_search;
    QAction *action_preferencesProject;
    QAction *action_newMap;
    QAction *action_openMap;
    QAction *action_closeMap;
    QAction *action_saveMap;
    QAction *action_saveallMap;
    QAction *action_revertMap;
    QAction *action_preferencesMap;
    QAction *action_viewMapEditor;
    QAction *action_viewSceneEditor;
    QAction *action_viewDatabase;
    QAction *action_viewMaterial;*/
    
signals:
    
public slots:
    //void create_actions();
    void run();
    void on_Quit();
   // void on_quit();
    
};

#endif // FACTORY_H
