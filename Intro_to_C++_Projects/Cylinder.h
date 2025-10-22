#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h"
using namespace std;

class Cylinder : public Circle
{
    private:
        double length;
        
    public:
        Cylinder(); //default
        Cylinder(double, double); //overloaded
        
        void setLength(double);
        double getLength();
        double calculateVolume();
        void displayData();
};


Cylinder::Cylinder() : Circle()
{
    length = 0;
}

Cylinder::Cylinder(double r, double l) : Circle(r)
{
    length = l;
}

void Cylinder::setLength(double l)
{
    length = l;
}

double Cylinder::getLength()
{
    return length;
}

double Cylinder::calculateVolume()
{
    return calculateArea() * length;
    //Circle :: calculateArea() * length
}

void Cylinder::displayData() //method overriding
{
    cout << fixed << showpoint << setprecision(2);
    Circle::displayData();
    cout << "\n the cylinder data is \n";
    cout << "   Length: " << setw(6) << length << endl;
    cout << "   Volume: " << setw(6) << calculateVolume() << endl;
}