//Marisol Morales
//CECS 325-02
//Proj 1 - One Card War
//Due Date: 09/19/2024
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program

#ifndef CARD_H
#define CARD_H

using namespace std;
class Card
{
	private:
		char rank;
		char suit;
	public:
		Card(); //default Card needed for array
		Card(char rk, char st); //constructor to create a card, setting the suit and rank 
		void print(); //display the card, example: AC, 10S, KD
		int compare(Card); // return 1 for win, 0 for tie, -1 for lose
};
#endif
