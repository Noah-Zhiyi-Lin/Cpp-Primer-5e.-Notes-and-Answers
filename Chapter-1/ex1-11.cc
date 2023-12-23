#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;//v1和v2用于保存用户输入的两个数。
	std :: cin >> v1 >> v2;
	while (v1 <= v2){
		std::cout << v1 << std::endl;
		++v1;//v1的值+1以实现按递增顺序输出整数。
	}
	return 0;
}
