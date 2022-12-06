//字符串类Mystring定义如下：
//class Mystring
//{
//private:
//    char* p;
//    int len;
//public:
//    Mystring(char* p = NULL);
//    Mystring(Mystring&);
//    ~Mystring();
//    void show();//输出字符串
//};
//请实现类中的成员函数并测试之。

#include<iostream>
using namespace std;
#pragma warning(disable:4996);
class Mystring
{
private:
    char* p;
    int len;
public:
    Mystring(char* p = NULL);
    Mystring(Mystring&);
    ~Mystring();
    void show();//输出字符串
};
Mystring::Mystring(char* p ) {
    len = strlen(p);
    this->p = new char[len + 1] {0};//?
    strcpy(this->p, p);
};
Mystring::Mystring(Mystring& a) {
    len = a.len;
    p = new char[len + 1] {0};
    strcpy(p, a.p);
};
Mystring::~Mystring() {
    delete[] p;
};
void Mystring::show() {
    cout << "string为" << p << endl;
};
int main()
{
    char p[20] = "asdfghjkl";
    Mystring a(p);
    Mystring b(a);
    a.show();
    b.show();
}