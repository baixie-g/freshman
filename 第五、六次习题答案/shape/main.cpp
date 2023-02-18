#include <iostream>
#include "Circle.h"

using namespace std;
void show(Shape *p)
{
    p->Base_info();
    p->show();
    cout<<"Area:"<<p->Getarea()<<endl;
    cout<<"Perimeter:"<<p->Getperimeter()<<endl;
}
int main()
{
    Circle c(1,2,1);
    Shape *p = &c;
    show(p);
    return 0;
}
