#include <iostream>
#include "Sales_item.h"
int main()
{
	std::cout << "Enter two sales records (with same ISBN):"
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
