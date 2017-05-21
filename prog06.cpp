#include <iostream>
/***************
 * User:	Liss
 * Date:	2017/04/23 21:10
 * Digest:	打印1-10的和
 * **********************************/
int main()
{
	int sum = 0, val = 1;
	//只要val的值小于等于10，while循环就会持续执行
	while (val <= 10) {
		sum += val;	//将sum+val赋予sum
		++val;		//将val加1
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}
