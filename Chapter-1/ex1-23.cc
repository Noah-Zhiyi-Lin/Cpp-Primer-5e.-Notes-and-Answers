//注1：作者给出的条件不完整。需要假设同一本书的所有销售记录是集合在一起保存的。
//注2：可以使用文件重定向操作，从保存销售记录的文件中读取销售记录，并将结果保存到另一个文件中。
#include <iostream>
#include "Sales_item.h"
int main()
{
	//currbook用于保存当前正在统计的书的销售数据，nextbook用于保存新输入的销售数据。
	Sales_item currbook, nextbook;
	if (std::cin >> currbook){
		int count = 1;//变量count作为书籍销售记录条数的计数器。
		//当有新销售数据输入时，则执行如下while循环。
		while (std::cin >> nextbook){
			//若新输入书的ISBN号和当前书相同，则将销售数据合并，且销售记录条数+1。
			if (currbook.isbn() == nextbook.isbn()){
				currbook += nextbook;
				++count;
			}
			//若不相同，则说明当前书的销售数据统计完毕，需要统计新的书。
			else{
				//输出当前书的销售记录条数（销售次数）。
				std::cout << currbook.isbn() << " sales " << count << " times." << std::endl;
				currbook = nextbook;//将nextbook的数据赋给currbook，表示接下来统计新的书。
				count = 1;//重置计数器。
			}
		}
		//输出最后一本书的销售记录条数（销售次数）。
		std::cout << currbook.isbn() << " sales " << count << " times." << std::endl;
	}
	else{
		//如果没有数据输入，则输出一条错误信息。
		std::cerr << "No Data!" << std::endl;
		return -1;//返回值-1代表程序运行错误。
	}
	return 0;//返回值0代表程序运行成功。
}
