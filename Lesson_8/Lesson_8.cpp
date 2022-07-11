

#include <iostream>
#include "student.h"
int main()
{
	Time const t1 = Time(7, 30, 60);
	Time const t2 = Time(3, 31, 60);
	Time t3 = t3.AddTime(t1, t2);
	Time t4 = Time();
	t1.ShowTime();
	t3.ShowTime();
	t4.ShowTime();	return 0;	system("pause");}