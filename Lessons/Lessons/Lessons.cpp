

#include <iostream>

#include <vector>;
#include <iostream>;
#include <ctime>;
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
	srand(time(nullptr));

	
	
	//Задание 1. Расчет площади пятугольнка/
	/*
double x1,y1,x2,y2,x3,y3,x4,y4,x5, y5;
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
	*/
	
	
	
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
	//Задание 2.Определение наибольшего из трех чисел
	cout << "\n---------------------\n";
	cout << "Определение наибольшего из трех чисел\n";
	int number1, number2, number3;
	cout << "Введите три числа через пробел:"; cin >> number1 >> number2 >> number3;
	if (number1 > number2 && number1 > number3)
	{
		cout << "\nНаибольшее число:" << number1;
	}
	else if (number2 > number1 && number2 > number3)
	{
		cout << "\nНаибольшее число:" << number2;
	}
	else
	{
		cout << "\nНаибольшее число:" << number3;
	}
	//Задание 3. Размен монет
	cout << "\n---------------------\n";
	cout << "\nЗадание 3. Размен монет\n";
	int nominals[] = { 10,5,2,1};

	int sum;
	cout << "Введите сумму размена: ";
	cin >> sum;
	int i = 0, amount;
	while (sum > 0) {
		if (sum >= nominals[i]) {
			amount = sum / nominals[i];
			cout << "Кол-во:" << amount << " номинал:"
				<< nominals[i]  << endl;
			sum = sum - amount * nominals[i];
			i++;
		}
		else {
			i++;
		}
	}
	//Задание 4. Стрельба по мишени
	int Xpoint, Ypoint;
	Xpoint = 1 + rand() % 10; 
	Ypoint = 1 + rand() % 10;
	Xpoint = 0;
	Ypoint = 0;
	int chance,shoot=0;
	cout << " цель " << Xpoint << " " << Ypoint;
	int score = 0;
	int x, y;
	while (score<50)
	{
		cout << "\n---------------------------------";
		cout << "\nВведите координаты выстрела х у: ";
		cin >> x >> y;
		chance = 1+ rand() % 25;
		if (chance !=2) {
			
			if (x >= Xpoint && x <= Xpoint + 1 && y >= Ypoint && y <= Ypoint + 1 && (x - Xpoint) ^ 2 + (y - Ypoint) ^ 2 <= 2.25)
			{
				cout << "\nПопадание, вы получаете 10 баллов\n";
				score += 10;
				shoot += 1;
			}
			else if (x >= Xpoint + 1.01 && x <= Xpoint + 2 && y >= Ypoint + 1 && y <= Ypoint + 2 && (x - Xpoint) ^ 2 + (y - Ypoint) ^ 2 <= 2.25)
			{
				cout << "\nПопадание, вы получаете 5 баллов\n";
				score += 5;
				shoot += 1;
			}
			else if (x >= Xpoint + 2.01 && x <= Xpoint + 3 && y >= Ypoint + 3 && y <= Ypoint + 3 && (x - Xpoint) ^ 2 + (y - Ypoint) ^ 2 <= 2.25)
			{
				cout << "\nПопадание, вы получаете 1 баллов\n";
				score += 5;
				shoot += 1;
			}
			else
			{
				cout << "\nПромах\n";
				shoot += 1;
			}
			cout << "\nКоличество очков:" << score << "\nПроизведено выстрелов:" << shoot << endl;
		}
		else
		{
			cout << "\nОружие дало осечку\n";
		}
	}
	cout << "\n---------------------------------\n";
	if (shoot < 7) 
	{
		cout << "Уровень стрелка Снайпер";
	}
	else if (shoot > 7 && shoot < 15)
	{
		cout << "Уровень стрелка Стрелок";
	}
	else
	{
		cout << "Уровень стрелка Новичек";
	}
	cout << " \nКоличество выстрелов" <<shoot<< endl;




system("pause");
	return 0;
	
}
