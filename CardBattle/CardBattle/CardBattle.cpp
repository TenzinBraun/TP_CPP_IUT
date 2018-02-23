// CardBattle.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "DeckOfCard.h";


int main()
{
	Card player1("Spades", "King", 7);
	Card player2("Hearts", "King", 7);
	bool lowerThan =  player1 == player2;
	cout << " " << lowerThan << " " << player1 << " " << player2;
    return 0;
}

