/*
Program Name: Percentage
Author: Charli Pape
Date: 9/14/24
Brief Description: Calculates current(amps) and power dissipation based on the user's input
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    //Define Variables
    double voltage, resistance, amps, power;
    
    
    //Input
    cout << "Enter the voltage: ";
    cin >> voltage;
    
    cout << "Enter the resistance: ";
    cin >> resistance;
    
    
    //Calculations
    amps = voltage / resistance;
    power = pow(amps, 2) * resistance;

    
    //Output
    cout << "\n\nGiven a voltage (V) of: " << voltage << " and resistance (R) of: " << resistance << endl;
    cout << "The amps (I) are: " << fixed << setprecision(2) << amps << endl;
    cout << "The power (P) is: " << fixed << setprecision(2) << power << endl;

    return 0;
}

/*
Output:

Enter the voltage: 140
Enter the resistance: 9.3


Given a voltage (V) of: 140 and resistance (R) of: 9.3
The amps (I) are: 15.05
The power (P) is: 2107.53

*/