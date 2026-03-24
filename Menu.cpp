#include "QtFITAPK.h"
#include "Menu.h"
#include <QMessageBox>
#include "FileManager.h"

Menu::Menu(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.buttonLogout, &QPushButton::clicked, this, &Menu::handleLogout);
	
}

Menu::~Menu()
{}


void Menu::handleLogout()
{
    //QString login = ui.text_Login->text();
    //QString haslo = ui.text_pass->text();
    //QMessageBox::warning(this, "B³¹d", "Z³y login lub has³o!");

    

    QtFITAPK* out = new QtFITAPK();
    out->show();
    this->close();
}