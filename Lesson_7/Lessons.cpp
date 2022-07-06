#include <iostream>
#include <vector>
#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include <typeinfo>
#include <fstream>
#include <tuple>
using namespace std;


struct Time {//Задание 1. Структура Time
	int hours, minutes, seconds;
	void InputTime()
	{
		cout << "Введите часы:";
		cin >> hours;
		cout << "Введите минуты:";
		cin >> minutes;
		cout << "Введите секунды:";
		cin >> seconds;
	}

	void ShowT() {
		cout << "Часы:" << hours << " Минуты: " << minutes << " Секунды : " << seconds << endl;

	}
	int ToSec() {
		return hours * 3600 + minutes * 60 + seconds;
	}
	void Plus(Time time) {
		int addInSeconds = ToSec() + time.ToSec();
		hours = addInSeconds / 3600;
		minutes = (addInSeconds % 3600) / 60;
		seconds = addInSeconds % 60;
	}
	void Min(Time time) {
		int minusInSeconds = abs(ToSec() - time.ToSec());
		hours = minusInSeconds / 3600;
		minutes = (minusInSeconds % 3600) / 60;
		seconds = minusInSeconds % 60;
	}
};
void Vremy() {//Задание 1. Структура Time
	
	Time time1;
	Time time2;
	time1.InputTime();
	time1.ShowT();	
	cout << time1.ToSec() << endl;
	time2.InputTime();
	time2.ShowT();
	time1.Plus(time2);
	time1.ShowT();
	time1.Min(time2);	
	time1.ShowT();
}


struct Yrav {//Задание 2. Решение квадратного уравнения
	double x1 = 0, x2 = 0;
};

Yrav Corni(double a, double b, double c) {//Задание 2. Решение квадратного уравнения
	Yrav myYrav;
	double D = b * b - 4 * a * c;	
	if (D == 0) {
		myYrav.x1 = (-b) / (2 * a);
		myYrav.x2 = myYrav.x1;
	}
	if (D > 0) {
		myYrav.x1 = ((-b) + sqrt(D)) / (2 * a);
		myYrav.x2 = ((-b) - sqrt(D)) / (2 * a);
	}
	return myYrav;
}

void Corni() {//Задание 2. Решение квадратного уравнения
	int a, b, c;
	cout << "Введите коэффициенты квадратного уравнения a b c : ";
	cin >> a >> b >> c;
	Yrav r1 = Corni(a, b, c);
	 cout << "x1 = " << r1.x1 << " x2 = " << r1.x2 <<  endl;
}
//Задание 3. Решение квадратного уравнения кортежи
using Tuple = tuple <double, double, int>;
Tuple Myroot(double a, double b, double c) {
	double x1 = 0, x2 = 0;
	int flag = -1;
	double D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		flag = 1;
	}
	if (D == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		flag = 0;
	}
	return make_tuple(x1, x2, flag);
}

void CorniTyple() {
	int a, b, c;
	cout << "Введите коэффициенты квадратного уравнения a b c : ";
	cin >> a >> b >> c;
	Tuple r1 = Myroot(a,b,c);	
	switch (get<2>(r1))
	{
	case(1):
		cout << "Квадратное уравнение " << a << "x^2 + " << b << "x + " << c << " = 0 \n";
		cout << "   Имеет два корня:\n";
		cout << "x1=" << get<0>(r1) << "     " << " x2=" << get<1>(r1) << endl;

		break;
	case(0):
		cout << "Квадратное уравнение " << a << "x^2 + " << b << "x + " << c << " = 0 \n";
		cout << "Имеет один корень:\n";
		cout << "x1=" << get<0>(r1) << endl;
		break;
	case(-1):
		cout << "Квадратное уравнение " << a << "x^2 + " << b << "x + " << c << " = 0\n";
		cout << "Не имеет корней дискриминант < 0\n";
		break;
	}
	
}

int main()
{
	
		setlocale(LC_ALL, "Rus");

		//Vremy();
		//Corni();
		CorniTyple();
		system("pause");
			return 0;
}