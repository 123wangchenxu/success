#include<iostream>
class Q {
public:
	char a;


};
class T  {
public:
	friend Q;
	void hehe(Q t);
};
void T:: hehe(Q t) {
	
};
int main()
{
	T a;
	Q t;
	a.hehe(t);
	return 0;
}