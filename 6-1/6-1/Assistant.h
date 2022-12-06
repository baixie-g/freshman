#pragma once
#include"Person.h"
using namespace std;
class Assistant :virtual public Person
{
protected:
	string school;
	double salary;
public:
	Assistant(string name = "", string id = "", string sex = "",
		      string school = "", double salary = 0);
	void print_info();
};