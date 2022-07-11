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
		return ab;;
	}
	double get_cb() {
		return cb ;
	}
	double get_ca() {
		return ca;
	}

	 void StoroniF()
	{
		 c00 = Dot();
		 ab = a->distanceTo(*b);
		 cb = b->distanceTo(c00);
		 ca = a->distanceTo(c00);
	}
	 void Storoni()
	 {
		 ab = a->distanceTo(*b);
		 cb = b->distanceTo(*c);
		 ca = a->distanceTo(*c);
	 }
	Triangle(Dot* a, Dot* b, Dot* c) : a{ a }, b{ b }, c{ c }
	{
		Storoni();

	}
	Triangle(Dot* a, Dot* b) : a{ a }, b{ b } 
	{
		StoroniF();
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
	Triangle triangleO(&a, &b);
	cout << "AB= " << triangleO.get_ab() << " cb = " << triangleO.get_cb() << " ca = " << triangleO.get_ca() << endl;
	cout << "perimetr " << triangleO.Perimeter() << endl;
	cout << "S " << triangleO.TriangleS() << endl;

	cout << "--------------------\n";
	Triangle triangle(&a, &b, &c);
	cout << "AB= " << triangle.get_ab() << " cb = " << triangle.get_cb() << " ca = " << triangle.get_ca() << endl;
	cout << "perimetr " << triangle.Perimeter() << endl;
	cout << "S " << triangle.TriangleS() << endl;
}

