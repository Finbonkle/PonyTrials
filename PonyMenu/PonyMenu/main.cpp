// Citations:
// https://guidedhacking.com/threads/how-to-hack-any-game-tutorial-c-trainer-2-external-v2.12000/
// https://www.youtube.com/channel/UCs6nmQViDpUw0nuIx9c_WvA
// thanks Rake, Xiao Kuang, Brock Neidert

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
