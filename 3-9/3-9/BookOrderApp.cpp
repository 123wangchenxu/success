#include"BookOrder.h"
#include<iostream>
Bookorder::Bookorder()
{
	account = "B22080209";
	name = "王晨旭";
	date[0] = 2023;
	date[1] = 3;
	date[2] = 16;
	booknumber = new int[1];
	salenumber = new int[1];
	bookname = new std::string[1];
	*booknumber = 3;
	*bookname = "呐喊";
	*salenumber = 999;
	state = 'T';
	count = 1;
}
void Bookorder::Creatsale()
{
	state = 'T';
	Printorder(count);
}
void Bookorder::Deletesale()
{
	state = 'F';
	count = 0;
	Printorder(count);
}
Bookorder& Bookorder::Addorder()
{
	int i;
	std::cout << "请输入要添加书的数目";
	std::cin >> i;
	getchar();
	bookname = new std::string[1 + i];
	booknumber = new int[1 + i];
    salenumber = new int[1 + i];
	*booknumber = 3;
	*bookname = "呐喊";
	*salenumber = 999;
	std::cout << "请输入要添加的内容";
	for (int j = 1; j < i + 1; j++)
	{
		std::cin >> bookname[j];
		std::cin >> booknumber[j];
		std::cin >> salenumber[j];
	}
	count = 1 + i;
	return *this;

}
Bookorder& Bookorder::Alterorder()
{
	int number;
	int num;
	std::cout << "请输入你要修改的内容：(使用菜单的数字代替)";
	std::cout << "1、用户名" << std::endl;
	std::cout << "2、姓名" << std::endl;
	std::cout << "3、日期" << std::endl;
	std::cout << "4、书号" << std::endl;
	std::cout << "5、书名" << std::endl;
	std::cout << "6、销量" << std::endl;
	std::cin >> number;
	switch (number)
	{
	case 1:
		std::cin >> account;
		break;
	case 2:
		std::cin >> name;
		break;
	case 3:
		for (int i = 0; i < 3; i++)
		{
			std::cin >> date[i];
		}
		break;
	case 4:
		std::cout << "请输入是哪一本书";
		std::cin >> num;
		std::cin >> booknumber[num-1];
		break;
	case 5:
		std::cout << "请输入是哪一本书";
		std::cin >> num;
		std::cin >> bookname[num-1];
		break;
	case 6:
		std::cout << "请输入是哪一本书";
		std::cin >> num;
		std::cin >> salenumber[num-1];
		break;
	}
	return *this;
}
void Bookorder::Printorder(int n)
{
	using namespace std;
	if (state =='T')
	{
		cout << account << endl;
		cout << name << endl;
		std::cout << date[0] << "-" << date[1] << "-" << date[2]<<std::endl;
		for (int i = 0; i < n; i++)
		{
			cout << booknumber[i] << endl;
			cout << bookname[i] << endl;
			cout << salenumber[i] << endl;
		}
	}
	else
		cout << "The order is cancelled!";
}
void Bookorder::Readorder(int n)
{
	int i, j;
	Bookorder temp;
	std::cout << account <<std:: endl;
	std::cout << name << std::endl;
	std::cout << date[0] << "-" << date[1] << "-" << date[2] << std::endl;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1- i; j++)
		{
			if (booknumber[j] > booknumber[j + 1])
			{
				temp.bookname[0] = bookname[j];
				bookname[j] = bookname[j + 1];
				bookname[j + 1] = temp.bookname[0];
				temp.booknumber[0] = booknumber[j];
				booknumber[j] = booknumber[j + 1];
				booknumber[j + 1] = temp.booknumber[0];
				temp.salenumber[0] = salenumber[j];
				salenumber[j] = salenumber[j + 1];
				salenumber[j + 1] = temp.salenumber[0];
			}
		}
	}

}

int main()
{
	Bookorder a;
	a.Creatsale();
	a.Addorder();
	a.Printorder(a.count);
	a.Alterorder();
	a.Printorder(a.count);//类的简单实现
	a.Readorder(a.count);
	a.Printorder(a.count);
	a.Deletesale();
	return 0;
}