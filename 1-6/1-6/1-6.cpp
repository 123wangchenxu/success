#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	cout << '$';
	cout.put('$');
	cout << '\n';
	cout << "\n";
	bool ci = true;
	double q = 3.30000000;
	cout << q;
	cout << ci;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout << q;
	char name[40];
	char name2[40];
	char name3[40];
	cin.getline(name, 12);
	cin.get(name2, 40).get();
	cin.get(name3, 40);
	cout << name2;
	cout << endl;
	cout << name;
	cout << endl;
	cout << name3;
	return 0;
}
