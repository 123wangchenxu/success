#pragma once
#include<string>
class Bookorder {
private://��������һ�㶨��Ϊ˽��
	std::string account;//ʹ��string�ඨ���û��˺�
	std::string name;//ʹ��string�ඨ���û�����
	int *booknumber;//��Ŷ�Ӧ���Σ����ڶ���ֻ����һ���飬���Բ���ָ���������ʽ
	int date[3];//ʹ���������ֶ������ڣ�������
	std::string *bookname;//ʹ��string�ඨ�����������ڶ���ֻ����һ���飬���Բ���ָ���������ʽ
	int *salenumber;//����������Ӧ����,���ڶ���ֻ����һ���飬���Բ���ָ���������ʽ
	char state;//��������״̬��ʹ�á�T��or��F��
public:
	int count = 1;//��������ĺ�����Ҫ���ã������������Ϊ���г�Ա
	Bookorder();//��Ϊ���캯������
	void Creatsale();//��������
	void Deletesale();//���ٶ���
	Bookorder& Addorder();//���ͼ�飬��Ҫͨ����̬��������ʵ��new
	Bookorder& Alterorder();//�޸ľ������ݣ�ͨ��cin��ʵ��
	void Printorder(int n);//��֤����Ƿ���ȷ
	void Readorder(int n);//ʵ�ִ�С������ŵ����α���
	~Bookorder() {
		delete []booknumber;
		delete []bookname;
		delete[] salenumber;
	};//��̬������Ҫ�ֶ��ͷ��ڴ棬�����Ҫ��������
	
};
/*BookOrderApp.cpp:�������̨Ӧ�ó������ڵ�//ͼ�鶩������ϵͳ
/ ������Ϣ : �˿��ʺš��˿��������������ڡ�ͼ����š��������������� / ���ܰ��� :
	//1.�����Ĵ����ͳ���
	/ 2.����������Ӻ��޸�
	/ 3����ͼ��ı���
#include"stdafx.h"
#include"BookOrder.h"
	tinclude <iostream>
	sing namespace std*/
