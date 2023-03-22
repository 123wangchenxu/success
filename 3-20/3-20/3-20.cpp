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

/*7、彩票卡是个常见的游戏。卡片上是带编号的圆点，其中一些圆点被随机选中。
编写一个 lotto()函数，它接受两个参数。
第一个参数是彩票卡上圆点的个数，第二个参数是随机选择的圆点个数。
该函数返回一个 vector<int>对象，其中包含(按排列后的顺序)随机选择的号码。
例如，可以这样使用该函数:
vector<int> winners;
winners = Lotto(51, 6);
这样将把一个矢量赋给winner，该矢量包含1~51中随机选定的6个数字。
注意，仅仅使用rand()无法完成这项任务，
因它会生成重复的值。提示:让函数创建一个包含所有可能值的矢量，使用random shume()，
然后通过打乱后的矢量的第一个值来获取值。
编写一个小程序来测试这个函数
8.Mat和Pat希望邀请他们的朋友来参加派对。
他们要编写一个程序完成下面的任务。让Mat 输入他朋友的姓名列表。
姓名存储在一个容器中，然后按排列后的顺序显示出来让 Pat 输入她朋友的姓名列表。
姓名存储在另一个容器中，然后按排列后的顺序显示出来创建第三个容器，将两个列表合并，
删除重复的部分，并显示这个容器的内容。*/