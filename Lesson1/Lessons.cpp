

#include <iostream>
using namespace std;

//Задание 1. Расчет площади пятугольнка
double Sfive(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double x5, double y5)
{
	cout << "Плошадь пятиугольника: " << 0.5*abs(x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1 - x2*y1 - x3*y2 - x4*y3 - x5*y4 - x1*y5);
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double x1,y1,x2,y2,x3,y3,x4,y4,x5, y5;

	
	
	//Задание 1. Расчет площади пятугольнка
	cout << "Введите координаты вершин пятиугольника" << endl;
	cout << " x1 y1: ";
	cin >> x1 >> y1;
	cout << "\n x2 y2: ";
	cin >> x2 >> y2;
	cout << "\n x3 y3: ";
	cin >> x3 >> y3;
	cout << "\n x4 y4: ";
	cin >> x4 >> y4;
	cout << "\n x5 y5: ";
	cin >> x5 >> y5;
	Sfive(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
	//
		

	cout << "\n---------------------\n";// контрольное задание стр 16 Определение високосного года
	int god;
	cout << "Введите год:";
	cin >> god;
	if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0)
	{
		cout << "\nYES";
	}
	else
	{
		cout << "\nNO";
	}






system("pause");
	return 0;
	
}
