#pragma once
#include<string>
using namespace std;
class Person
{
protected:
	string name, id, sex;
public:
	Person(string name = "", string id = "", string sex = "");
	void print_info();
};