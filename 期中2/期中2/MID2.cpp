//二、任意输入一正整数n，计算1~n之间素数的和。
#include<iostream>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) return false;//特判
	int sqr = (int)sqrt(n);//根号n
	for (int i = 2; i <= sqr; i++) {//遍历2~根号n 
		if (n % i == 0) return false;//n是i的倍数，则n不是素数 
	}
	return true;//n是素数 
}
int main()
{
	int n,SUM=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (isPrime(i))SUM += i;
	cout << SUM << endl;
}