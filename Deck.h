//Marisol Morales
//CECS 325-02
//Proj 1 - One Card War
//Due Date: 09/19/2024
//
//I certify that this program is my own original work. I did not copy any part of this program from 
//any other source. I further certify that I typed each and every line of code in this program.

#ifndef DECK_H
#define DECK_H

#include "Card.h"
using namespace std;

class Deck
{
	private:
		Card pile[52];
		int TopCard = 0;
	public:
		Deck(); //constructor which creates a deck of 52 cards
		Card deal(); //deal a card
		void print(); //show all the cards in the deck
		void shuffle(); //shuffle the cards in the deck

};
#endif
