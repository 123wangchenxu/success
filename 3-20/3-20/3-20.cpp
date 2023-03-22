#include<iostream>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<vector>
#include<functional>
#include<string>
#include<cctype>
#include<random>
#include<iterator>
std::vector<int>lotto(int m,int n)
{
	std::vector<int>a(n);
	for (int i = 0; i < n; i++)
		a[i] = rand()%m+1;
	std::random_shuffle(a.begin(), a.end());
	return a;
}
int main()
{
	std::vector<int>winners;
	winners = lotto(51, 6);
	for (int i = 0; i < 6; i++)
	{
		std::cout << winners[i] << std::endl;
	}
	return 0;
}

/*7����Ʊ���Ǹ���������Ϸ����Ƭ���Ǵ���ŵ�Բ�㣬����һЩԲ�㱻���ѡ�С�
��дһ�� lotto()����������������������
��һ�������ǲ�Ʊ����Բ��ĸ������ڶ������������ѡ���Բ�������
�ú�������һ�� vector<int>�������а���(�����к��˳��)���ѡ��ĺ��롣
���磬��������ʹ�øú���:
vector<int> winners;
winners = Lotto(51, 6);
��������һ��ʸ������winner����ʸ������1~51�����ѡ����6�����֡�
ע�⣬����ʹ��rand()�޷������������
�����������ظ���ֵ����ʾ:�ú�������һ���������п���ֵ��ʸ����ʹ��random shume()��
Ȼ��ͨ�����Һ��ʸ���ĵ�һ��ֵ����ȡֵ��
��дһ��С�����������������
8.Mat��Patϣ���������ǵ��������μ��ɶԡ�
����Ҫ��дһ��������������������Mat ���������ѵ������б�
�����洢��һ�������У�Ȼ�����к��˳����ʾ������ Pat ���������ѵ������б�
�����洢����һ�������У�Ȼ�����к��˳����ʾ���������������������������б�ϲ���
ɾ���ظ��Ĳ��֣�����ʾ������������ݡ�*/