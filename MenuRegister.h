#pragma once

#include <QMainWindow>
#include "ui_MenuRegister.h"
#include <QMessageBox>

class MenuRegister : public QMainWindow
{
	Q_OBJECT

private slots:
	void handleBack();
	void handleRegister();
public:
	MenuRegister(QWidget *parent = nullptr);
	~MenuRegister();

private:
	Ui::MenuRegisterClass ui;
};
