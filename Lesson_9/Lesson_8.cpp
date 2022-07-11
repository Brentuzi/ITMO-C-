

#include <iostream>
#include "student.h"
class Triangle {
public:
	Triangle(double a1, double b1, double c1) : a{ a1 }, b{ b1 }, c{ c1 }
	{
		if (c >= a + b or a >= b + c or b >= a + c)
			throw Triangle::ExNotTriangle("Eror");
	}
	double TriangleArea() {
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	class ExNotTriangle {
	public:
		string nameObject;
		ExNotTriangle(string nameObj) :nameObject(nameObj) {}
	};
private:
	double a;
	double b;
	double c;
};

int main()
{
	Time const t1 = Time(7, 30, 60);
	Time const t2 = Time(3, 20, 60);	
	Time t3 = t3.AddTime(t1, t2);
	Time t4 = Time();
	t1.ShowTime();
	t3.ShowTime();
	t4.ShowTime();	double a, b, c;
	cin >> a >> b >> c;
	try {
		Triangle triangle(a, b, c);
		cout << "S triangle : " << triangle.TriangleArea() << endl;
	}
	catch (Triangle::ExNotTriangle)
	{
		cout << "\nError " ;
	}	return 0;	system("pause");}