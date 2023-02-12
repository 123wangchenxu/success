#include <iostream>
#include"wine.h"
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Enter name of wine:";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years:";
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();
	const int YRS = 3;
	int y[YRS] = {1993,1995,1998};
	int b[YRS] = { 48,60,72 };
	Wine more("Gushing Grape Red",YRS,y,b);
	more.Show();
	cout << "Total bottles for" << more.Label() 
		<<" :" << more.sum() << endl;
	
	cout << "Bye\n";
	return 0;
};

	
// store label,years，give arrays yrs elementsholdinq.GetBottles();// solicit input for year,bottle countholdinq.show();// display object contents
/*1Wine类有一个sting类对象成员(参见第章)和一个Pair对象(参见本章)其中前者用于存储葡萄酒的名称，
而后者有2个valarray<int>对象(参见本章)，
这两个vaarrayin>对象分别保存了葡酒的酿造年份和该年生产的瓶数。
例如，Pair 的第1个 valarray <int>对象可能为1988、1992和1996年，
第2个valarray <int>对象可能为24、48和144瓶。Wine 最好有1个 int 成员用于存储年数。
另外一些 typedef可能有助于简化编程工作 :
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt，ArrayInt> PairArray;
这样，PairArray 表示的是类型 Pair <std:valarray<int>,std::valarray<int> >。
使用包含来实现 Wine类，并用个简单的程序对其进行测试。
Wine 类应该有一个默认构造函数以及如下构造函数
	// initialize label to l,number of years to y,
	// vintage years to yr[], bottles to bot[l
	Wine(const char* l, int y, const int yr[], const int bot[]);
// initialize label to l,number of years to y,// create array objects of length y
Wine(const char*l,int y)
Wimne类应该有一个GetBottles()方法，
它根据 Wine 对象能够存储几种年份(y)，提示用户输入年份和瓶数
方法Label()返回一个指向葡萄酒名称的引用。
sum()方法返回Pair对象中第二个valarray<int>对象中的瓶数总和。*/
