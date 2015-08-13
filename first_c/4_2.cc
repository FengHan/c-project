#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// 小圆桶的深h和底面半径r
	int h, r;
	cin >> h >> r;
	// 计算大象需要多少桶
	int res;
	res = ceil ((double) 20000/(double)(3.14159 * r * r * h));
	cout << res << endl;
	return 0;
}