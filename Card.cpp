//Marisol Morales
//CECS 325 - 02
//Proj 1 - One Card War
//Due Date: 09/19/2024
//
//I certify that this program is my own original work. I did not copy any part of this program from
//any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

Card::Card()
{
	rank = '0'; //initializing to nonexistent character aka blank
	suit = '0'; //initializing to nonexistent character aka blank
}

Card::Card(char rk, char st)
{
	rank = rk;
	suit = st;

}

void Card::print()
{
//	cout << rank << suit;
	if (rank == 'D'){
		cout << "10" << suit;
	}
	else {
		cout << rank << suit;
	}	

}

int Card::compare(Card CardTwo)
{
	char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'D', 'J', 'Q', 'K'}; //using D to represent ten (deca)
											  //array is here to help visualize how a deck is
	

	if (rank == CardTwo.rank){
		return 0;
	} else if (rank == 'A') {
		return -1;
	} else if (CardTwo.rank == 'A') {
		return 1;
	} else if (rank == 'K') {
		return 1;
	} else if (CardTwo.rank == 'K') {
		return -1; 
	} else if (rank > CardTwo.rank) {
		return 1;
	} else {
		return -1;
	}

}
