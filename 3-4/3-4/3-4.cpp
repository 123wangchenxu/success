#include<iostream>
#include<exception>
int main()
{
	int q = 9;
	volatile int* p =&q;
	int* m = const_cast<int*>(p);
	int c = 5;
	m = &c;
	std::cout << *m;
	
	return 0;
}
