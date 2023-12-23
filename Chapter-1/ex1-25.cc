//注：可以使用文件重定向操作，从保存销售记录的文件中读取数据，并将结果保存到另一个文件中。
#include <iostream>
#include "Sales_item.h"
int main()
{
	//名为total的Sales_item对象将用于保存当前正在处理的书的销售数据。
	Sales_item total;
	//若初始数据写入成功，则执行接下来的语句块，否则将输出错误信息。
	if (std::cin >> total){
		Sales_item trans;//名为trans的Sales_item对象保存着下一条要处理的销售数据。
		while (std::cin >> trans){
			if (total.isbn() == trans.isbn())
				//若新输入的销售数据中的ISBN号和当前书的ISBN号相同，则二者是同一本书的两条销售数据，此时应合并这两条销售数据。
				total += trans;
			else{
				//若新输入的销售数据中的ISBN号和当前书的ISBN号不同，则说明当前书的所有销售数据已处理完毕（已假设同一本书的所有销售数据会保存在一起）。
				//输出当前书的最终销售数据。
				std::cout << total << std::endl;
				//将trans的值赋给total，现在total中保存的就是下一本书的销售数据。
				total = trans;
			}
		}
		//输出最后一本书的销售数据。
		std::cout << total << std::endl;
	}
	else{
		//输出错误信息，提示没有数据写入。
		std::cerr << "No data?!" << std::endl;
		return -1;//表示运行失败。
	}
	return 0;//表示运行成功。
}
