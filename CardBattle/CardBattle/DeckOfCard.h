#pragma once
#include "Card.h";
#include <vector>

class DeckOfCard
{
	Card *deckOfCard[32] = { NULL };

	string value[8] = { "7","8","9","10","Jack","Queen","King","As" };
	string color[4] = { "Spades","Hearts","Clubs","Diamonds" };

	Card * player1 = new Card[16];
	Card * player2 = new Card[16];

	int cardCounterOfPlayer1 = 16;
	int cardCounterOfPlayer2 = 16;
	int numberOfCardInStack = 0;

	Card* cardsStack = new Card[4];


public:
	DeckOfCard() {
		;
	}

	void init32PlayGame() {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 8; j++) {
				deckOfCard[j + i * 8] = new Card(color[i], value[j], j);
			}
		}
	}

	void cardBattle() {
		init32PlayGame();
		int i = 0;
		while (i < 5) {
			randomShuffle();
		}
		dealCards();
		while (cardCounterOfPlayer1 > 0 && cardCounterOfPlayer2 > 0) {
			battle2Cards();
			displayDeckOfPlayers();
		}

	}
	
	void battle2Cards() {
		cout << "Battle ! " << endl;
		cout << player1[cardCounterOfPlayer1 - 1];
		cout << " VS ";
		cout << player2[cardCounterOfPlayer2 - 1] << endl;
		if (player2[cardCounterOfPlayer2 - 1] < player1[cardCounterOfPlayer1 - 1]) {
			addCardsBelowPlayer1Deck(player1[cardCounterOfPlayer1 - 1], player2[cardCounterOfPlayer2 - 1]);
		}
		else if (player2[cardCounterOfPlayer2 - 1] == player1[cardCounterOfPlayer1 - 1]){
			stack(player1[cardCounterOfPlayer1 - 1], player2[cardCounterOfPlayer2 - 1]);
		}
		else {
			addCardBelowPlayer2Deck(player1[cardCounterOfPlayer1 - 1], player2[cardCounterOfPlayer2 - 1]);
		}
		
	}

	void stack(Card cardOfPlayer, Card cardOfPlayer2) {
		cardCounterOfPlayer1--;
		cardCounterOfPlayer2--;
		Card *temp;
		temp = cardsStack;
		cardsStack = new Card[numberOfCardInStack + 4];
		for (int i = 0; numberOfCardInStack; i++) {
			if (cardsStack != NULL) {
				cardsStack[i] = temp[i];
			}
		}
		cardsStack[numberOfCardInStack] = cardOfPlayer;
		cardsStack[numberOfCardInStack + 1] = cardOfPlayer2;
		cardsStack[numberOfCardInStack + 2] = player1[cardCounterOfPlayer1 - 1];
		cardsStack[numberOfCardInStack + 3] = player2[cardCounterOfPlayer2 - 1];
		
		numberOfCardInStack += 4;
	}

	void addCardsBelowPlayer1Deck(Card cardOfPlayer1, Card cardOfPlayer2) {
		Card *temp;
		temp = player1;
		player1 = new Card[cardCounterOfPlayer1 + numberOfCardInStack + 2];
		if (cardsStack != NULL) {
			for (int i = 0; i < numberOfCardInStack; i++) {
				player1[i] = cardsStack[i];
			}
		}

		cardsStack = NULL;

		player1[numberOfCardInStack] = cardOfPlayer1;
		player1[numberOfCardInStack + 1] = cardOfPlayer2;


		for (int i = 0; i < cardCounterOfPlayer1; i++) {
			player1[numberOfCardInStack + 2 + i] = temp[i];
		}

		cardCounterOfPlayer1 += numberOfCardInStack / 2 + 1;
		cardCounterOfPlayer2 -= numberOfCardInStack / 2 + 1;
		cout << "player 1 : " << cardCounterOfPlayer1 << "player 2 : " << cardCounterOfPlayer2 << "Pioche : " << numberOfCardInStack << endl;
		numberOfCardInStack = 0;
		delete[] temp;
	}

	void addCardBelowPlayer2Deck(Card cardOfPlayer1, Card cardOfPlayer2) {
		Card *temp;
		temp = player2;
		player2 = new Card[cardCounterOfPlayer2 + numberOfCardInStack + 2];
		if (cardsStack != NULL) {
			for (int i = 0; i < numberOfCardInStack; i++) {
				player2[i] = cardsStack[i];
			}

			cardsStack = NULL;

			player2[numberOfCardInStack] = cardOfPlayer1;
			player2[numberOfCardInStack + 1] = cardOfPlayer2;
		}
		else {
			player2[numberOfCardInStack] = cardOfPlayer1;
			player2[numberOfCardInStack + 1] = cardOfPlayer2;
		}


		for (int i = 0; i < cardCounterOfPlayer2; i++) {
			player2[numberOfCardInStack + 2 + i] = temp[i];
		}

		cardCounterOfPlayer1 -= 3;
		cardCounterOfPlayer2 += 3;
		cout << "player 1 : " << cardCounterOfPlayer1 << "player 2 : " << cardCounterOfPlayer2 << "Pioche : " << numberOfCardInStack << endl;
		numberOfCardInStack = 0;
		delete[] temp;

	}
	
	void americanShuffle() {
		Card *firstHalfDeck[16];
		Card *secondHalfDeck[16];

		for (int i = 0; i < 32; i++) {
			if (i < 16) 
				firstHalfDeck[i] = deckOfCard[i];
			else
				secondHalfDeck[i % 16] = deckOfCard[i];
		}

		for (int i = 0; i < 32; i++) {
			deckOfCard[i] = NULL;
		}

		for (int i = 0; i < 16; i++) {
			deckOfCard[i * 2] = firstHalfDeck[i];
			deckOfCard[i * 2 + 1] = secondHalfDeck[i];
		}		
	}

	void randomShuffle() {
		int i = 0;
		while (i < 1000) {
			Card * temp;

			int randomPickFirstCard = (int)rand() % 32;
			int randomPickSecondCard = (int)rand() % 32;

			temp = deckOfCard[randomPickFirstCard];
			deckOfCard[randomPickFirstCard] = deckOfCard[randomPickSecondCard];
			deckOfCard[randomPickSecondCard] = temp;
			i++;
		}
	}

	void dealCards() {
		for (int i = 0; i < 16; i++) {
			player1[i] = *deckOfCard[i * 2];
			player2[i] = *deckOfCard[i * 2 + 1];
		}
		displayDeckOfPlayers();
	}


	void displayDeckOfCards() {
		for (int i = 0; i < 32; i++) {
			deckOfCard[i]->displayCard();
			cout << endl;
		}
	}
	void displayDeckOfPlayers() {
		cout <<  endl << "Player 1 Deck : " << endl;
		for (int i = 0; i < cardCounterOfPlayer1; i++) {			
			cout << player1[i];
			cout << endl;
		}
		cout << endl << "Player 2 Deck : " << endl;
		for (int i = 0; i < cardCounterOfPlayer2; i++) {
			cout << player2[i];
			cout << endl;
		}
		cout << endl << "Pioche : " << endl;
		for (int i = 0; i < numberOfCardInStack; i++) {
			cout << cardsStack[i];
			cout << endl;
		}
	}
	~DeckOfCard() {
		for (int i = 0; i < 32; i++) {
			delete deckOfCard[i];
		}
		delete[] cardsStack;
		delete[] player1;
		delete[] player2;
	}

};

