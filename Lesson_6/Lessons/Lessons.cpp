

#include <iostream>

#include <vector>;
#include <iostream>;
#include <ctime>;
#include <string>;
#include <cmath>;
#include <typeinfo>
#include <fstream>
using namespace std;


void Text() 
{
	const int max = 100;
	char str[max];
	cout << "* окончание ввода" << endl;
	cin.get(str, max, '*');
	ofstream txt("txt.txt");
	if (!txt) {
		cout << "Файл открыть невозможно\n";
		
	}
	txt << str;
	cout << "Данные записаны в файл txt.txt." << endl;
}

void sortMas(int* mas, int n) {
	int min = 0 , buf = 0;
	

	ofstream outmas("mas.txt");
	if (!outmas) {
		cout << "Файл открыть невозможно\n";
		return;
	}
	outmas << "Исходный массив:\n";
	for (int i = 0; i < n; i++) {
		outmas << mas[i] << " ";
	}
	outmas.close();

	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (mas[j] < mas[min]) ? j : min;
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}

	ofstream outsort("mas.txt");
	if (!outsort) {
		cout << "Файл открыть невозможно\n";
		return;
	}
	outsort << "\nОтсортированный массив:\n";
	for (int i = 0; i < n; i++) {
		outsort << mas[i] << " ";
	}
	outsort.close();
	
}

int main()
{
	
		setlocale(LC_ALL, "Rus");

		//задание 1
		Text();

		//задание 2
		const int n = 5;		
		int mas[n] = { 1,8,55,445,75};

		sortMas(mas, n);
		system("pause");
			return 0;
}