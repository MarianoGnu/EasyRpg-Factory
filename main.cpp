#include <QtGui/QApplication>
#include "factory.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Factory* factory = new Factory;
    factory->run();
    
    return app.exec();
}
