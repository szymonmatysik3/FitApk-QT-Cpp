#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtFITAPK.h"
#include <QMainWindow>

class QtFITAPK : public QMainWindow
{
    Q_OBJECT

public:
    QtFITAPK(QWidget *parent = nullptr);
    ~QtFITAPK();

private slots:
    void handleLogin();  // <- w³asny slot
    void handleRegister();  // <- w³asny slot

private:
    Ui::QtFITAPKClass ui;
};
