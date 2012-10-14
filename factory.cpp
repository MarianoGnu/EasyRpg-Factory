#include "factory.h"

/* This class is a controller for all thins ocurring on the Factory
 * all views and models are stored here and all methods should be also placed here
 */

Factory::Factory(QObject *parent) :
    QObject(parent)
{
    //this->create_actions();
    this->view_main = new MainWindow(0, this);
}

void Factory::run(){
    this->view_main->show();
}

/*void Factory::create_actions(){
    this->action_newProject = new QAction(QIcon(":/newproject"), tr("&New Project"), this);
    this->action_newProject->setShortcut(QKeySequence(tr("Ctrl+n")));
    this->action_newProject->setStatusTip(tr("Create a new Project."));
    //connect(action_newProject, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_openProject = new QAction(QIcon(":/openproject"), tr("&Open Project"), this);
    this->action_openProject->setShortcut(QKeySequence(tr("Ctrl+o")));
    this->action_openProject->setStatusTip(tr("Open an existing project."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_saveProject = new QAction(QIcon(":/saveproject"), tr("&Save Project"), this);
    this->action_saveProject->setShortcut(QKeySequence(tr("Ctrl+s")));
    this->action_saveProject->setStatusTip(tr("Save change on current project."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_closeProject = new QAction(QIcon(":/closeproject"), tr("&Close Project"), this);
    this->action_closeProject->setShortcut(QKeySequence(tr("Ctrl+x")));
    this->action_closeProject->setStatusTip(tr("Close current project."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_quit = new QAction(QIcon(":/images/quit.png"), tr("&Quit"), this);
    this->action_quit->setShortcut(QKeySequence::Quit);
    this->action_quit->setStatusTip(tr("Quit RPG Factory."));
    connect(this->action_quit, SIGNAL(triggered()), qApp,SLOT(quit()));

    this->action_undo = new QAction(QIcon(":/undo"), tr("&Undo"), this);
    this->action_undo->setShortcut(QKeySequence(tr("Ctrl+z")));
    this->action_undo->setStatusTip(tr("Undo last action."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_redo = new QAction(QIcon(":/redo"), tr("&Redo"), this);
    this->action_redo->setShortcut(QKeySequence(tr("Ctrl+y")));
    this->action_redo->setStatusTip(tr("Redo last undone action."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_search = new QAction(QIcon(":/search"), tr("&Search"), this);
    this->action_search->setShortcut(QKeySequence(tr("Ctrl+f")));
    this->action_search->setStatusTip(tr("Search over project."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_preferencesProject = new QAction(QIcon(":/preferencesproject"), tr("&Game Preferences"), this);
    this->action_preferencesProject->setShortcut(QKeySequence(tr("F3")));
    this->action_preferencesProject->setStatusTip(tr("Change current project's preferences."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_newMap = new QAction(QIcon(":/newmap"), tr("&New Map"), this);
    this->action_newMap->setShortcut(QKeySequence(tr("Ctrl+m")));
    this->action_newMap->setStatusTip(tr("Create a new map."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_openMap = new QAction(QIcon(":/openmap"), tr("&Open Map"), this);
    this->action_openMap->setShortcut(QKeySequence(tr("Ctrl+n")));
    this->action_openMap->setStatusTip(tr("Open an existing map."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_closeMap = new QAction(QIcon(":/closemap"), tr("&Close Map"), this);
    this->action_closeMap->setShortcut(QKeySequence(tr("Ctrl+c")));
    this->action_closeMap->setStatusTip(tr("Close current map."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_saveMap = new QAction(QIcon(":/savemap"), tr("&Save Map"), this);
    this->action_saveMap->setShortcut(QKeySequence(tr("Ctrl+d")));
    this->action_saveMap->setStatusTip(tr("Save changes on current map."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_saveallMap = new QAction(QIcon(":/saveallmap"), tr("S&ave all Maps"), this);
    this->action_saveallMap->setShortcut(QKeySequence(tr("Ctrl+a")));
    this->action_saveallMap->setStatusTip(tr("Save changes on all opened maps."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_revertMap = new QAction(QIcon(":/revertmap"), tr("&Revert Map"), this);
    this->action_revertMap->setStatusTip(tr("Revert map to last saved status."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_preferencesMap = new QAction(QIcon(":/saveallmap"), tr("S&ave all Maps"), this);
    this->action_preferencesMap->setShortcut(QKeySequence(tr("F4")));
    this->action_preferencesMap->setStatusTip(tr("See current map's properties."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_viewMapEditor = new QAction(QIcon(":/mapeditor"), tr("&Map Editor"), this);
    this->action_viewMapEditor->setShortcut(QKeySequence(tr("F5")));
    this->action_viewMapEditor->setStatusTip(tr("Map edition mode."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));




    this->action_viewSceneEditor = new QAction(QIcon(":/sceneeditor"), tr("&Scene Editor"), this);
    this->action_viewSceneEditor->setShortcut(QKeySequence(tr("F6")));
    this->action_viewSceneEditor->setStatusTip(tr("Scene edition mode."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_viewDatabase = new QAction(QIcon(":/database"), tr("&Database"), this);
    this->action_viewDatabase->setShortcut(QKeySequence(tr("F7")));
    this->action_viewDatabase->setStatusTip(tr("Database Edition mode."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

    this->action_viewMaterial = new QAction(QIcon(":/material"), tr("M&aterial Manager"), this);
    this->action_viewMaterial->setShortcut(QKeySequence(tr("F8")));
    this->action_viewMaterial->setStatusTip(tr("Material edition mode."));
    //connect(action_Project, SIGNAL(triggered()), this, SLOT(newFile()));

}*/

void Factory::on_Quit(){
    qApp->quit();
}
