#pragma once
#include "Student.h"
#include <vector>
class Party
{
private:
	vector<Student*> students;
	string libelle;
	float priceOfParty;
public:
	Party(string libelle,float priceOfParty) :libelle(libelle), priceOfParty(priceOfParty) { ; }

	float getBenefice() {
		float counter = 0.0; 
		for (int i = 0; i < students.size(); i++) {
			counter += students[i]->getPriceOfParty(priceOfParty);
		}
		return counter;
	}

	void addStudent(Student *student) {
		students.push_back(student);
	}

	void displayAllStudent() {
		for (int i = 0; i < students.size(); i++) {
			students[i]->displayCharacter();
		}
	}

	float getBrutePrice() {
		return this->priceOfParty;
	}

	~Party() {
		for (int i = 0; i < students.size(); i++) {
			delete students[i];
		}
	}
};

