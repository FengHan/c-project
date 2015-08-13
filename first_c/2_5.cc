#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	// 定义数组a，存放n个数
	int a[n];	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	// 遍历数组，从最高位输出
	for (int i = 0; i < n; i ++) {
		cout << a[n - 1- i] << " ";
	}
	cout << endl;
	return 0;
}