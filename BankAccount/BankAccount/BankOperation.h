#pragma once

#include <iostream>
#include <string>
#include "String.h"

using namespace std;

class BankOperation {
private: 
	String bankEntitled; 
	double amount;
	bool credit;
	
public: 
	BankOperation(String bankEntitled, double amount, bool isCredit) {
		this->bankEntitled = bankEntitled;
		this->amount = amount;
		this->credit = isCredit;
	}

	BankOperation(const BankOperation& bankOperation) {
		this->bankEntitled = bankOperation.bankEntitled;
		this->amount = bankOperation.amount;
		this->credit = bankOperation.credit;
	}

	void displayBankOperation() {
		cout << "Libelle de la transaction : " << bankEntitled << endl;
		cout << "Montant de la transaction : " << amount << endl;
		cout << "Type de transaction : ";
		if (credit) {
			cout << "Credit " << endl;
		}
		else {
			cout << "Debit" << endl;
		}
	}


	/* Getter Setter */

	String getBankEntitled() { return this->bankEntitled; }
	double getAmount() { return this->amount; }
	bool isCredit() { return this->credit; }
};