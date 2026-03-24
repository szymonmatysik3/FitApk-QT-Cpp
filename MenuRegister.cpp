#include "MenuRegister.h"
#include "QtFITAPK.h"


MenuRegister::MenuRegister(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.button_back, &QPushButton::clicked, this, &MenuRegister::handleBack);
	connect(ui.button_register, &QPushButton::clicked, this, &MenuRegister::handleRegister);
}

MenuRegister::~MenuRegister()
{}

void MenuRegister::handleBack() {
	QtFITAPK* win = new QtFITAPK;
	win->show();
	this->close();
}

void MenuRegister::handleRegister() {

	bool x = ui.checkBox_Rules->isChecked();

	if (x == false) {
		QMessageBox::warning(this, "REGULAMIN", "Nie zaakceptowano regulaminu!");
	}
}
