#include <iostream>
/***********
 * User:	liss
 * Date:	2017/04/23
 * Digest:	提示用户输入两个整数，打印两个整数之间的所有整数。
 * ****************************************************************/
int main()
{
	//提示用户输入两个数字
	std::cout << "Please input two number: " << std::endl;
	int v1 =  0, v2 = 0;
	//接受输入并存入变量v1，v2
	std::cin >> v1 >> v2;
	//确保v1<=v2
	if (v1 > v2) {
		v1 += v2;
		v2 = v1 - v2;
		v1 -= v2;
	}
	//循环打印v1～v2之间的整数
	while (v1 <= v2) {
		//打印v1
		std::cout << v1 << std::endl;
		//累加v1
		v1++;
	}
	return 0;
}
