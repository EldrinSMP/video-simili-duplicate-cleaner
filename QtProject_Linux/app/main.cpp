#include "mainwindow.h"
#include <QMetaType>
#include "video.h"
int main(int argc, char *argv[])
{
    qRegisterMetaType<Video::ProcessingResult>();

    qSetMessagePattern("%{file}(%{line}) %{function}: %{message}");
    qDebug() << "Program start by Théophane with path :" << QDir::currentPath();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
