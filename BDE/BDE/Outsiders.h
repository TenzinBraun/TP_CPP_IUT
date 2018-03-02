#pragma once
#include "Student.h"
class Outsiders : public Student
{
public:
	Outsiders(string name, string firstName) : Student(name, firstName) { ; }

	virtual float getPriceOfParty(float brutePrice) {
		return brutePrice;
	}
	virtual void displayCharacter() {
		cout << "Nom : " << this->name << endl;
		cout << "Prenom : " << this->firstName << endl;
	}
	~Outsiders() { ; }
};

