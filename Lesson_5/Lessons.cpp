

#include <iostream>

#include <vector>;
#include <iostream>;
#include <ctime>;
#include <string>;
#include <cmath>;
#include <typeinfo>
using namespace std;


int Sum(int*mas, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += mas[i];
	}
	return sum;
}
int Sred(int*mas, int n)
{	
	return Sum(mas, n)/n;
}
int SumO(int*mas, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if(mas[i]<0)sum += mas[i];
		
	}
	return sum;
}
int SumP(int*mas, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)sum += mas[i];

	}
	return sum;
}
int SumOdd(int*mas, int n)
{
	int sum = 0;
	for (int i = 1; i < n; i+=2)
	{
		sum += mas[i];
	}
	return sum;
}
int SumEven(int*mas, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i += 2)
	{
		sum += mas[i];
	}
	return sum;
}
void maxMin(int*mas, int n) 
{
	int max, min;
	max = min = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (max < mas[i]) max = mas[i];
		if (min > mas[i]) min = mas[i];
	}
	cout << "Mаксимальный и минимальный элементы массива:" << max <<" " <<  min;
}
int under(int*mas, int n)//произведене между
{
	int max, min, P = 1;
	max = min = mas[0];
	for (int i = 1; i < n; i++)
	{
		if (max < mas[i]) max = mas[i];
		if (min > mas[i]) min = mas[i];
	}
	int a, b;
	a = max;
	b = min;
	for (int i = 1; i < n; i++)
	{
		if (mas[i]<a && mas[i] > b)
		{
			P = mas[i]*P;
		}
		
	}
	return P;
}
void sort(int* mas, int n) {

	int min = 0;
	int buf = 0;
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

	for (int i = 0; i < n; i++)
	{
		std::cout << mas[i] << '\t';
	}
}

int* max_vect(int len, int* array1, int* array2) {//Задание 2. Возврат массива из функции
	int* maxNums = new int[len];
	for (int i = 0; i < len; i++) {
		maxNums[i] = (array1[i] > array2[i]) ? array1[i] : array2[i];
	}
	return maxNums;
}
int main()
{
	
		setlocale(LC_ALL, "Rus");
		srand(time(nullptr));
			
		const int n = 10;
		int mas[n];
		for (int i = 0; i < n; i++)
		{
			cout << "mas[" << i << "]=";
			cin >> mas[i];
		}
		cout << "Сумма элементов массива:" << Sum(mas,n) << endl;
		cout << "Среднее значение элементов массива:" << Sred(mas, n) << endl;
		cout << "Сумма отрицательных элементов массива:" << SumO(mas, n) << endl;
		cout << "Сумма положительных элементов массива:" << SumP(mas, n) << endl;
		cout << "Сумма элементов с нечетными индексами:" << SumOdd(mas, n) << endl;
		cout << "Сумма сэлементов с четными индексами:" << SumEven(mas, n) << endl;
		maxMin(mas, n);
		cout << "Произведение между наибольщим и наименьшим:" << under(mas, n) << endl;
		cout << "Oтсортированный массив: " << endl;
		sort(mas, n);
		
		cout << "------------------------------------" << endl;
		//Задание 2. Возврат массива из функции
		int a[] = { 1,2,3,4,5,6,7,2 };
		int b[] = { 7,6,5,4,3,2,1,3 };
		int kc = sizeof(a) / sizeof(a[0]); 
		int* c; 
		c = max_vect(kc, a, b);
		for (int i = 0; i < kc; i++){
			std::cout << c[i] << " ";
		}
		std::cout << std::endl;
		delete[]c;


		system("pause");
			return 0;
}