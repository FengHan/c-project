#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}