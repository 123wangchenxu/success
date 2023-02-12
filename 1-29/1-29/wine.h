#pragma once
#include<valarray>
#include<string>
template<typename T1,typename T2>
class Pair
{
private:
	std::valarray<int>ai;
	std::valarray<int>bi;
public:
	void setarray(int n)
	{
		ai.resize(n);
		bi.resize(n);
	}
	void fuzhi(int y, const int yr[], const int bot[])
	{
		ai.resize(y);
		bi.resize(y);
		for (int i = 0; i < y; i++)
		{
			ai[i] = yr[i];
			bi[i] = bot[i];
		}
	}
	int sum()
	{
		return bi.sum();
	}
	void GetBottles(int n)
	{
		std::cout << "请输入瓶子的数目";
		for (int i = 0; i < n; i++)
		{
			std::cin >> bi[i];
		}
	}
	void show(int n) {
		for (int i = 0; i < n; i++)
		{
			std::cout << ai[i];
			std::cout << bi[i];
		}
	}
	
};
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> Pairarray;
class Wine :private Pairarray
{
private:
	std::string name;
	int number=0;
public:
	
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles() {
		this->Pairarray::GetBottles(number);
	};
	std::string& Label() { return this->name; }
	int sum() {
		return this->Pairarray::sum();
	}
	void Show() {
		this->Pairarray::show(number);
		std::cout << std::endl;
		std::cout << name << std::endl;
		std::cout << number << std::endl;
	}
};
Wine::Wine(const char* l, int y) :name(l), number(y)
{
	this->Pairarray::setarray(y);
	
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
	this->number = y;
	this->Pairarray::fuzhi(y, yr, bot);
	this->name = l;
	
}