#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
using namespace std;
class Person
{
protected:
    char* name;
    char sex;
    int age;
public:
    Person(){}
    Person(char*, char, int);
    Person(Person&p);
    ~Person();
    virtual void print_info()
    {
       cout << "名字：" <<name << '\n' <<"性别为： "<< sex << '\n' << "年龄为：" << age << endl ;
    }
};

class Student:   virtual public Person
{
protected:
    string st;
    int nj;
public:
    Student(){}
    Student(char*, char, int, string, int);
    Student(Student&s);
    void print_info()
    {
        cout << "名字：" <<name << '\n' <<"性别为： "<< sex << '\n' << "年龄为："
        << age << '\n' << "专业为：" << st << '\n' << "年级为"<< nj << endl ;
    }

};

class Assistant:  virtual public Person
{
protected:
    char xy[10];
    double salary;

public:
    Assistant(){}
    Assistant(char*, char, int, char*, double);
    Assistant(Assistant& a);
    void print_info()
    {
        cout << "名字：" <<name << '\n' <<"性别为： "<< sex << '\n' << "年龄为：" << age << '\n'
         << "学院为：" << xy<< '\n'<< "月薪为："<< salary<< endl;
    }


};

class Student_assistant: public Student, public Assistant
{
public:
    Student_assistant(){}
    Student_assistant(char*, char, int, string, int,char*,double);
    virtual void print_info()
    {
        cout << "名字：" << name << '\n' <<"性别为： "<< sex << '\n' << "年龄为："
        << age << '\n' << "专业为：" << st << '\n' << "年级为"<< nj
        <<'\n' << "学院为：" << xy<< '\n'<< "月薪为："<< salary<< endl;
    }

};




#endif // PERSON_H_INCLUDED
