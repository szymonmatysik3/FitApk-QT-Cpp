#include "QtFITAPK.h"
#include "Menu.h"
#include "MenuRegister.h"
#include <QMessageBox>

QtFITAPK::QtFITAPK(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);    
    connect(ui.buttonLogin, &QPushButton::clicked, this, &QtFITAPK::handleLogin);
    connect(ui.button_register, &QPushButton::clicked, this, &QtFITAPK::handleRegister);
}

QtFITAPK::~QtFITAPK()
{}

void QtFITAPK::handleRegister() {
    MenuRegister* reg = new MenuRegister();
    reg->show();
    this->close();
}

void QtFITAPK::handleLogin(){
    QString Qlogin = ui.text_Login->text();
    QString Qpass = ui.text_pass->text();
    QString Qaccount = ui.accountType->currentText();
    std::string account = Qaccount.toStdString();
    std::string pass = Qpass.toStdString();
    std::string login = Qlogin.toStdString();

    if (account == "Sportowiec") {
        if (login == "" && pass == "") {
            Menu* menu = new Menu();
            menu->show();
            this->close();
        }
        else {
            QMessageBox::warning(this, "Blad", "Nieprawidlowe dane logowania");
            ui.text_pass->clear();
            
        }
    }
    else {
        QMessageBox::warning(this, "Blad", "Niestety panel trenera jest w budowie");
    }
}