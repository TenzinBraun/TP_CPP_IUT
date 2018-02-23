#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "BankOperation.h"

using namespace std;

class Bank {
private:
	String bankOwnerName;
	String bankName;
	BankOperation * bankOperations[10] = { NULL };

public:
	Bank(String bankOwner, String bankName) : bankOwnerName(bankOwner), bankName(bankName) { ; }
	

	void addNewOperation(String bankEntitled, double amount, bool credit) {
		for (int i = 0; i < 10; i++) {
			if (bankOperations == NULL) {
				bankOperations[i] = new BankOperation(bankEntitled, amount, credit);
				return;
			}
		}
	}

	/**

	*/
	double calculateBalance() {
		double balanceTotal = 0.0;
		for (int i = 0; i < 10; i++) {
			if (bankOperations[i] != NULL) {
				if (bankOperations[i]->isCredit()) {
					balanceTotal += bankOperations[i]->getAmount();
				}
				else
					balanceTotal -= bankOperations[i]->getAmount();
			}
		}
		return balanceTotal;
	}

	void displayAllBankOperations() {
		for (int i = 0; i < 10; i++) {
			if(bankOperations[i] != NULL)
				bankOperations[i]->displayBankOperation();
		}
	}

	~Bank() {
		for (int i = 0; i < 10; i++) {
			delete bankOperations[i];
		}
	}
	
};