#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      double x,cosx=0,term=1;
      int i=0;

      cin>>x;//输入度数
      x = x/180*3.1415926;//转化为角度
//循环控制条件：当某项足够小时，循环终止。有些同学用for(i=0;i<=10;i++)，这样不合理，因为事先不知道到底要循环多少次
      while(fabs(term)>1e-6)
     {
         cosx += term;

//为下次循环准备数据，采用递推方式产生下一项数据。不要用通项公式计算下一项数据，非常浪费时间
         i += 2;
         term = -term*x*x/(i*(i-1));
     }
      cout<<cosx<<endl;

    return 0;
}
