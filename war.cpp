//Marisol Morales
//CECS 325 - 02 
//Proj 1 - One Card War 
//Due Date: 09/19/2024
//
//I certify that this program is my own original work. I did not copy any part of this program from
//any other source. I further certify that I typed each and every line of code in this program.

#include "Card.h"
#include "Deck.h"

#include <iostream>
#include <string>
using namespace std;

int main(){

	string player1;
	cout << "Enter the name of the first player: ";
	cin >> player1; 

	string player2;
	cout << "Enter the name of the second player: ";
	cin >> player2;
	cout << endl;

	Deck deck;
	cout << "Original Deck" << endl;
	deck.print();
	cout << endl;	

	cout<< "Shuffled Deck" << endl;
	deck.shuffle();
	deck.print();
	cout << endl;

	int player1win = 0;
	int player2win = 0;
       	int roundWinner = 0;
	int gameTie = 0;	

	for(int i = 1; i < 27; i++){
		cout << "Game" << ' ' << i << endl;
		cout << "----------" << endl;
		cout << endl;
		
		Card player1Card = deck.deal();
		Card player2Card = deck.deal();	
		
		roundWinner = 0;

		cout << "        " << player1 << "==>" << ' ';
		player1Card.print();
		cout << endl;
		cout << "        " << player2 << "==>" <<' ';
		player2Card.print();
		cout << endl;
		
		roundWinner = player1Card.compare(player2Card);

		if(roundWinner == 1){
			player1win = player1win + 1;
			cout << player1 << "==>" << ' ' << "Winner" << endl;	
		}
		else if(roundWinner == 0){
			gameTie = gameTie + 1;
			cout << "Tie Game" << endl;
		}
		else{
			player2win = player2win +1;
			cout << player2 << "==>" << ' ' << "Winner" << endl;
		}
		

		cout << endl;




	};

	cout << "-------Final Stats-------" << endl;
	cout <<"       " << player1 << "  vs  " << player2 << endl;
	cout << "Wins" <<"    " << player1win << "        " <<player2win << endl;
	cout << "Losses" <<"  "<< player2win << "        " << player1win << endl;
	cout << "Ties" <<"    "<< gameTie << "         " << gameTie << endl;

	return 0;
};
