//Program Id: FunctionTest2.cpp Starting file
//Author : Charli Pape
//Date : 11/5/24
//Description :
//		In class activity/demo - implementing functions
//		Another pass by reference example
//		Finding the maximum of 3 numbers
//		Shows a function calling another function

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes

void getData(double &x, double &y, double &z);  //stduents complete it
double findMax(double num1, double num2, double num3);
void displayValuesAndMax(double a, double b, double c);  //students implement it

int main()
{
	double value1 = 0;
	double value2 = 0;
	double value3 = 0;
	char again = 'N';

	do
	{
		cout << "Calling getData function" << endl;
		//write getData function call here
		getData(value1, value2, value3);
		
		cout << "Calling displayValuesAndMax function" << endl;
		displayValuesAndMax(value1, value2, value3);
		cout << "\ntry again? y or n: ";
		cin >> again;

	} while ( again == 'Y' || again == 'y');
	
	cout << "Goodbye " << endl;

}//main

//a pass by reference example
//This function randomly generated three number and a
//ssign the randomly generated data to the reference parameters x, y and z


void getData(double &x, double &y, double &z)
{
	//randomly generate 3 numbers 0 - 10
	srand(time(0) ); //seed the random number generator!
	//complete the remaining statements
	x = rand() % 11;
	y = rand() % 11;
	z = rand() % 11;

}

//finds max and is also a pass by value example
double findMax(double num1, double num2, double num3)
{
	double max = num1;  //set max to the first number
	if (num2 > max)		//always compare to the current max
		max = num2;
	if (num3 > max)
		max = num3;

	return max;

}

//pass by value example.  Students implement
//calling another function inside a function example
void displayValuesAndMax(double a, double b, double c)
{
	//want display to look like example output
	cout << "The random numbers are : " 
	    << a << "\t" << b << "\t" << c << endl;
	cout << "Maximum is :\t" << findMax(a, b, c) << endl;

}

/*Example output

The random values are : 3       7       3
Maximum is :    7

try again? y or n: y

The random values are : 4       9       1
Maximum is :    9

try again? y or n: y

The random values are : 1       3       8
Maximum is :    8

try again? y or n: n
Goodbye
Press any key to continue . . .




MY OUTPUT:

Calling getData function
Calling displayValuesAndMax function
The random numbers are : 4	5	7
Maximum is :	7

try again? y or n: y
Calling getData function
Calling displayValuesAndMax function
The random numbers are : 5	5	8
Maximum is :	8

try again? y or n: n
Goodbye 

*/