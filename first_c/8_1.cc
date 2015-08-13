#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	// 求出数组arr中大于a的值得和
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] < a) 
			sum += arr[i];
	}
	cout << sum << endl;
	return 0;
}