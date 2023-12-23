#include <iostream>
int main()
{
	std::cout << "Enter some numbers:" << std::endl;
	int sum = 0;
	for (int val = 0; std::cin >> val;)
		sum += val;
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
