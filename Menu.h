#pragma once

#include <QMainWindow>
#include "ui_Menu.h"
#include "QtFITAPK.h"

class Menu : public QMainWindow
{
	Q_OBJECT

private slots:
	void handleLogout();  // <- w³asny slot
public:
	Menu(QWidget *parent = nullptr);
	~Menu();

private:
	Ui::MenuClass ui;
};
