/**
  advanced.cpp
  Copyright 2012 Max Bright
*/
#include "advanced.h"
#include "ui_advanced.h"
#include "mainwindow.h"

Advanced::Advanced(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Advanced)
{
    ui->setupUi(this);
}

Advanced::~Advanced()
{
    delete ui;
}

void Advanced::closeadvanced()
{
    delete ui;
}



void Advanced::setAlt(int alt_numinput)
{
    alt_sleep = alt_numinput;
}
