// MaoCardGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int intCard = 46;
	int intFace = -1;
	int intSuite = -1;
	string strFace = "";
	string strSuite = "";

	cout << "Please enter a card number between 1 and 52: ";
	cin >> intCard;

	intFace = 1 + ((intCard - 1) % 13);
	intSuite = (intCard - 1) / 13;

	// cerr << intFace << endl;

	switch(intFace) {
		case 1:
			strFace = "Ace";
			break;
		case 11:
			strFace = "Jack";
			break;
		case 12:
			strFace = "Queen";
			break;
		case 13:
			strFace = "King";
			break;
		default:
			strFace += std::to_string(intFace);
	}

	switch (intSuite) {
		case 0:
			strSuite = "Clubs";
			break;
		case 1:
			strSuite = "Diamonds";
			break;
		case 2:
			strSuite = "Hearts";
			break;
		default:
			strSuite = "Spades";
			break;
	}

	cout << strFace << " of " << strSuite << endl;

    return 0;
}

