#ifndef _LIST_H_
#define _LIST_H_

class List {
public:
	void cunchu(int);
	void chuangjian();
	void tianjia();
	int panduan();
	int man();
	void visit(void (*pf)(T&));
	List(T a[10] = { 0 });
private:
	T a[10];

};
#endif