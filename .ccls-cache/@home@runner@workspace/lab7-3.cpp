//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    //declare variables
    int day = 1;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    //process data using while loop
    while (day < 8)
        {
            cout << " How many texts did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day += 1;
        }

        //display output
        average = static_cast<double>(totalTexts) / (day - 1);
        cout << fixed << setprecision(0);
        cout << endl << "You sent approximately " << average << " texts each day." << endl;

    
    return 0;
}   //end of main function