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
//4.���嵥15.16��ÿ��try ���涼ʹ������ catch �飬
//��ȷ��nbad index �쳣���·��� label val()�����á�
//���޸ĸó���, ��ÿ��try �����ֻʹ��һ�� catch ��, 
//��ʹ��RTTI��ȷ������ʱ���� label_val()��