//In Class Activity 
//Program ID : TicketPrice.cpp
//Author : Charli Pape
//Date Written : 9/24/2024
//Class : CSC100AA or CIS162AB
//Brief Description:
//		This program determines ticket price based on age.  Uses an if..else if

#include <iostream>
using namespace std;

int main()
{
	int age = 0;
	double price = 0.0;

	cout << "Movie Ticket Price Calculator\n";
	cout << "Your age please: ";
	cin >> age;

	cout << "Enter ticket price : ";
	cin >> price;
	


	//calculate the ticket prices  and display a message
	//based on your if..else if..else statement
	
	if (age <= 5)
	{
	    price = 0.0;
	    cout << "The price is " << price << endl;
	}
	
	else if ((age >= 6) && (age <= 20))
	{
	    price = price / 2;
	    cout << "The price is " << price << endl;
	}
	else
	{
	    cout << "The price is " << price << endl;

	}


	return 0;
}