#pragma once
class Cd {
private:
	char* performers;
	char* label;
	int selections;
	double playtime;
public:
    Cd(const char* s1,const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	virtual Cd& operator=(const Cd& d);

};
class Classic :public Cd
{
private:
	char *a;
public:
	Classic(const char* s1, const char* s2,const char *s3, int n, double x);
	Classic();
	void Report() const;
	Classic& operator=(const Classic& d);
	~Classic();
};
Cd::Cd(const char* s1,const char* s2, int n, double x)
{
	performers = new char[50];
	label = new char[20];
	for (int i = 0; i <= strlen(s1); i++)
	{
		performers[i] = s1[i];
	}
	for (int i = 0; i <= strlen(s2); i++)
	{
		label[i] = s2[i];
	}
	
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d)
{
	performers = new char[50];
	label = new char[20];
	for (int i = 0; i <= strlen(d.performers); i++)
	{
		performers[i] = d.performers[i];
	}
	for (int i = 0; i <= strlen(d.label); i++)
	{
		label[i] = d.label[i];
	}
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[50];
	label = new char[20];
	char a[6] = "hello";
	for (int i = 0; i <= strlen(a); i++)
	{
		performers[i] = a[i];
	}
	for (int i = 0; i <= strlen(a); i++)
	{
		label[i] = a[i];
	}
	selections = 2;
	playtime = 3.0;
}
Cd&Cd::operator=(const Cd& d)
{
	for (int i = 0; i <= strlen(d.performers); i++)
	{
		this->performers[i] = d.performers[i];
	}
	for (int i = 0; i <= strlen(d.label); i++)
	{
		this->label[i] = d.label[i];
	}
	this->selections = d.selections;
	this->playtime = d.playtime;
	return *this;
}
void Cd::Report() const
{
	std::cout << "cd,hehe" << std::endl;
}
Cd::~Cd()
{
	delete[]performers;
	delete[]label;
}
Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) :Cd(s1, s2, n, x)
{
	a = new char[20];
	for (int i = 0; i <= strlen(s3); i++)
	{
		a[i] = s3[i];
	}
}
Classic::Classic():Cd()
{
	char s3[6] = "hello";
	a = new char[20];
	for (int i = 0; i <= strlen(s3); i++)
	{
		a[i] = s3[i];
	}
}
void Classic::Report() const
{
	std::cout << "hehe,classic" << std::endl;
}
Classic&Classic::operator=(const Classic& d)
{
	(Cd&)*this = (const Cd&)d;
	return *this;
}
Classic::~Classic()
{
	delete[]a;
}
