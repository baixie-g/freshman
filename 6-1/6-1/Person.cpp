#include"Person.h"
#include<iostream>
Person::Person(string name, string id, string sex):
name(name),id(id),sex(sex){};
void Person::print_info()
{
	cout << "name:" << name << endl;
	cout << "id:" << id << endl;
	cout << "sex:" << sex << endl;
	cout << "\033[34;1mpersonµÄinfo\033[0m" << endl;
};