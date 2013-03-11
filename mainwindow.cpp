/**
  mainwindow.cpp
  Copyright 2012 Max Bright
*/
#include <string>
#include <iostream>
#include <Windows.h>
#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "ui_about.h"
#include "advanced.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_about_clicked()
{
    //About::About();
}

void MainWindow::openAbout()
{
    aboutWindow = new About();
    aboutWindow->show();
}

void MainWindow::openAdvanced()
{
    advWindow = new Advanced();
    advWindow->show();
}

void MainWindow::setSpammode(int spammode_input)
{
    if(spammode_input == 0)
    {
        spam_mode = "toggle";
    }
    if(spammode_input == 1)
    {
        spam_mode = "hold";
    }
}

void MainWindow::setString(QString textbox_text){


    QByteArray ba = textbox_text.toLocal8Bit();
    string textbox_text_string = ba.data();

    ba.clear();
    textbox_text.clear();




    spam_text = textbox_text_string;


}

void MainWindow::setSpeed(int speed_input)
{
    if(speed_input == 0){
        speed_input = 1;
    }
    spam_sleep = 1000/speed_input;
}

void MainWindow::setHotkey(int dropdown_hotkey)
{
    if(dropdown_hotkey == 0)
    {
        spam_hotkey = VK_F1;
    }
    if(dropdown_hotkey == 1)
    {
        spam_hotkey = VK_F2;
    }
    if(dropdown_hotkey == 2)
    {
        spam_hotkey = VK_F3;
    }
    if(dropdown_hotkey == 3)
    {
        spam_hotkey = VK_F4;
    }
    if(dropdown_hotkey == 4)
    {
        spam_hotkey = VK_F5;
    }
    if(dropdown_hotkey == 5)
    {
        spam_hotkey = VK_F6;
    }
    if(dropdown_hotkey == 6)
    {
        spam_hotkey = VK_F7;
    }
    if(dropdown_hotkey == 7)
    {
        spam_hotkey = VK_F8;
    }
    if(dropdown_hotkey == 8)
    {
        spam_hotkey = VK_F9;
    }
    if(dropdown_hotkey == 9)
    {
        spam_hotkey = VK_F10;
    }
    if(dropdown_hotkey == 10)
    {
        spam_hotkey = VK_F11;
    }
    if(dropdown_hotkey == 11)
    {
        spam_hotkey = VK_F12;
    }

}
