// Lesson_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "dot.h"
#include <math.h>
#include <string>
using namespace std;

class Triangle {
public:
	
	double get_len(Dot *x,Dot *x1)
	{
		return x->distanceTo(*x1);
	}
	
	Triangle(Dot* a, Dot* b, Dot* c) {}
	Triangle(Dot* a, Dot* b) {}
	
	double Perimeter(Dot* a, Dot* b, Dot* c)  {
		double asd;
		asd = get_len(a, b) + get_len(b, c) + get_len(a, c);
		return asd;
	}

	double TriangleS(Dot* a, Dot* b, Dot* c) {
		double p = (get_len(a, b) + get_len(b, c) + get_len(a, c)) / 2;
		return sqrt(p * (p - get_len(a, b)) * (p - get_len(b, c)) * (p - get_len(a, c)));
	}	
private:
	Dot* a;
	Dot* b;
	Dot* c;
	Dot c00;
	
};
int main()
{
	cout << "input \n";
	double x1, x2, y1, y2, z1, z2;
	cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
	Dot a(x1, x2);
	Dot b(y1, y2);
	Dot c(z1, z2);
		cout << "--------------------\n";
	Triangle triangle(&a, &b, &c);

	cout << "Perimetr :"<<  triangle.Perimeter(&a, &b, &c)<< endl ;
	cout << "S trangle :" << triangle.TriangleS(&a, &b, &c)<< endl;
	cout << " AB= " << triangle.get_len(&a, &b) << "  CB:" << triangle.get_len(&c, &b) << "  AC:" << triangle.get_len(&a, &c) << endl;
	
}

