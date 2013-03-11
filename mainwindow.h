#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <QString>
#include <QMainWindow>
#include "about.h"
/**
  mainwindow.h
  Copyright 2012 Max Bright
*/
#include "advanced.h"

using namespace std;

extern string spam_text;
extern int spam_sleep;
extern int spam_hotkey;
extern int alt_sleep;
extern string spam_mode;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_about_clicked();
    void setString(QString);
    void setSpeed(int);
    void setHotkey(int);
    void openAbout();
    void openAdvanced();
    void setSpammode(int);


private:
    Ui::MainWindow *ui;
    About *aboutWindow;
    Advanced *advWindow;

};

#endif // MAINWINDOW_H
