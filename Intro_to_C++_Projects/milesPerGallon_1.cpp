//In Class Activity 
//Program ID:  MilesPerGallon
//Author:  Charli Pape
//Date Written:  9/3/24
//Class : CSC100AA
//Brief Description: Calculates miles/gallon a vehicle gets.

#include <iostream>    //must include if you want to use cout
using namespace std;

int main()
{
	//define your variables and assign values

	double gallons = 16.0;         // gas tank capacity in gallons
	double milesDriven = 400;
	double milesPerGallon = 0;

	//perform milesPerGallon calculation
	milesPerGallon = milesDriven / gallons;

		//Display your results. You can use as is.	
	cout << "The car drove " << milesDriven << " miles on "
		<< gallons << " gallons of gas.\n"
		<< "It got " << milesPerGallon << " miles per gallon.\n\n";

	return 0;
}
/*
The car drove 400 miles on 16 gallons of gas.
It got 25 miles per gallon.
*/