#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      double x,cosx=0,term=1;
      int i=0;

      cin>>x;//�������
      x = x/180*3.1415926;//ת��Ϊ�Ƕ�
//ѭ��������������ĳ���㹻Сʱ��ѭ����ֹ����Щͬѧ��for(i=0;i<=10;i++)��������������Ϊ���Ȳ�֪������Ҫѭ�����ٴ�
      while(fabs(term)>1e-6)
     {
         cosx += term;

//Ϊ�´�ѭ��׼�����ݣ����õ��Ʒ�ʽ������һ�����ݡ���Ҫ��ͨ�ʽ������һ�����ݣ��ǳ��˷�ʱ��
         i += 2;
         term = -term*x*x/(i*(i-1));
     }
      cout<<cosx<<endl;

    return 0;
}
