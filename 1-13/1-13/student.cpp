#include<iostream>
#include<cmath>
class BP {
private:
	char p[19];
	int CI;
public:
	void mingcheng( );
	void xiugai(int);
	void baogao();
	void moren();
};
void BP::mingcheng()
{
	char*pi = this->p;
	int i = 0;
	for ( i = 0; i < 19; i++)
	{
		std::cin.get(pi[i]);
		if (pi[i] == '\n')
			break;
	}
	pi[i] = '\0';
	this->CI = 50;
}
void BP::xiugai(int m)
{
	this->CI = m;
}
void BP::baogao()
{
	std::cout << this->p<<std::endl << this->CI<<std::endl;
}
void BP::moren()
{
	char pi[10] = "Plorga";
	for (int i = 0; i < 7; i++)
	{
		this->p[i] = pi[i];
	}
	std::cout << this->p;
}
int main()
{

	return 0;
	
}
