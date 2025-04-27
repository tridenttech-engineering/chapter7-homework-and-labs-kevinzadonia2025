//hw7-16.cpp - displays three tip amounts
//Created/revised by Kevin Zadonia
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double bill = 0.0;
	double tip = 0.0;

	cout << "Bill amount: ";
	cin >> bill;

	cout << fixed;

	//for loop to process data
	for (double rate = 0.1; rate <= 0.2; rate += 0.05)
	{
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
	}   // end for
	return 0;
}	//end of main function
