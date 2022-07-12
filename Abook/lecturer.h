#pragma once
#include "Person.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;
class Lecturer : public Person {
public:
	Lecturer(string firstName, string secondName, string lastName, string kafedra) :Person(lastName, firstName, secondName)
	{
		this->kafedra = kafedra;
	}
	void Save() const
	{
		Person::Save();
		ofstream fout("abook.txt", ios::app);
		fout << "kafedra : " << Getkafedra() << "\nlecturer" << "\n-------------";
		fout << endl;
		fout.close();
	}
	string Getkafedra() const {
		return kafedra;
	}
private:
	string kafedra;
};