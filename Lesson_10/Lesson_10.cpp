// Lesson_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "dot.h"
#include <math.h>
#include <string>
using namespace std;

class Triangle {
public:
	double get_ab() {
		return ab;
	}
	double get_cb() {
		return cb;
	}
	double get_ca() {
		return ca;
	}
	Triangle(Dot* a, Dot* b) : a{ a }, b{ b } 
	{
		c00 = Dot();
	
		ab = a->distanceTo(*b);
		cb = b->distanceTo(c00);
		ca = a->distanceTo(c00);
		

	}
	Triangle(Dot* a, Dot* b, Dot* c) : a{ a }, b{ b }, c{ c }
	{
		ab = a->distanceTo(*b);
		cb = b->distanceTo(*c);
		ca = a->distanceTo(*c);		
	}
	double Perimeter() {
		return ab + cb + ca;
	}

	double TriangleS() {
		double p = Perimeter() / 2;
		return sqrt(p * (p - ab) * (p - cb) * (p - ca));
	}	
private:
	Dot* a;
	Dot* b;
	Dot* c;
	Dot c00;
	double ab;
	double cb;
	double ca;
};
int main()
{
	cout << "input \n";
	double x1, x2, y1, y2, z1, z2;
	cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
	Dot a(x1, x2);
	Dot b(y1, y2);
	Dot c(z1, z2);
	Triangle trStartZero(&a, &b);
	cout << "AB= " << trStartZero.get_ab() << " cb = " << trStartZero.get_cb() << " ca = " << trStartZero.get_ca() << endl;
	cout << "perimetr " << trStartZero.Perimeter() << endl;
	cout << "S " << trStartZero.TriangleS() << endl;
	cout << "--------------------\n";
	Triangle triangle(&a, &b, &c);
	cout << "AB= " << triangle.get_ab() << " cb = " << triangle.get_cb() << " ca = " << triangle.get_ca() << endl;
	cout << "perimetr " << triangle.Perimeter() << endl;
	cout << "S " << triangle.TriangleS() << endl;
}

