#pragma once
#include "Student.h"

class Member : public Student
{
protected:
	float reduction;
public:
	Member(string name, string firstName, int reduction) : Student(name, firstName), reduction(reduction) { ; }
	
	
	virtual float getPriceOfParty(float brutePrice) {
		//cout << "Hello I am a Debugger";
		float newPrice = brutePrice * (1 - (reduction / 100));
		return newPrice;
	}
	virtual void displayCharacter() {
		cout << "Nom : " << this->name << endl;
		cout << "Prenom : " << this->firstName << endl;
	}
	~Member() { ; }
};
