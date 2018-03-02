// BDE.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Party.h"
#include "Staff.h"
#include "Member.h"


int main()
{
	Party party("Soiree de Noel", 8.0);
	for (int i = 0; i < 100; i++) {
		party.addStudent(new Member("a", "a" + i, 30));
	}
	party.displayAllStudent();
	cout << party.getBenefice();
    return 0;
}

