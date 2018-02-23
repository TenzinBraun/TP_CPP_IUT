// CardBattle.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "DeckOfCard.h";
#include <ctime>


int main()
{
	srand(time(NULL));
	DeckOfCard deckOf32;
	deckOf32.init32PlayGame();
	deckOf32.displayDeckOfCards();
	deckOf32.randomShuffle();
	deckOf32.dealCards();
	deckOf32.displayDeckOfPlayers();
	for (int i = 0; i < 15; i++) {
		deckOf32.battle2Cards();
		deckOf32.displayDeckOfPlayers();
	}
    return 0;
}

