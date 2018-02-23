#pragma once
#include "Card.h";
#include <vector>
class DeckOfCard
{
	Card* deckOfCard = new Card[32];
	char* value[8] = { "7","8","9","10","Jack","Queen","King","As" };
	char* color[4] = { "Spades","Hearts","Clubs","Diamonds" };

public:
	DeckOfCard() {
		;
	}
};

