#include <iostream>
#include "Assistant.h"
using namespace std;

int main()
{

    Student_assistant sa("小明", "3302012210212", "男", "软件工程", "一年级", "软件学院", 10000);
    sa.print_info();
    return 0;
}
