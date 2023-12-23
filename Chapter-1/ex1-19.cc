#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 <= v2){
		//若v1小于或等于v2，则直接用while循环输出所有整数即可。
		while (v1 <= v2){
			std::cout << v1 << std::endl;
			++v1;
		}
	}
	else{
		//若v1大于v2，则需要先将二者互换一下，以使得循环能正常执行。 
		int v1_n = v2;//将较小的v2作为新的v1。
		int v2_n = v1;//将较大的v1作为新的v2。
		while (v1_n <= v2_n){
			std::cout << v1_n << std::endl;
			++v1_n;
		}
	}
	return 0;
}
