#include <iostream>
int main()
{
	int currVal = 0, val = 0;//currVal记录当前正在统计的数，而val记录用户输入的数。
	int count = 1;//记录数连续出现的次数（初始值为1，因为至少出现1次）。
	if (std::cin >> currVal){//一方面保证只有有数输入才会执行后续的语句块，另一方面也将输入的数写入到currVal中。
		while (std::cin >> val){
			if (val == currVal)
				++count;//若新输入的数和当前统计的数相同，则当前统计的数出现的次数+1。
			else{
				//输出当前统计的数连续出现的次数。
				std::cout << currVal << " occurs " << count << " times." << std::endl;
				//更新currVal的值为新输入的数，表示接下来要对新输出的数连续出现的次数进行统计。
				currVal = val;
				//将计数器重置为1。
				count = 1;
			}
		}//while循环结束
		//输出用户最后输入的数连续出现的次数（否则在while循环结束以后是不会有输出的）
		std::cout << currVal << " occurs " << count << " times." << std::endl;
	}//if语句结束
}


