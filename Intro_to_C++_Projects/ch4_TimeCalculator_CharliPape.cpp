/*
Program Name: TimeCalculator
Author: Charli Pape
Date: 9/29/24
Brief Description: The user inputs a number of seconds and the program will output how many days, hours, or minutes it is.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    //Defining Variables
    double user_sec;
    const int SEC_IN_DAY = 86400, SEC_IN_HOUR = 3600, SEC_IN_MIN = 60;
    double total;
    
    
    //Output
    cout << "This program will convert seconds to days, hours, or minutes.\n\n";
    cout << "Enter the number of seconds (60 or more): ";
    
    //Input
    cin >> user_sec;
    
    //If statements
    if (user_sec >= SEC_IN_DAY)
    {
        total = user_sec / SEC_IN_DAY;
        cout << "\nThis equals " << fixed << setprecision(2) << total  << " day(s).";
    }
    else if (user_sec >= SEC_IN_HOUR)
    {
        total = user_sec / SEC_IN_HOUR;
        cout << "\nThis equals " << fixed << setprecision(2) << total  << " hour(s).";        
    }
    else if (user_sec >= SEC_IN_MIN)
    {
        total = user_sec / SEC_IN_MIN;
        cout << "\nThis equals " << fixed << setprecision(2) << total  << " minutes(s).";        
    }
    else
    {
        cout << "\nThis is less than one minute";
    }
    return 0;
}

/*
RUN 1

This program will convert seconds to days, hours, or minutes.

Enter the number of seconds (60 or more): 96000

This equals 1.11 day(s).




RUN 2

This program will convert seconds to days, hours, or minutes.

Enter the number of seconds (60 or more): 3100

This equals 51.67 minutes(s).




RUN 3

This program will convert seconds to days, hours, or minutes.

Enter the number of seconds (60 or more): 59

This is less than one minute
*/