#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
protected: 
	string name, firstName;
public:
	Student(string name, string firstName) {
		this->name = name;
		this->firstName = firstName;
	}
	virtual float getPriceOfParty(float brutePrice) = 0;

	virtual void displayCharacter() {
		cout << "Nom : " << this->name << endl;
		cout << "Prenom : " << this->firstName << endl;
	}
	~Student() { ; }
};

