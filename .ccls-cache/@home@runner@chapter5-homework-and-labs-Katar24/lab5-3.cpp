//lab5-3.cpp - displays the total amount due
//Created/revised by <CooperKR> on <9-28-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main() { //start main function
// Declare Constants and Variable //
	const double discRate1 = 0.1;
	const double discRate2 = 0.05;
	const double shipChrg1 = 0.99;
	const double shipChrg2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ';

// User inputs //
	cout << "Enter Amount Owed Before Discount or Shipping: \n";
		cin >> amtOwed;
	cout << "Premier Club Member? (Y/N) \n";
		cin >> member;

// Discount Calculation //
	if (toupper(member) == 'Y')
		amtOwed -= amtOwed * discRate1;
	else 
		amtOwed -= amtOwed * discRate2;
	//endif

// Shipping Calculation //
	if (amtOwed >= 100.00)
		amtOwed += shipChrg1;
	else
		amtOwed += shipChrg2;
	//endif

// Display What's Owed //
	cout << fixed << setprecision(2);
	cout << "Total Owed After Discount and Shipping: \n" << amtOwed << endl;

return 0;  }	//end main function