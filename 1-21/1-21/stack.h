#pragma once
#ifndef STACK_H
#define STACK_H
typedef unsigned long Item;
class Stack
{
private:
	enum { MAX = 10 };
	Item* pitems;
	int size;
	int top;
public:
	Stack(int n=MAX); 
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	Stack& operator=(const Stack& st);
	friend std::ostream& operator<<(std::ostream& os, Stack&);

	// push() returns false if stack already is full,true otherwisebool push(const Item & item); //add item to stack// pop() returns false if stack already is empty, true otherwisebool pop(Item & item);// pop top into itemStack & operator=(const Stack & st);
};
Stack::Stack(int n )
{
	*this->pitems = 10L;
	int size = n;
	int top = n;
}
Stack::Stack(const Stack& st)
{
	st.pitems=
}
std::ostream& operator<<(std::ostream& os, Stack&t)
{
	os << t.size << t.top;
		return os;
}



#endif // !STACK_H


