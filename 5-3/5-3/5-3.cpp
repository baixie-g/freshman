//�ַ�����Mystring�������£�
//class Mystring
//{
//private:
//    char* p;
//    int len;
//public:
//    Mystring(char* p = NULL);
//    Mystring(Mystring&);
//    ~Mystring();
//    void show();//����ַ���
//};
//��ʵ�����еĳ�Ա����������֮��

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
    void show();//����ַ���
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
    cout << "stringΪ" << p << endl;
};
int main()
{
    char p[20] = "asdfghjkl";
    Mystring a(p);
    Mystring b(a);
    a.show();
    b.show();
}