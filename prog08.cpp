#include <iostream>
/*******************
 * User:	Liss
 * Date:	2017/04/23 22:22
 * Digest:	输入n个整数，输出他们的和
 * ***************************************/
int main()
{
	int sum = 0, value = 0;
	//读如数据直到遇到文件尾，计算所有读入数字的和
	while (std::cin >> value) {
		sum += value;		//等加与sum = sum + value;
	}
	std::cout << "Sum is : " << sum << std::endl;
	return 0;
}
