#include "FileManager.h"

void loadSportMembers(std::vector<People>*& sportMembers, QtFITAPK*& window) {
    std::filesystem::path spath = "base/";
    spath /= "sportowcy.json";
    if (!std::filesystem::exists(spath)) {
        QMessageBox::warning(window, "BLAD", "Plik sportowcy.json nie istnieje. Zostanie utworzony pusty plik.");
        std::filesystem::create_directories(spath.parent_path());
    }
    else {
        
    }
    //else {
       //if (fs::is_regular_file(l)) {
           //std::cout << "[FILE] " << l.path().filename() << "(rozmiar = " << std::filesystem::file_size(l) << "B)" << std::endl;
       //}; 
   //};
};