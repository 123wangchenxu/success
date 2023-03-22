#include<iostream>
#include"clock.h"
void Clock::showTime()
{
	std::cout << hour<<":"<<minute<<":"<<second<<std::endl;
}
void Clock::setTime(int newH, int newM, int newS)
{
	this->hour = newH;
	this->minute = newM;
	this->second = newS;
	
}
void Clock::reset()
{
	hour = 9;
	minute = 9;
	second = 9;
}
int main()
{
	Clock u;
	u.showTime();
	u.setTime(1, 2, 3);
	u.showTime();
	return 0;
}