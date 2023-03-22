#include<iostream>
#include<string>
#include<memory>
#include<vector>
class TV;
class Remote{
};
class TV{};
int main()
{
	
	double prices[5] = { 0,1,2,3,4 };
	for (double x : prices)
	{
		std::cout << x << std::endl;
	}
	
	return 0;
}
//4.程清单15.16在每个try 后面都使用两个 catch 块，
//以确保nbad index 异常导致方法 label val()被调用。
//请修改该程序, 在每个try 块后面只使用一个 catch 块, 
//并使用RTTI来确保合适时调用 label_val()。