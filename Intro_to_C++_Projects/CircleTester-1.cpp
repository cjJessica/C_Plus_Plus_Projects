//Solution for Circle Class Activity Starting Out
//Program Id:  CircleTester.cpp  
//Author : Charli Pape
//Date : 11/12/24
//Brief Description:  This is the tester program for the Circle class. 
//  The Circle class definition can be found in Circle.h.  Make sure
//  both files are in the same folder.

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h" //class definition

using namespace std;
int main()
{
	//create a Circle object called sphere1
    Circle sphere1;//Calls default constructor          
	//create a Circle object called sphere2
    Circle sphere2(45); //calls overloaded constructor        

	//set the radius of sphere1 to 5
    sphere1.setRadius(5);
    //set the radius of sphere2 to 2.5    
	sphere2.setRadius(2.5);  

	
    cout << "SPHERE1" << endl;
	cout << "-------" << endl;
	//display the area of object sphere1
	cout << "The area = " << sphere1.calculateArea() << endl;
    //display the circumference of object sphere1
	cout << "The circumference = " << sphere1.calculateCircumference() << endl << endl ;

	
    cout << "SPHERE2" << endl;
	cout << "-------" << endl;
    //display all data associated with sphere2
	sphere2.displayData();
   
	cout << "\n***Program ending***" <<endl<< endl; 

	//system("Pause");
	return 0;
}
/*Expected output

SPHERE1
-------
The area = 78.54
The circumference = 31.416

SPHERE2
-------

The circle  data is
Radius:   2.50
Diameter:   5.00
Circumference:  15.71
Area:  19.63

***Program ending***

*/