/*
Program Name: GeometryCalculator
Author: Charli Pape
Date: 9/29/24
Brief Description: The user chooses which shape (circle, rectangle, triangle) they want the area of. The user then enters the needed info and the program outputs the area.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Defining variables
    int choice;
    double area;
    
    //Output
    cout << "***Geometry Calculator***\n\n";
    cout << "1. Calculate the area of a Circle\n";
    cout << "2. Calculate the area of a Rectangle\n";
    cout << "3. Calculate the area of a Triangle\n";
    cout << "4. Quit\n\n";
    
    //Input
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    
    //Switch case
    switch (choice)
    {
        //CASE 1 ----------------------------------------------------
        case 1:
        //defining variables
        double radius;
        
        //Input
        cout << "\nEnter the circle's radius: ";
        cin >> radius;
        
        //Input validation
        if (radius < 0)
        {
            cout << "\nOnly positive values are accepted for the radius";
            break;
        }
        
        //Calculations
        area = 3.14159 * pow(radius, 2);
        
        //Output
        cout << "\nThe area is " << area;
            break;
            
            
        //CASE 2 ----------------------------------------------------
        case 2:
        //defining variables
        double length, width;
        
        //Input
        cout << "\nEnter the rectangle's length: ";
        cin >> length;

        cout << "Enter the rectangle's width: ";
        cin >> width;
        
        //Input validation
        if (length < 0 || width < 0)
        {
            cout << "\nOnly positive values are accepted for the length and width";
            break;
        }
        
        //Calculations
        area = length * width;
        
        //Output
        cout << "\nThe area is " << area;
            break;  
            
        
        //CASE 3 ----------------------------------------------------
        case 3:
        //defining variables
        double base, height;
        
        //Input
        cout << "\nEnter the length of the base: ";
        cin >> base;

        cout << "Enter the triangle's height: ";
        cin >> height;
        
        //Input validation
        if (base < 0 || height < 0)
        {
            cout << "\nOnly positive values are accepted for the base and height";
            break;
        }
        
        //Calculations
        area = (base * height) / 2;
        
        //Output
        cout << "\nThe area is " << area;
            break;  
            
            
        //CASE 4 ----------------------------------------------------
        case 4: cout << "\nQuitting program now.";
            break;
        
        
        //DEFAULT CASE ----------------------------------------------------
        default : cout << "\nYou may only enter 1, 2, 3, or 4.";
    }
    
    cout << "\n\nThanks for using the Geometry Calculator!";
    
    return 0;
}

/*
RUN 1

***Geometry Calculator***

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice (1-4): 3

Enter the length of the base: -7
Enter the triangle's height: 5

Only positive values are accepted for the base and height

Thanks for using the Geometry Calculator!




RUN 2

***Geometry Calculator***

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice (1-4): 8

You may only enter 1, 2, 3, or 4.

Thanks for using the Geometry Calculator!




RUN 3

***Geometry Calculator***

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice (1-4): 2

Enter the rectangle's length: 9.1
Enter the rectangle's width: 2

The area is 18.2

Thanks for using the Geometry Calculator!
*/