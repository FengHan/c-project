/*
编程题＃3：奇偶排序（二）
注意： 总时间限制: 1000ms 内存限制: 65536kB
描述
和上题一样，但是要求用第二种解法
输入
输入十个整数
输出
按照奇偶排序好的十个整数
*/
#include <iostream>
using namespace std;
int main () {
	int a[10];
	for (int i = 0; i< 10; i++) {
		cin >> a[i];
	}
	//冒泡， 不断比较两个相邻的数，如果顺序错了，那么就交换
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 10 - i; j++) {
		    //与刚才的冒泡排序法不同，我们不只是通过数字的大小决定顺序
			//如果左边为偶数，右边为奇数，那么顺序也颠倒
			bool leftIsEven = a[j - 1] % 2 == 0;
			bool rightIsEven = a[j] % 2 == 0;
			if ((leftIsEven && !rightIsEven)|| 
				(leftIsEven == rightIsEven && a[j - 1] > a[j])) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}