#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
int main(void)
{
    char input[100];
    system("shutdown -s -t 60");
    //����Windowsϵͳ�µ�һ���ػ�����
flag:
    printf("��ĵ��Խ���һ���Ӻ�ػ���������롰���������ͻ�ȡ���ػ���\n������: ");
    scanf("%s", input);
    if (0 == strcmp(input, "������"))
    {
        system("shutdown -a");//ȡ���ػ�����
    }
    else
    {
        goto flag;
    }
    return 0;
}
