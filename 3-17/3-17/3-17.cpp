#include<iostream>
#include<vector>
#include<iterator>
int main()
{
	int num;
	std::vector<int>c(5);
	std::vector<int>::iterator qi;
	
	for (int i = 0; i < 5; i++)
	{
		c[i] = 2;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cin >> num;
		c.push_back(num);
	}
	for (qi = c.begin(); qi != c.end(); qi++)
	{
		std::cout << *qi;
	}
	std::cout <<std::endl;
	for (std::vector<int>::const_reverse_iterator qi = c.rbegin(); qi != c.rend(); qi++)
	{
		std::cout << *qi;
	}
	std::cout << std::endl;
	std::vector<int> q(10);
	std::copy(c.begin(), c.end(), q.begin());
	for (qi = q.begin(); qi != q.end(); qi++)
	{
		std::cout << *qi;
	}
	std::cout << std::endl;
	std::ostream_iterator<int, char>outiter(std::cout, ", ");
	std::copy(c.begin(), c.end(), outiter);
	std::cout << std::endl;
	*outiter++ = 'a';
	std::copy(c.begin(), c.end(), outiter);
	std::cout << std::endl;
	std::cout << "hehe";
	return 0;
}