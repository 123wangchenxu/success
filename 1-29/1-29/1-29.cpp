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

	
// store label,years��give arrays yrs elementsholdinq.GetBottles();// solicit input for year,bottle countholdinq.show();// display object contents
/*1Wine����һ��sting������Ա(�μ�����)��һ��Pair����(�μ�����)����ǰ�����ڴ洢���ѾƵ����ƣ�
��������2��valarray<int>����(�μ�����)��
������vaarrayin>����ֱ𱣴����ϾƵ�������ݺ͸���������ƿ����
���磬Pair �ĵ�1�� valarray <int>�������Ϊ1988��1992��1996�꣬
��2��valarray <int>�������Ϊ24��48��144ƿ��Wine �����1�� int ��Ա���ڴ洢������
����һЩ typedef���������ڼ򻯱�̹��� :
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt��ArrayInt> PairArray;
������PairArray ��ʾ�������� Pair <std:valarray<int>,std::valarray<int> >��
ʹ�ð�����ʵ�� Wine�࣬���ø��򵥵ĳ��������в��ԡ�
Wine ��Ӧ����һ��Ĭ�Ϲ��캯���Լ����¹��캯��
	// initialize label to l,number of years to y,
	// vintage years to yr[], bottles to bot[l
	Wine(const char* l, int y, const int yr[], const int bot[]);
// initialize label to l,number of years to y,// create array objects of length y
Wine(const char*l,int y)
Wimne��Ӧ����һ��GetBottles()������
������ Wine �����ܹ��洢�������(y)����ʾ�û�������ݺ�ƿ��
����Label()����һ��ָ�����Ѿ����Ƶ����á�
sum()��������Pair�����еڶ���valarray<int>�����е�ƿ���ܺ͡�*/
