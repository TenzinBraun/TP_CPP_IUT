#pragma once
#include <iostream>
#include <string> 
#include <vector>
#include <map>
#include "Bank.h"

using namespace std;

class String
{
	string message;
	vector<char> messageToCharArray;
	
public:
	String() { ; }
	String(string message) {
		this->message = message;
	}

	String concat(string firstMessage, string secondMessage) {
		 return firstMessage + " " + secondMessage;
	}

	vector<char> toCharArray() {
		for (unsigned i = 0; i < message.length(); i++) {
			messageToCharArray.push_back(message.at(i));
		}
		return messageToCharArray;
	}

	void displayCharArray() {
		cout << "{";
		for (int i = 0; i < sizeOfCharArray(); i++) {
			cout << messageToCharArray[i] << ",";
		}
		cout << "}" << endl;;
	}

	int sizeOfCharArray() {
		return messageToCharArray.size();
	}
	
	/* Methodes Natives à la Classe string */
	int length() { return message.length(); }
	char at(int indicator) { return message.at(indicator); }

	/* Surcharge d'Opérateur*/
	friend ostream& operator<<(ostream& cout, const String& message) {
		cout << message;
		return cout;
	}
};

