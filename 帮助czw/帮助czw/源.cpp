#include<iostream>
using namespace std;
int main() 
{
	int n,x,SUM=0;
	int a[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		SUM += a[i] * pow(x, i);
	}
	cout << SUM;
}