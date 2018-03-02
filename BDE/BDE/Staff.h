#pragma once
#include "Student.h"
class Staff : public Student
{
public:
	Staff(string name, string firstName, int reduction) : Student(name, firstName) { ; }
	
	
	virtual float getPriceOfParty(float brutePrice) {
		return brutePrice = 5.0;
	}

	virtual void displayCharacter() {
		cout << "Nom : " << this->name << endl;
		cout << "Prenom : " << this->firstName << endl;
	}
	~Staff(){ ; }
};

