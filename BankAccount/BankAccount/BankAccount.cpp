// BankAccount.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Bank.h"
#include "Template.h"
#include <iostream>
#include <algorithm>


int main()
{

	Bank myBank("Martif", "La Banque Postale");
	myBank.addNewOperation("Retrait pour les courses", 50.0, false);
	myBank.addNewOperation("Salaire du mois", 1280.75, true);
	myBank.addNewOperation("Achat canape", 750.58, false);
	cout << "Solde : " << myBank.calculateBalance() << endl;
	//myBank.displayAllBankOperations();

	vector<float> sortAllElements;
	for (unsigned i = 0; i < 100; i++) {
		float randomAdd = rand() % 1000;
		sortAllElements.push_back(randomAdd);
	}
	sort(sortAllElements.begin(), sortAllElements.end());
	for (unsigned i = 0; i < 100; i++) {
		cout << sortAllElements.at(i) << ",";
	}

    return 0;
}

