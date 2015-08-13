/*
描述

给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。

输入

输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。

输出

输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
*/
#include <iostream>
using namespace std;

int main () {
	// 获取总数 k
	int k;
	cin >> k;
	int times1 = 0;
	int times5 = 0;
	int times10 = 0;
	int input;
	// 把所有数放到数组a中
	for (int i = 0; i < k; i ++) {
		// 计算 1， 5， 10 出现的次数
		cin >> input;
		if (input == 1) {
			times1++;
		} else if (input == 5) {
			times5++;
		} else if (input == 10) {
			times10++;
		}
	}
	
	
	// 输出结果
	
	cout << times1 << endl;
	cout << times5 << endl;
	cout << times10 << endl;
}
