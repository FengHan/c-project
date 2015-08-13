/*
编程题＃1： 晶晶赴约会
*/
#include <iostream>
using namespace std;

int main() {
	//输入星期
	int n;
	cin >> n;
	//判断晶晶是否有课
	// 输出晶晶是否可以接受邀请
	if (n == 1) {
		cout << "NO";
	} else if (n == 3) {
		cout << "NO";
	} else if (n == 5) {
		cout << "NO";
	} else {
		cout << "YES";
	}
}

