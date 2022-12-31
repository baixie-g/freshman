#include<stdio.h>
#include<math.h>
#include<string>
int  main()
{
    int m, n, sum = 0;
    scanf_s("%d%d", &n, &m);
    int temp;
    if (m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for (; n <= m; n++)
    {
        if (n % 2 == 0)
        sum = sum + n;
    };
    printf("%d\n", sum);
};