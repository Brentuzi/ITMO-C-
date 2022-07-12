#pragma once
#include "Person.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;
class Student : public Person {
public:
	Student(string firstName, string secondName, string lastName, string rod) :Person(lastName, firstName, secondName)
	{this->rod = rod;
	}		
	void Save() const
	{
		Person::Save();
		ofstream fout("abook.txt", ios::app);
		fout << "facultet : " << GetRod()<< "\nSTUDENT" << "\n-------------";
		fout << endl;
		fout.close();
	}
	string GetRod() const {
		return rod;
	}	
private:	
	string rod;
};