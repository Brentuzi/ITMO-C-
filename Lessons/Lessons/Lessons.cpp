

#include <iostream>

#include <vector>;
#include <iostream>;
#include <ctime>;
#include <string>;
#include <cmath>;
using namespace std;


double Dlina(int x1, int y1, int x2, int y2)//Задание 1. Расчет площади сложной фигуры
{
	double l=0;
	l = sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2));
	cout << l;
	return l;

}
double Striangle(int x1, int y1, int x2, int y2, int x3,   int y3)//Задание 1. Расчет площади сложной фигуры
{
	double a, b, c, P,S;
	a = Dlina(x1, y1, x2, y2);
	b = Dlina(x3, y3, x1, y1);
	c = Dlina(x2, y2, x3, y3);
	P = (a + b + c) / 2.0;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	cout << S;

	return S;

}
double Summa(double a, double b, double c)
{
	cout << " Сумма фигуры равна:" << a + b + c;
	return 0;
}


//Задание 2. Применение итерации реализации функции
double C1(double num) {
	return pow(num, 1.0 / 3);
}

double C2(double num) {
	double x = num;
	for (int i = 0; i < 10; i++)
		x = (num / (x * x) + 2 * x) / 3;	
	return x;
}
//Задание 3. Работа с различными треугольниками
double Triangle(double e) {
	double s =(sqrt(3 / 4)*pow(e,2)) / 2;

	return s;
}
double Triangle(double a,double b,double c) {

	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

//Задание 4. Рекурсивная функция суммы ряда
int sum(int n) {
	 return(n * 5 + sum(n - 1));
}
//
void converter(int num) {//Задание 5. Применение рекурсии для перевода целого числа в двоичный код
	if (num <= 2) {
		std::cout << num;
		return;
	}
	else {
		converter(num / 2);
		std::cout << num % 2;
		return;
	}
}
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(nullptr));
	
	int x1, x2, x3, x4, x5;
	int y1, y2, y3, y4, y5;
	double a=0, b=0, c=0;

	
	cout << "Введите kоординаты x y 1-й вершины фигуры:";
    cin >> x1 >> y1;
	cout << "\nВведите kоординаты x y 2-й вершины фигуры:";
	cin >> x2 >> y2;
	cout << "\nВведите kоординаты x y 3-й вершины фигуры:";
	cin >> x3 >> y3;
	cout << "\nВведите kоординаты x y 4-й вершины фигуры:";
	cin >> x4 >> y4;
	cout << "\nВведите kоординаты x y 4-й вершины фигуры:";
	cin >> x5 >> y5;
	cout << "-----------------------------------------------";
	Summa(a, b, c);
	//Задание 2. Применение итерации реализации функции

	cout << C1(5)<< endl;
	cout << C2(5) << endl;
	//Задание 3. Работа с различными треугольниками
	cout << "Выберите тип треугольника Равносторонний 1, Разносторонний 2\n";
	int choice;
	cin >> choice;
	if (choice == 1) {
		cout << "Введите длину стороны треугольника:";
		double side;
		cin >> side;
		
		cout << Triangle(side) << endl;
	}
	else if(choice==2)
	{
		cout << "Введите длины сторон треугольника a b c:";
		double a,b,c;
		cin >> a>> b >> c;
		cout << Triangle(a,b,c);
	}
	else
	{
		cout << "неверныq ввод";
	}
	//Задание 5. Применение рекурсии для перевода целого числа в двоичный код
	converter(6);


system("pause");
	return 0;
	
}
