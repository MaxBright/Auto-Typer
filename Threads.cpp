/**
  Threads.cpp
  Copyright 2012 Max Bright
*/
#include <conio.h>
#include <iostream>
#include <string>
#include <Windows.h>

#include <QtGui/QApplication>
#include <qthread.h>
#include <QMetaObject>

#include "advanced.h"
#include "classes.h"
#include "Declarations.h"
#include "mainwindow.h"


#pragma comment (lib, "user32.lib")


using namespace std;



void TyperThread::run()
{



int loop(1);


bool keycheck_loop(false);

        while (loop == 1)
        {
            if(spam_mode == "toggle")
            {
                keycheck_loop = (GetKeyState(spam_hotkey) & 1) != 0;
            }
            else if(spam_mode == "hold")
            {
                keycheck_loop = GetKeyState(spam_hotkey) < 0;//keydown;
            }

            if(keycheck_loop)
            {
                sendtext(spam_text,
                         alt_sleep
                         );

            Sleep(spam_sleep); //This stays here until the slider output is set up
            }
            else
            {
                Sleep(10);
            }
        }
}





