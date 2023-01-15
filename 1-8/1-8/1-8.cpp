#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
#include<array>
using namespace std;
int jiaohuan(int, int);
int main()
{
	int x = 1;
	int y = 2;
	jiaohuan(x, y);
	cout << x << y;
	return 0;
}
int jiaohuan(int a, int b)
{
	int temp = 0;
	temp=a;
	a = b;
	b = temp;
	return 0;

}