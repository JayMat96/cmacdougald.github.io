// test1_review.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	/*
	double const DBL_MARKUP = .80;
	double const DBL_SALE = .10;
	double dblBasePrice = 349.45;
	double dblMarkupPrice = 0.0;
	double dblSalePrice = 0.0;

	dblMarkupPrice = dblBasePrice + (dblBasePrice * DBL_MARKUP);
	dblSalePrice = dblMarkupPrice - (dblMarkupPrice * DBL_SALE);

	cout << fixed << setprecision(2)
		<< "Base Price: $" << dblBasePrice << endl
		<< "Markup Price: $" << dblMarkupPrice << endl
		<< "Sale Price: $" << dblSalePrice << endl;
	//*/
	//---------------------------------------------------
	/*
	double const DBL_PRODUCTION_COST = 0.38;
	double const DBL_PROFIT = 0.27;
	double const DBL_CARTON_LITERS = 3.78;
	double dblNumberOfLiters = 3.78;
	int intNumberOfCartons = 0;
	double dblMilkCost = 0;
	double dblMilkProfit = 0;

	cout << "Enter the number of liters of milk produced today: ";
	cin >> dblNumberOfLiters;

	intNumberOfCartons = ceil(dblNumberOfLiters / DBL_CARTON_LITERS);
	dblMilkCost = intNumberOfCartons * DBL_PROFIT;
	dblMilkProfit = dblNumberOfLiters * DBL_PRODUCTION_COST;

	cout << fixed << setprecision(2)
		<< "Number of Milk Cartons: " << intNumberOfCartons << endl
		<< "Cost of Milk Production: $" << dblMilkCost << endl
		<< "Profit from Milk Production: $" << dblMilkProfit << endl;
	//*/
	//---------------------------------------------------
	//*
	double dblKilograms = 0.0;
	double dblPounds = 0.0;
	
	cout << "Please enter your weight in kilograms: ";
	cin >> dblKilograms;

	dblPounds = dblKilograms * 2.2;

	cout << fixed << setprecision(2)
		<< "Your weight of " << dblKilograms
		<< " kg is " << dblPounds
		<< " in lbs.";
	//*/
    return 0;
}

