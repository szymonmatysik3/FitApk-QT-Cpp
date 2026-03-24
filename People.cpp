#include <iostream>
#include <string>
#include "People.h";

People::People(const std::string& n, const std::string& sn, const int& a, const std::string& log, const std::string& pass)
    : name(n), surname(sn), age(a), login(log), password(pass) {};

std::string People::getName() { return name; }
std::string People::getLogin() { return login; }
std::string People::getPassword() { return password; }
std::string People::getSurName() { return surname; }
int People::getAge() { return age; }
void People::changeAge(const int& newAge) { age = newAge; }
void People::changePassword(const std::string& newPass) { password = newPass; }

void Sportowiec::d() {
    std::cout << "X";
}
