#include<iostream>
#include<fstream>
using namespace std;
void dayin(string*&);
int main()
{
	string a;
	string* p = &a;
	string*& q = p;
	cout << "Enter a string(q to quit):";
	cin >> a;
	if (a == "q")
		return 0;
	else
	{
		
		while (a!="q")
		{
			dayin(q);
			cout << "Next string(q to quit)";
			cin >> a;
			
		}
	}
	return 0;
}
void dayin(string*& p)
{
	for (int i = 0; i < (*p).size(); i++)
		(*p)[i] = toupper((*p)[i]);
	cout << *p<<endl;
}



