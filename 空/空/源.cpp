#include <iostream>
using namespace std;
int a, b;
void f() {
	cout << a<<endl;
	int a = 1;
	static int b = 3;
	a++;
	b++;
	int c = a + b;
	cout << a << " " << b << " " << c << endl;
}
int main()
{
	int c = 1;
	c = a + b;
	cout << a << " " << b << " " << c << endl;
	f();
	a++;
	
	c = a +b++; b;
	cout << a << " " << b << " " << c << endl;
	f();
	return 0;


}
