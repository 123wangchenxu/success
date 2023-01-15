#include<iostream>
#include<cstring>
using namespace std;
template <typename T>
T max( T*arr,int size)
{
	int i = 0;
	int count = 0;
	for ( i = 0; i < size; i++)
	{
		count = 0;
		for (int j = 0; j < size; j++)
		{
			if (arr[i] >= arr[j])
				count++;
		}
		if (count == size)
			break;
	}
	return arr[i];
}
template<>char* max(char**pc, int size)
{
	int i = 0;
	int count = 0;
	int total = 0;
	for (i = 0; i < size; i++)
	{
		count = 0;
		for (int j = 0; j < size; j++)
		{
			if (strlen(pc[i])>=strlen(pc[j]))
				count++;
		}
		if (count == size)
		{
			total++;
			break;
		}
	}
	return pc[i];
}
int main()
{

	return 0;
}


/*7.修改程序清单8.14，使其使用两个名为
SumArray0的模板函数来返回数组元素的总和，
而不是显示数组的内容。程序应显示 thing的总和以及所有
debt 的总和。*/