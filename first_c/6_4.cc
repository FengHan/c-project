#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a, b, c ,d, e, f;
	a = n / 100;
	b = n %100 /50;
	c = n %100 % 50 /20;
	d = n % 100 % 50 % 20 /10;
	e = n % 100 % 50 % 20 % 10 / 5;
	f = n % 100 % 50 % 20 % 10 % 5 / 1;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	return 0;
}