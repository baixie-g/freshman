#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	double x1, x2;
	double DT, DT1;
	cout << "ax^2+bx+c=0" << endl;
	cout << "������a��" << endl;
	cin >> a;
	cout << "������b��" << endl;
	cin >> b;
	cout << "������c��" << endl;
	cin >> c;

	DT1 = b * b - 4 * a * c;
	if (DT1 < 0)
	{
		cout << "�޽�" << endl;
		goto P;
	}
	
	DT = sqrt(b * b - 4 * a * c);
	x1 = (-b + DT) / (2 * a);
	x2 = (-b - DT) / (2 * a);
	cout << "x1��" << x1 << "\nx2��" << x2 << endl;
P:

	return 0;


}