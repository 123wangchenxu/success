#include<iostream>
class fushu {
private:
	float a=0;
	float b=0;
public:
	fushu(float a,float b);
	fushu& operator+(fushu&);
    fushu& operator-(fushu&);
	friend fushu& operator*(double, fushu&);
    fushu& operator*(fushu&);
	friend std::ostream& operator<<(std::ostream& os, fushu& t);
	friend std::istream& operator>>(std::istream& is, fushu& t);
	friend fushu& operator~(fushu&);
	
	
};
fushu::fushu(float a, float b)
{
	this->a = a;
	this->b = b;
	
}
fushu q(0, 0);
fushu& fushu::operator+(fushu& t)
{
	
	q.a=t.a+this->a;
    q.b=t.b+this->b;
	return q;
}
fushu& fushu::operator-(fushu& t)
{
	q.a=-t.a +this->a;
	q.b=-t.b +this->b;
	return q;
}
fushu& fushu::operator*(fushu& t)
{

	q.a = t.a * this->a - t.b * this->b;
	q.b = t.a * this->b + t.b * this->a;
	return q;
}
fushu& operator*(double m, fushu&t)
{
	t.a *= m;
	t.b *= m;
	return t;
}
fushu& operator~(fushu&t)
{

	t.b *= -1;
	return t;
}
std::ostream& operator<<(std::ostream& os, fushu& t)
{
	
	q = t;
	if (t.b > 0)
		os << q.a<<"+"<<q.b << "i";
	else if (t.b == 0)
		os << t.a;
	else
		os << t.a << t.b << "i";
	return os;
}
std::istream& operator>>(std::istream& is, fushu& t)
{
	std::cout << "请输入实数部分:";
	is >> t.a;
	std::cout << "请输入虚数部分:";
	is >> t.b;
	return is;

}
int main()
{
	fushu a(2,3);
	fushu b(1, 2);
	std::cin >> a;
	std::cout << a;
	std::cin >> b;
	std::cout << b;
	std::cout << (a + b);
	std::cout << (a - b);
	std::cout << (a * b);
	std::cout << ~a;

	
	return 0;
}