#pragma once
#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
class Person 
{
public:
	Person(string firstName, string secondName, string lastName) : lastName(lastName), firstName(firstName), secondName(secondName)
	{
	}
	
	string SetfirstName(string firstName) {
		this->firstName = firstName;
	}
	string SetsecondName(string secondName) {
		this->secondName = secondName;
	}
	string SetlastName(string lastName) {
		this->lastName = lastName;
	}
	string GetfirstName() const {
		return firstName;
	}
	string GetsecondName() const {
		return secondName;
	}
	string GetlastName() const {
		return lastName;
	}
	void SetEmail(string email) {
		this->email = email;
	}
	string GetEmail() const {
		return email;
	}
	void SetPhone(string phone) {
		this->phone = phone;
	}
	string GetPhone() const {
		return phone;
	}
	void SetAddress(string address) {
		this->address = address;
	}
	void SetAge(int age) {
		this->age = age;
	}
	int Getage() const {
		return age;
	}
	string GetAddress() const {
		return address;
	}
	string AllInf() const 
	{
		std::ostringstream fullInfo;
		fullInfo << firstName << endl << secondName << endl << lastName << endl << email << endl << phone << endl << address << endl << age;
		return fullInfo.str();
	}
	virtual void Save() const
	{
		ofstream fout("abook.txt", ios::app);
		fout << "FIO "<<  GetlastName() << " " << GetfirstName() << " " << GetsecondName() << "\nAGE : "
			<< Getage() << "\nPhone: " << GetPhone() << "\nAdress: " << GetAddress() << "\nMail:" << GetEmail();
		fout << endl;
		fout.close();
	}
private:
	string firstName;
	string secondName;
	string lastName;
	string email;
	string phone=" ";
	string address;
	int age=18;







};