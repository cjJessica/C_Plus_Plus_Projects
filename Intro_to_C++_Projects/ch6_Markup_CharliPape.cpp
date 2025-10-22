// Program Name : Markup.cpp
// Author : Charli Pape
// Date : 11/3/24
// Class : CSC100AA and CIS162AB
// Brief Description : The program asks the user for an item's wholesale cost and markup 
//precentage. The program then calculates and returns the retail price.


#include <iostream>
#include <iomanip>
using namespace std;

//calculateRetailPrice's function prototype
double calculateRetailPrice(double wholesale, double markup);

int main()
{
    
    //Define variables
    double wholesale, markup, retailPrice;
    char again = 'Y';
    
    //do-while loop
    
    do
    {
        //Ask for input for wholesale anad markup
        cout << "Enter the item's wholesale cost : ";
        cin >> wholesale;
        
        cout << "Enter the item's markup percentage (e.g. 15.0): ";
        cin >> markup;
        
        //validate the input
        while (wholesale < 0 || markup < 0)
        {
            cout << "Re-enter values using positive numbers only please.\n\n";
            
            cout << "Enter the item's wholesale cost : ";
            cin >> wholesale;
            
            cout << "Enter the item's markup percentage (e.g. 15.0): ";
            cin >> markup;
        }
        
        //calling calculateRetailPrice function
        retailPrice = calculateRetailPrice(wholesale, markup);
    
        //output
        cout << "$" << fixed << setprecision(2) << retailPrice << endl;
        
        //Ask if user wants to run the program again
        cout << "\nDo you want to try again? (Y or N) ";
        cin >> again;
        
        
    } while (again == 'Y' || again == 'y');
    
    return 0;
}

//calculateRetailPrice function

double calculateRetailPrice(double wholesale, double markup)
{
    //define variable
    double retail;
    
    //calculations
    markup /= 100;
    retail = wholesale * (1 + markup);
    
    //return the retail price 
    return retail;
}

/*
OUTPUT 

Enter the item's wholesale cost : 5
Enter the item's markup percentage (e.g. 15.0): 100
$10.00

Do you want to try again? (Y or N) y
Enter the item's wholesale cost : 20
Enter the item's markup percentage (e.g. 15.0): 10
$22.00

Do you want to try again? (Y or N) y
Enter the item's wholesale cost : -50
Enter the item's markup percentage (e.g. 15.0): 5
Re-enter values using positive numbers only please.

Enter the item's wholesale cost : 50
Enter the item's markup percentage (e.g. 15.0): 5
$52.50

Do you want to try again? (Y or N) n

*/