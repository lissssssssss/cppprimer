#include <iostream>
/*****************
 * User:	Liss
 * Date:	2017/05/20
 * Program:	引用
 * *********************************/
int main()
{
	int ival = 1024;
	int &rerfVal = ival;
	//int &refVal2;		//报错，应用必须被初始化
	refVal1 = 2;		//相当于赋值给inval
	int ii = refVal;	//相当于ii = ival
	//refVal3 绑定到与refVal1绑定的对象上，亦即绑定到ival上
	int &refVal3 = refVal1;
	int i = refVal;		//相当于i = ival;
	return 0;
}
