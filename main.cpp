#include "QtFITAPK.h"
#include "Menu.h"
#include "MenuRegister.h"
#include "People.h";
#include "FileManager.h";


#include <QtWidgets/QApplication>
#include <iostream>;



//trzeba dodac obsluge pliku z labow
//trzeba dodac generowanie obiektow sportowiec z pliku, najlepiej json (nie wiadomo jak bedzie wspolpracowac ze soba)


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QtFITAPK window_login;
    window_login.show();

    QtFITAPK* window_log = &window_login;

    std::vector<People>* SportMembers;
    loadSportMembers(SportMembers, window_log);
    
    //Menu window_menu;
    //window_menu.show();

    return a.exec();
    
    
    window_login.close();


}
