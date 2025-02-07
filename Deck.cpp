//Marisol Morales
//CECS 325 - 02
//Proj 1 - One Card War
//Due Date: 09/19/2024
//
//I certify that this program is my own original work. I did not copy any part of this program from
//any other sources. I further certify that I typed each and every line of code in this program.

#include <iostream>

#include <cstdlib>
#include <time.h>
#include "Card.h"
#include "Deck.h"
using namespace std;

Deck::Deck()
{
	char rank[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'D','J', 'Q', 'K'}; //using D to represent ten (deca)
	char suit[] = {'C', 'S', 'D', 'H'};	
	int index = 0;
	for(int s = 0; s < 4; s++){
		for (int r = 0; r < 13; r++){
			pile[index] = Card(rank[r], suit[s]);
			index++;
		}
	}

}

Card Deck::deal()
{
	return pile[TopCard++];

}

void Deck::print()
{
//	pile[0].print();
//	cout <<' ';	
	for(int i = 0; i < 52; i++){
		pile[i].print();
		cout <<' ';
		if((i+1) % 13 == 0){
			cout << endl;
		}	
	}

}

void Deck::shuffle()
{
	srand(time(0));

	for(int i = 0; i < 52 ; i++){
		
		int index = rand() % 52; 
		Card temp = pile[index];
		int index2 = rand() % 52;
		pile[index] = pile[index2];
		pile[index2] = temp;
	}	
	
}

