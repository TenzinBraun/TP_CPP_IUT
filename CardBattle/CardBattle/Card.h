#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card
{
private: 
	string color;
	string values;
	int valueOf;
public:
	Card() { ; }
	Card(string color, string values, int valueOf) {
		this->color = color;
		this->values = values;
		this->valueOf = valueOf;
	}
	friend ostream& operator<<(ostream& cout, const Card& card) {
		cout << card.values << " of " << card.color;
		return cout;
	}
	
	bool operator<(const Card& player2) {
		return this->valueOf < player2.valueOf;
	}

	bool operator==(const Card& player2) {
		return this->valueOf == player2.valueOf;
	}
};

