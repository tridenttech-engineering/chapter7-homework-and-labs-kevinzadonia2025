//Lab7-4.cpp - displays the average electric bill
//Created/revised by Kevin Zadonia

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
//declare variables
double bill = 0.0;
double totalBills = 0.0;
double avgBill = 0.0;
int months = 0;

	cout << "enter the bill for month 1: ";
	cin >> bill;

	//process data using while loop
	while (bill >= 0.0)
		{		totalBills += bill;
		 		months += 1;
		 		cout << "enter the bill for month " << months + 1 << ": ";
		 		cin >> bill;
		
		}
	//if statement to determine if any bills were entered
	if (months > 0)
	{		avgBill = totalBills / months;
	 		cout << fixed << setprecision(2);
	 		cout << "Average bill for " << months << " Months: $" << avgBill << endl;
		
	}

//else statement to display message if no bills were entered
else
		cout << "No bills entered." << endl;
	
	return 0;
}	//end of main function