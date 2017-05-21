#include <iostream>
/*****************************
 * User:	Liss
 * Date:	2017/04/25 21:15
 * Digest:	测试无符号数与带符号数的混用
 * ********************************************/
int main()
{
	int i = 10;
	unsigned int j = 10;
	std::cout << i - j << std::endl;
	std::cout << j - i << std::endl;
	return 0;
}
