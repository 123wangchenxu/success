#pragma once
class Clock{
private:
	int hour;
	int minute;
	int second;
protected:
	void reset();
public:
	void setTime(int newH, int newM, int newS);
	void showTime();
	Clock() {
		hour = 0; minute = 0; second = 0;
	};
};