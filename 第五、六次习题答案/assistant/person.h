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
       cout << "���֣�" <<name << '\n' <<"�Ա�Ϊ�� "<< sex << '\n' << "����Ϊ��" << age << endl ;
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
        cout << "���֣�" <<name << '\n' <<"�Ա�Ϊ�� "<< sex << '\n' << "����Ϊ��"
        << age << '\n' << "רҵΪ��" << st << '\n' << "�꼶Ϊ"<< nj << endl ;
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
        cout << "���֣�" <<name << '\n' <<"�Ա�Ϊ�� "<< sex << '\n' << "����Ϊ��" << age << '\n'
         << "ѧԺΪ��" << xy<< '\n'<< "��нΪ��"<< salary<< endl;
    }


};

class Student_assistant: public Student, public Assistant
{
public:
    Student_assistant(){}
    Student_assistant(char*, char, int, string, int,char*,double);
    virtual void print_info()
    {
        cout << "���֣�" << name << '\n' <<"�Ա�Ϊ�� "<< sex << '\n' << "����Ϊ��"
        << age << '\n' << "רҵΪ��" << st << '\n' << "�꼶Ϊ"<< nj
        <<'\n' << "ѧԺΪ��" << xy<< '\n'<< "��нΪ��"<< salary<< endl;
    }

};




#endif // PERSON_H_INCLUDED
