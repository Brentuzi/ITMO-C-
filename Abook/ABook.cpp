// ABook.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Person.h"
#include "Student.h"
#include "lecturer.h"
using namespace std;
void DopInfo(Person* person) {
	int age;
	string phone, address, street, houseNumber, apartmentNumber,email;
	char   choice;
	cout << "Ввести полную информацию x ";
	cin >> choice;
	if (choice == 'x') {
		cout << "Введите возраст: ";
		cin >> age;
		cout << "Введите телефон: ";
		cin >> phone;
		cout << "Введите название улицы: ";
		cin >> street;
		cout << "Введите номер дома: ";
		cin >> houseNumber;
		cout << "Введите номер квартиры: ";
		cin >> apartmentNumber;
		cout << "Введите email: ";
		cin >> email;
		address = street + ", дом " + houseNumber + ", квартира " + apartmentNumber;
		
		person->SetAge(age);
		person->SetPhone(phone);
		person->SetAddress(address);
		person->SetEmail(email);
	}
	
}
int main()
{
	Person* person[100];
	setlocale(LC_ALL, "Russian");
	int x=2;
	string lastName, name, secondName,rod, kafedra;
	char choice;
	cout << " Заполнить данные за студента-1, за лектора-2:";
	cin >> x;

	switch (x) {
	case 1:
		cout << "Введите фамилию студента: ";
		cin >> lastName;
		cout << "Введите имя студента: ";
		cin >> name;
		cout << "Введите отчество студента: ";
		cin >> secondName;
		cout << "Введите факультет: ";
		cin >> rod;
		person[0] = new Student(lastName, name, secondName, rod);
		DopInfo(person[0]);
		person[0]->Save();
		break;
	case 2:
	{
		cout << "Введите фамилию лектора: ";
		cin >> lastName;
		cout << "Введите имя : ";
		cin >> name;
		cout << "Введите отчество : ";
		cin >> secondName;
		cout << "Введите кафедру: ";
		cin >> kafedra;
		person[0] = new Lecturer(lastName, name, secondName, kafedra);
		DopInfo(person[0]);
		person[0]->Save();
		break;
		}	
	}
}

