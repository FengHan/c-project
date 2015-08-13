#include <iostream>
using namespace std;

int main() {
	// 获取输入序列的长度n和k
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// 双循环判断是否存在某两个元素之和为k。

	for (int i = 0; i < n; i++) {
		for (int j =0; j < n; j++) {
		if (a[i] + a[j] == k){
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;
	return 0; 
}