#include <iostream>
int main()
{
	int sum = 0, val = 50;//sum用来保存计算结果，val = 50是因为从50开始计算。
	while (val <= 100){
		//只要val的值小于或等于100，while循环就会持续执行。
		sum += val;//计算sum + val，并将结果保存在sum中。
		++val;//val的值+1。
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;//输出最终计算结果。
	return 0;
}

