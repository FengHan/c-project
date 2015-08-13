#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	//按从小到大的顺序输出所有大于等于10,小于等于n的自整除数,每行一个自整除数.
	for (int i = 10; i <= n; i++) {
		// 定义a为整除数， b为余数
		int a, b;
		a = i /10;
		b = i % 10;
		if (i % (a+b) == 0) {
			cout << i << endl;
		}
	}
	return 0;
}