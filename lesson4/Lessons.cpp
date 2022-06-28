

#include <iostream>

#include <vector>;
#include <iostream>;
#include <ctime>;
#include <string>;
#include <cmath>;
#include <typeinfo>
using namespace std;


int Myroot(double a, double b, double c, double &x1, double &x2) {//Задание 1. Вычисление корней квадратного уравнения
	double d = pow(b,2) - 4 * a * c;
	
	if (d == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		return 0;
	}
    else if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		return 1;
	}
	 else
	return -1;

}


bool Input(int& a1, int& b1) {//Задание 2. Реализация ввода данных
	int a, b;
	char p1, p2;
	cout << "введите числа а и b: " << endl;
	//cin >> a >> b;
	if (!(cin>>a) || !(cin >> b))
	{
	return false;
	}
	else {	
	a1 = a;
	b1 = b;
	return true;
	}
}
int main()
{
	
		setlocale(LC_ALL, "Rus");
		srand(time(nullptr));
			
		double a, b, c, x1 = 0, x2 = 0;
		cout << "Введите коэффициенты квадратного уравнения a b c : ";
		cin >> a >> b >> c;
		switch (Myroot(a, b, c, x1, x2))
		{
		case(1):
			cout << "Квадратное уравнение " << a << "x^2 + " << b << "x + " << c << " = 0 \n";
			cout << "   Имеет два корня:\n";
			cout << "x1=" << x1 << "     " << " x2=" << x2 << endl;
			
			break;
		case(0):
			cout << "Квадратное уравнение " << a << "x^2 + " << b << "x + " << c << " = 0 \n";
			cout << "Имеет один корень:\n";
			cout << "x1=" << x1 << endl;
			break;
		case(-1):
			cout << "Квадратное уравнение " << a << "x^2 + " << b << "x + " << c << " = 0\n";
			cout << "Не имеет корней дискриминант < 0\n";
			break;
	    }
		
		int a1, b1;
		if (Input(a1, b1) == false) // if(!Input(a,b))
		{
			cerr << "error";
			return 1;
		}
		int s = a1 + b1;
		cout << endl << s << " сумма а+b";


	system("pause");
			return 0;
}