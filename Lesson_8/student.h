#pragma once
#include <iostream>
#include <string>

using namespace std;
class Time
{
public:
	Time();
	Time(int, int, int);
	void SetTime(int, int, int);
	void ShowTime() const;
	 Time AddTime(Time, Time)const;
	
	
	private:
	int hours;
	int minutes;
	int seconds;






};
