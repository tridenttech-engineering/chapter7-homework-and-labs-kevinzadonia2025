//Lab7-6.cpp - calculates and displays the average price
//Created/revised by Kevin Zadonia

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices     = 0;    
	double price      = 0.0;
	double totalPrice = 0.0;  
	double avgPrice   = 0.0;

	cout << "Price (negative number to end): ";
	cin >> price;

	//while loop to process data
	while (price >= 0.0)
	{    
		numPrices += 1;    
		totalPrice += price;    
		cout << "Next price: ";
		cin >> price;
	} //end while

	//if statement to determine if any prices were entered
	if (numPrices > 0) 
		avgPrice = totalPrice / numPrices; 

	//else statement to display message if no prices were entered
	else    
		avgPrice = 0.0;
	// end if
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << avgPrice << endl;
	return 0;
}	//end of main function

