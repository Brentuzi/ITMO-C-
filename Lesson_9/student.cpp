#include "student.h"

Time::Time()
{
hours = 0;
minutes = 0;
seconds = 0;
}
void Time::SetTime()
{
	int sum = 0;
	int in_hours, in_minutes, in_seconds;
	cin >> in_hours;
	cin >> in_minutes;
	cin >> in_seconds;
	if (in_hours < 0 || in_minutes < 0 || in_seconds < 0) {	
	throw Time::ExNotNull("error");
}
	sum = in_hours * 3600 + in_minutes * 60 + in_seconds;
	hours = sum / 3600;
	minutes = (sum % 3600) / 60;
	seconds = sum % 60;

}
Time::Time(int in_hours, int in_minutes, int in_seconds)
{
	Time::SetTime(in_hours, in_minutes, in_seconds);
}

void Time::SetTime(int in_hours, int in_minutes, int in_seconds)
{
	int sum=0;
	sum = in_hours * 3600 + in_minutes * 60 + in_seconds;
	hours = sum / 3600;
	minutes = (sum % 3600)/60;
	seconds = sum % 60;
	
}

void Time::ShowTime() const
{
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

 Time Time::AddTime(Time t1, Time t2) const
{
	Time t;
	t.hours = t1.hours + t2.hours;
	t.minutes = t1.minutes + t2.minutes;
	t.seconds = t1.seconds + t2.seconds;
	if (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}
	if (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	return t;
	
	

}