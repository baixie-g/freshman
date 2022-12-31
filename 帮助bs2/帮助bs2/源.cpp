#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
    int n;
    scanf("%d", &n);
    int a[1000];
    int i, j, x;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    printf("%d\n%d\n%d\n", n, x, a[n]);
    for (i = 0; (x < a[i]) && (i <= n); i++)
    {
        for (j = n; j > i; j--)
            a[j] = a[j - 1];
        a[i] = x; break;
    }


    for (i = 0; i < n + 1; i++)
        printf("%d ", a[i]);
    return 0;
}