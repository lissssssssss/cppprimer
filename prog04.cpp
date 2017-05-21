/*****************
 * User:	Liss
 * Date:	2017/04/23 19:53
 * Digest:	输入俩个整数计算乘积
 * **************************************/
#include <iostream>

int main()
{
	//提示输入两个整数
	std::cout << "Enter two numbers: " << std::endl ;

	//定义两个整型变量并初始化
	int v1 = 0, v2 = 0 ;

	//接受输入
	std::cin >> v1 >> v2 ;

	//计算并输出结果
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl ;
	return 0 ;
}
