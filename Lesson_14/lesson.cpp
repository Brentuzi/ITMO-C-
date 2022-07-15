#include <iostream>

using namespace std;



template<class T>//Практика 14, контрольное задание
double Sred(T arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum / (double)size;
}



int main()
{
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	long arrl[] = { 0,3,7,10,67,4,31,2,45,79 };
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	int k4 = sizeof(arrl) / sizeof(arrl[0]);

	cout << Sred(arr, k1) << endl;	
	cout << Sred(arrd, k2) << endl;	
	cout << Sred(arrc, k3) << endl;	
	cout << Sred(arrl, k4) << endl;
}