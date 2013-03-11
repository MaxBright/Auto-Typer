/**
  advanced.h
  Copyright 2012 Max Bright
*/
#ifndef ADVANCED_H
#define ADVANCED_H

#include <QDialog>

namespace Ui {
class Advanced;
}

class Advanced : public QDialog
{
    Q_OBJECT
    
public:
    explicit Advanced(QWidget *parent = 0);
    ~Advanced();

    
private slots:
    void setAlt(int);
    void closeadvanced();




private:
    Ui::Advanced *ui;
};

#endif // ADVANCED_H
