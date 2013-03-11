/**
  classes.h
  Copyright 2012 Max Bright
*/
#ifndef CLASSES_H
#define CLASSES_H


#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include "Declarations.h"
#include <QtGui/QApplication>
#include <qthread.h>
#include <QMetaObject>

#pragma comment (lib, "user32.lib")

using namespace std;


/********************Classes********************/
class TyperThread : public QThread
{
    Q_OBJECT


public:
    void run();


};



#endif // CLASSES_H


