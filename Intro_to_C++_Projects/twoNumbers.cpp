/*
Program Name: TwoNumbers Operations
Author: Charli Pape
Date: 9/5/24
Brief Description: multiplies, adds, divides, and subtracts two numbers.
*/
#include <iostream>
using namespace std;

int main() {
    //Variables
    int value1 = 25;
    int value2 = 75;
    int sum, difference, product, quotient;
    //if all the variables get changed to double when value1 = 25 and value2 = 75, nothing changes.
    //However when value1 = 125 and value2 = 75 you get this output:
    /*
    Sum: 150
    Difference: -100
    Product: 3125
    Quotient: 0.2
    */
    
    //Calculations
    sum = value1 + value2;
    difference = value2 - value1;
    product = value1 * value2;
    quotient = value2 / value1;
    // division (/) will divide the first value by the second
    //Modulus (%) however will return the remainder for example 75/25 = 3, but 75 % 3 = 0
    //Output
    cout << "The values are: " << value1 << " and " << value2 << "\n\n";
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
/* Output 

The values are: 25 and 75

Sum: 100
Difference: 50
Product: 1875
Quotient: 3


The values are: 125 and 25

Sum: 150
Difference: -100
Product: 3125
Quotient: 0
*/