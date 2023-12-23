#include <iostream>
#include "Sales_item.h"
int main()
{
	std::cout << "Enter sales data:" << std::endl;
	Sales_item item;//创建一个Sales_item类的对象用于保存输入的销售数据。
	std::cin >> item;//写入销售数据。
	std::cout << item << std::endl;//输出销售数据。
	return 0;
}
