#pragma once
#pragma once
#include<iostream>
#include<time.h>
#include<string>
#include<stdlib.h>
using namespace std;
class Person
{
protected:
	string name, id, sex;
public:
	Person(string name = "", string id = "", string sex = "");
	void print_info();
};
Person::Person(string name, string id, string sex) :
	name(name), id(id), sex(sex) {};
void Person::print_info()
{
	cout << "name:" << name << endl;
	cout << "id:" << id << endl;
	cout << "sex:" << sex << endl;
	cout << "\033[34;1mpersonµÄinfo\033[0m" << endl;
};

class clock {
protected:
	tm time;
public:
	clock(tm time) {
		this->time = time;
	};
	void show_info() {
		int hour = time.tm_hour;
	};
};
