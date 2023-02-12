#pragma once
#include <iostream>
#include <string>
class abstr_emp {
private:
	std::string fname;
	std::string lname;
	std::string job;
public:
	abstr_emp() {
		fname = "wang";
		lname = "chen";
		job = "xu";
	}
	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j) {
		fname = fn;
		lname = ln;
		job = j;
	};
	abstr_emp(const abstr_emp& e) {
		fname = e.fname;
		lname =e.lname;
		job = e.job;

	}
	virtual void ShowAll() const {
		std::cout << fname;
		std::cout << lname;
		std::cout << job;
	}
	void SetAll() {
		std::cout << "�����룺" << std::endl;
		std::cin >> fname;
		std::cin>> lname;
		std::cin>> job;
	}
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e) {
		os << e.fname << std::endl;
		os << e.lname << std::endl;
		os << e.job << std::endl;
		return os;
	};
	virtual ~abstr_emp() = 0 {};
};
class employee :public abstr_emp
{
public:
	employee();
	employee(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void ShowAl1() const { abstr_emp::ShowAll(); };
	virtual void SetAll() { abstr_emp::SetAll(); };
	~employee() {};
};
employee::employee() :abstr_emp() {};
employee::employee(const std::string& fn, const std::string& ln, const std::string& j) :abstr_emp(fn, ln, j) {};
class manager : virtual public abstr_emp
{
private:
	int inchargeof=0;
protected:
	int InChargeof() const { return inchargeof; };
public:
	manager() :abstr_emp() { inchargeof = 3; };
	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0) :abstr_emp(fn, ln, j), inchargeof(ico) {};
	manager(const abstr_emp& e, int ico):abstr_emp(e),inchargeof(ico){};
	manager(const manager& m) :abstr_emp(m), inchargeof(m.inchargeof) {};
	manager(int m) { inchargeof = m; }
	 void Data1()const { std::cout << inchargeof; };
	 void Data2(){ std::cin >> inchargeof; };
	virtual void ShowAll()const 
	{ 
	abstr_emp::ShowAll();
	Data1();
	};
	virtual void SetAll() {
		abstr_emp::SetAll();
		Data2();
	}
	~manager() {};
};

class fink :virtual public abstr_emp {
private:
std::string reportsto; 
protected:
const std::string ReportsTo() const { return reportsto; }
std::string& ReportsTo() { return reportsto; }
public:
	fink() :abstr_emp(), reportsto("wangchenxu") {};
	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) :abstr_emp(fn, ln, j), reportsto(rpo) {};
	fink(const abstr_emp& e, const std::string& rpo) :abstr_emp(e), reportsto(rpo) {};
	fink(const fink& e) :abstr_emp(e), reportsto(e.reportsto) {};
	fink(const std::string& a) { reportsto = a; }
	void Data1()const { std::cout << reportsto; };
	void Data2() { std::cin >> reportsto; };
	virtual void ShowAll()const {
		abstr_emp::ShowAll();
		Data1();
	}
	virtual void SetAll() {
		abstr_emp::SetAll();
		Data2();
	}
	~fink() {};
};
class highfink : public manager, public fink {
public:
	highfink() :abstr_emp(), fink(), manager() {};
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo,
		int ico) :abstr_emp(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico) {};
	highfink(const abstr_emp& e, const std::string& rpo, int ico) :abstr_emp(e), fink(rpo), manager(ico) {};
	highfink(const fink& f, int ico) :fink(f), manager(ico) {};
	highfink(const manager& m, const std::string& rpo) :manager(m), fink(rpo) {};
	highfink(const highfink& h):abstr_emp(h),fink(h),manager(h) {};
	virtual void ShowAll() const {
		fink::ShowAll();
		manager::Data1();
	};
	virtual void SetAll() {
		fink::SetAll();
		manager::Data2();
	}
	~highfink() {};
};
/*ע�⣬�����νṹʹ���˴������� MI��
����Ҫ�μ�������������ڹ��캯����ʼ���б���������
����Ҫע����ǣ���Щ����������Ϊ�����ġ�
����Լ�һЩ highfink �����Ĵ���
(���磬���highfink::ShowAll()ֻ�ǵ���fink::ShowAl()�� manager : ShwAll()��
	����������abstr emp : ShowAlI()����)��
	���ṩ�෽����ʵ�֣�����һ�������ж���Щ����в��ԡ�������һ��С�Ͳ��Գ���:*/