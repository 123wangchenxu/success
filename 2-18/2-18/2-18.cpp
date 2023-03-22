#include<iostream>
class Q;
class T {
public:
	int a = 2;
	int b = 3;
	T() {
		a = 2;
		b = 3;
	}
	void hehe() {
		if (a == 2)
			throw Q;
	}
};
class Q :public T {
public:
	char c = 'a';
	Q() :T(), c('b') {};
};

int main()
{
	
	try {
		T a;
		a.hehe();
	}
	catch (T a) {
		std::cout << a.a << a.b;
	}
}