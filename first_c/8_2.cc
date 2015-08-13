#include <iostream>
using namespace std;

int main() {
	// 当路程大于100米时，骑车快
	int m = 100;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//判断哪个快
	for (int i = 0; i < n; i++) {
		if (a[i] > 100) 
			cout << "Bike" << endl;
		else if (a[i] == 100)
			cout << "All" << endl;
		else 
			cout << "Walk" << endl;
	}
	return 0;
}