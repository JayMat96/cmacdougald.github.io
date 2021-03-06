// chp7example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

enum gamerps {ROCK, SCISSORS, PAPER};
enum foodgroup { DAIRY, FRUIT, GRAIN, MEAT, VEGETABLE };

string getFoodGroup(foodgroup enumProductType) {
	string strFoodGroup = "Dairy";
	switch (enumProductType)
	{
		case DAIRY:
			strFoodGroup = "Dairy";
			break;
		case FRUIT:
			strFoodGroup = "Fruit";
			break;
		case GRAIN:
			strFoodGroup = "Grain";
			break;
		case MEAT:
			strFoodGroup = "Meat";
			break;
		case VEGETABLE:
			strFoodGroup = "Vegetable";
			break;
		default:
			strFoodGroup = "Unknown";
			break;
	}
	return strFoodGroup;
}


int main()
{
	

	foodgroup enumProductType = DAIRY;
	foodgroup enumProductType2 = static_cast<foodgroup>(enumProductType + 1);

	cout << getFoodGroup(enumProductType) << endl;
	cout << enumProductType << endl;
	cout << getFoodGroup(enumProductType2) << endl;
	cout << enumProductType2 << endl;

    return 0;
}

