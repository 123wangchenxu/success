#pragma once
#include<string>
class Bookorder {
private://数据类型一般定义为私有
	std::string account;//使用string类定义用户账号
	std::string name;//使用string类定义用户名字
	int *booknumber;//书号对应整形，由于对象不只购买一本书，所以采用指针数组的形式
	int date[3];//使用三个数字定义日期：年月日
	std::string *bookname;//使用string类定义书名，由于对象不只购买一本书，所以采用指针数组的形式
	int *salenumber;//销售数量对应整形,由于对象不只购买一本书，所以采用指针数组的形式
	char state;//描述订单状态，使用‘T’or‘F’
public:
	int count = 1;//由于下面的函数需要调用，因此允许其作为公有成员
	Bookorder();//作为构造函数出现
	void Creatsale();//创建订单
	void Deletesale();//销毁订单
	Bookorder& Addorder();//添加图书，主要通过动态创建数组实现new
	Bookorder& Alterorder();//修改具体内容，通过cin来实现
	void Printorder(int n);//验证结果是否正确
	void Readorder(int n);//实现从小到大书号的依次遍历
	~Bookorder() {
		delete []booknumber;
		delete []bookname;
		delete[] salenumber;
	};//动态数组需要手动释放内存，因此需要析构函数
	
};
/*BookOrderApp.cpp:定义控制台应用程序的入口点//图书订单管理系统
/ 订单信息 : 顾客帐号、顾客姓名、订书日期、图书书号、书名、购买数量 / 功能包括 :
	//1.订单的创建和撤销
	/ 2.订单内容添加和修改
	/ 3订单图书的遍历
#include"stdafx.h"
#include"BookOrder.h"
	tinclude <iostream>
	sing namespace std*/
