// Solution for Circle Class Activity-Starting out
// Program Id: Circle.h
// Author: PBaker
// Brief Description : This program demonstrates a simple class to represent a circle with a radius.
// Member functions defined outside the class declaration.

#include <iostream> //needed for output
#include <cmath> //needed for pow function
#include <iomanip> // needed for formatting
using namespace std;



// Circle class declaration
class Circle
{	private:
		double radius;
		
	public:
	    Circle();//Default constructor
	    Circle(double); //overloaded constructor
	    double getRadius();
		void  setRadius(double r);
		double calculateArea();
		double calculateCircumference();
		double calculateDiameter() ;
		void  displayData( );
		
};//end of class

Circle::Circle()
{
    radius = 0;
}

Circle::Circle(double r)
{
    radius = 0;
}

// Member function implementation section

//*****************************************************************
//                      Circle::setRadius                         
// This function copies the argument passed into the parameter to 
// the private member variable radius.                            
//*****************************************************************
void Circle::setRadius(double r)
{   
    radius = r; 
}



//*****************************************************************
//                        Circle::calculateArea                         
// This function calculates and returns the Circle object's area. 
// It does not need any parameters because it already has access  
// to the member variable radius.                                 
//*****************************************************************
double Circle::calculateArea()
{   
    return 3.1416 * pow(radius, 2); 
}

//*****************************************************************
//                      Circle::calculateCircumference
// This function calculates and returns the circumference of a circle
// object.  It does not need any parameters because it already has                                          *
// access to the member variable radius.                                                               *
//*****************************************************************
double Circle::calculateCircumference() 
{
	return (2 * 3.1416 * radius);
}


//*****************************************************************
//                      Circle::calculateDiameter                       *
// This function calculates and returns the diameter of a circle
// object.  It does not need any parameters because it already has                                          *
// access to the member variable radius.                                                               *
//*****************************************************************
double Circle::calculateDiameter() 
{
	return(2 * radius);
}

//*****************************************************************
//                      Circle::displayData    
// This function displays all of the data associated with a Circle
// object
//*****************************************************************
void Circle::displayData()
{
	// Output results
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe circle  data is\n";
    cout << "        Radius: " << setw(6) << radius << endl;
    cout << "      Diameter: " << setw(6) << calculateDiameter() << endl;
    cout << " Circumference: " << setw(6) << calculateCircumference() << endl;
    cout << "          Area: " << setw(6) << calculateArea() << endl;

}