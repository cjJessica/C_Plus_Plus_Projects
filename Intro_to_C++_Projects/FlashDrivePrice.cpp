/*
Program Name: Flash Drive Price
Author: Charli Pape
Date: 9/5/24
Brief Description: Multiplying the cost of a USB by the percent profit to determine at what price the USB should be sold at
*/
#include <iostream>
using namespace std;

int main() {
    //Variables
    int cost = 8;
    
    //needs to be double because its not a whole number
    double profit_percent = 35;
    
    //Calculations
    
    //needs to be double because it has a decimal place
    // multiplying profit_percent by 0.01 to turn the percentage into a decimal
    double selling_cost = cost * (0.01 * profit_percent);

    //Output
    cout << "To have a " << profit_percent << "\% profit, the selling price of the USB that costs $" << cost << " to produce should be $" << selling_cost << endl;

    return 0;
}
/* Output 

To have a 35% profit, the selling price of the USB that costs $8 to produce should be $2.8
*/