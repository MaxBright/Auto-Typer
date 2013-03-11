/**
  main.cpp
  Copyright 2012 Max Bright
*/
#include <string>

#include <QtGui/QApplication>
#include <qthread.h>
#include <QMetaObject>

#include "advanced.h"
#include "classes.h"
#include "Declarations.h"
#include "mainwindow.h"

using namespace std;

string spam_text = " ";
int spam_sleep(1000);
int spam_hotkey(VK_F1);
int alt_sleep(1000);
string spam_mode = "toggle";

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    TyperThread typethread;

    typethread.start();

    MainWindow w;
    w.show();

    return a.exec();
}
