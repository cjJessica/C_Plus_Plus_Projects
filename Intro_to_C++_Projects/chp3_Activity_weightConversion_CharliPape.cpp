// Program ID: WeightConversion 
// Author: Charli Pape
// Date Written: 9/10/24
// Class : CSC100AA or CIS162AB 
/*
  Brief Description:  This program prompts the user for a weight in pounds 
 and converts the weight to kilograms.   kilograms = pounds / 2.21 

*/
#include <iostream> 
using namespace std; 
int main () 
{ 
    //Define variables
    double pounds = 0, kilograms = 0;
    const double CONVERSION = 2.21;
    
    //Your code goes here
    //Prompt the user to enter the weight in pounds
    cout << "Enter weight in pounds: ";
    
    //Read the value entered into a variable, pounds
    cin >> pounds;
    
    //Write the statement to convert the pounds to kilograms and store the result in a //variable (kilograms)
    kilograms = pounds / CONVERSION;
    
    //Display the weight in pounds and the converted kilograms to the console //window
    cout << "Size of double " << sizeof(double) << endl;
    
    cout << "Weight in kilograms: " << kilograms << " and weight in pounds: " << pounds;
	
	return 0; 
} 
/*
OUTPUT:
Enter weight in pounds: 300
Size of double 8
Weight in kilograms: 135.747 and weight in pounds: 300

*/