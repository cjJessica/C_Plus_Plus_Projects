/*
Program Name :  ShowMeTheMoney.cpp
Date : 10/20/24
Author: Charli Pape
Class : CSC100AA
Description : The rogram calulates a person's daily pay and monthly total if the 
person gets 1 penny on their first day, but their daily total doubles every day.
*/

#include <iostream>  
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //Define the initialization expression for the do-while
    char repeat;
    
    //Do-while loop so that the program is ran at least once
    do 
    {
        //Define variables
        int days_worked = 0;
        int i;
        double daily_pay = 0.01;
        double total = 0;
        
        //Input
        cout << "\nHow many days did the employee work this month? ";
        cin >> days_worked;
        
        //Input Validation
        while (days_worked < 0 || days_worked > 31)
        {
            cout << "\nThe number of days must be between 1 and 31.\n";
            
            cout << "Please re-enter days worked. ";
            cin >> days_worked;
        }
        
        //Output of Format 
        cout << "\nDay" << setw(16) << "Pay\n";
        cout << "------------------\n";
        
        //Loops for however many days they worked
        for (i=1; i<=days_worked; i++)
        {
            //Output of daily Pay
            cout << setw(2) << i << setw(16) << daily_pay << endl;
            
            //Calculation
            total += daily_pay;
            daily_pay *= 2;
            
        }
        
        //Output for total
        cout << "------------------\n";
        cout << "Total $" << setw(11) << total << endl;
        
        cout << "\nDo you want to try again? (Y or N) ";
        cin >> repeat;
        
    } while (repeat == 'Y' || repeat == 'y');
    return 0;
}

/*
OUTPUT:

How many days did the employee work this month? 3

Day            Pay
------------------
 1            0.01
 2            0.02
 3            0.04
------------------
Total $       0.07

Do you want to try again? (Y or N) Y

How many days did the employee work this month? 45

The number of days must be between 1 and 31.
Please re-enter days worked. -2

The number of days must be between 1 and 31.
Please re-enter days worked. 7

Day            Pay
------------------
 1            0.01
 2            0.02
 3            0.04
 4            0.08
 5            0.16
 6            0.32
 7            0.64
------------------
Total $       1.27

Do you want to try again? (Y or N) N

*/