//������������һ������n������1~n֮�������ĺ͡�
#include<iostream>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) return false;//����
	int sqr = (int)sqrt(n);//����n
	for (int i = 2; i <= sqr; i++) {//����2~����n 
		if (n % i == 0) return false;//n��i�ı�������n�������� 
	}
	return true;//n������ 
}
int main()
{
	int n,SUM=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (isPrime(i))SUM += i;
	cout << SUM << endl;
}