//hw5-12.cpp - displays the total owed
//Created/revised by <CooperKR> on <9-27>

#include <iostream>
#include <iomanip>
using namespace std;
int main()	{ //start main function

// Declare Variables //
	double itemOne = 0.0;
	double itemTwo = 0.0;
	double totalPrice = 0.0;

// User Inputs //
	cout << "Enter Price of First Item: \n";
		cin >> itemOne;
	cout << "Enter Price of Second Item: \n";
		cin >> itemTwo;

// Calculate Discount and Total//
	if (itemTwo <= itemOne)
		totalPrice = (itemTwo/2) + itemOne;
	else 
		totalPrice = (itemOne/2) + itemTwo;
	//endif

// Display Total //
	cout << fixed << setprecision(2);
	cout << "Discounted Price: $" << totalPrice << endl;

 return 0; }	//end main function