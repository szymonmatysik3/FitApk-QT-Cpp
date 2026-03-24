#ifndef People_H
#define People_H

#include <iostream>
#include <string>

class People {
protected:
	std::string name;
	std::string surname;
	int age;
private:
	std::string login;
	std::string password;
	

public:
	People(const std::string& n, const std::string& sn, const int& a, const std::string& log, const std::string& pass);
	virtual std::string getName();
	virtual std::string getLogin();
	virtual std::string getPassword();
	virtual std::string getSurName();
	virtual int getAge();
	virtual void changeAge(const int& newAge);
	virtual void changePassword(const std::string& newPass);
};

class Sportowiec : public People{
	void d();
};

#endif 
