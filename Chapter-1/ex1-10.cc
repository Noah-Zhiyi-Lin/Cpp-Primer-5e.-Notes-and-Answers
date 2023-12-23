#include <iostream>
int main()
{
	int list = 10;
	while (list >= 0){
		//当list大于或等于0时，while循环将持续执行。
		std::cout << list << std::endl;
		--list;//list的值-1。
	}
	return 0;
}
