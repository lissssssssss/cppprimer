#include <iostream>
/****************************
 * User:	Liss
 * Date:	2017/05/15
 * Digest:	变量声明,四种方式
 * 		赋值，函数，列表初始化，列表函数初始化
 * **********************************/
std::string global_str;
int global_int;
int main()
{
	int local_int;
	std::string local_str;
	int a = 0, b(0), c = {0}, d{0};
	int i = 3.14;
	//int i = { 3.14 };	错误，信息丢失
	//double salary = wage = 9999.99;	错误，wage为定义
	std::cout << "global_str:" << global_str << "local_str:" << local_str << "global_int:" << global_int << "local_int:" << local_int << std::endl;
	extern int m;
	int extern n = 0;
	return 0;
}
