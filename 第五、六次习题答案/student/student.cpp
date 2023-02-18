#include <iostream>
#include "student.h"
#include <cstring>
using namespace std;


Student::Student(char * _id ,char *_name ,double _math ,double _physics ,double _english )
{
	if (_id)
		strcpy(id,_id);
	if (_name)
	{
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	else
		name = NULL;
	math = _math;
	physics = _physics;
	english = _english;
}

void Student::setinfo(char * _id ,char * _name ,double _math,double _physics ,double _english )
{
	strcpy(id, _id);
	if (name == NULL)
	{	name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}
	else if(strlen(name) >= strlen(_name))
		strcpy(name,_name);
	else
	{
		delete []name;
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	}



	math = _math;
	physics = _physics;
	english = _english;


}

double Student::total()
{
	return math+physics+english;

}

void Student::showinfo()
{
	cout<<id<<"  "<<name<<"  "<<math<<"  "<<physics<<"   "<<english<<endl;

}

char * Student::getid()
{
	return id;
}



Student::~Student()
{
	if (name)
		delete []name;
}
