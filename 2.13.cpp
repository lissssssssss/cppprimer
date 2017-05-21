#include <iostream>
/**********************
 * User:		Liss
 * Date:		2017/05/20
 * Program:		作用域练习题
 * **************************************/
int i = 42;
int main()
{
	int i = 100;
	int j = i;
	std::cout << j << std::endl;
	return 0;
}
