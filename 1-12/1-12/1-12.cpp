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


/*7.�޸ĳ����嵥8.14��ʹ��ʹ��������Ϊ
SumArray0��ģ�庯������������Ԫ�ص��ܺͣ�
��������ʾ��������ݡ�����Ӧ��ʾ thing���ܺ��Լ�����
debt ���ܺ͡�*/