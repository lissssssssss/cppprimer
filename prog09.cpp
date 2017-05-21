#include <iostream>
/**********************
 * User:	Liss
 * Date:	2017/04/23 22:44
 * Digest:	输入组整数，输出每个数字连续输入多少次
 * ******************************************************/
int main()
{
	//currVal我们正在统计的数，val我们当前读如的新值
	int currVal = 0, val = 0;
	// 读取第一个数，并确保有数字可处理
	if (std::cin >> currVal) {
		int cnt = 1;				//保存我们正在处理的当前值的个数
		while (std::cin >> val) {		//读取剩余的数
			if (val == currVal) {		//如果值相同
				++cnt;			//当前值的重复次数加1
			} else {			//否则打印当前值的重复次数
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;		//记住新值
				cnt = 1;		//重置计数器
			}	//if语句结束
		}	//while循环结束
		//打印最后一个数字的重复次数
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}	//最外层if语句结束
	return 0;
}
