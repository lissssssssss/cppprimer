#include <iostream>
/*********************
 * User:		Liss
 * Date:		2017/04/25 22:43
 * Digest:		转义序列（escape sequence)
 * *****************************************************/
int main()
{
	std::cout << '\n';
	std::cout << "\tHi!\n";
	std::cout << 'a';
	std::cout << 'a';
	std::cout << "bb\b";
	for (int i = 0; i<10000000000000; i++) {
		std::cout << '\a';
	}
	std::cout << std::endl;
	return 0;
}
