// Program Id: StatsArray.h 
// Written By:  Charli Pape
// Date: 11/24/2024
// Brief Description:  This is the header file for the StatsArrayTester.cpp program.
//It demonstrates the class called StatsArray.

#include <iostream>
#include <iomanip>
#include <cstdlib>    // Needed to use rand() and srand()
#include <time.h>     // Needed for time functions
using namespace std;

const int SIZE = 10;  // Number of elements in the array

class StatsArray 
{
    private:
        int data[SIZE];    // array holding SIZE int values
	           
    public:
       StatsArray();      // Constructor.  Initialize all elements of data[] to 0
       
       void randomFill();
       int getSize();
       void display();
       int getTotal();
       double getAvg();
       int getLargest();
       int getSmallest();
       int countValues (int, int);
       bool isNumberFound(int);
   
};

//********************implement functions here*******************

//constructor.  fills data[] array with 0s
StatsArray :: StatsArray()
{  
    for (int i = 0; i < SIZE; i++)
        data[i] = 0;
}

//fill data[] array with random numbers (int) in the range 0 -100
void StatsArray::randomFill()
{  
     //seed the random number generator
     srand(static_cast<unsigned int>(time( NULL )));

    for (int i = 0; i < SIZE; i++)
    {
        //this is for 0-100
        data[i] = rand() % 101; 
    }
	   
}

int StatsArray::getSize()
{ return SIZE;  }

//display the contents of the array with the index in [ ] brackets
void StatsArray::display()
{
	for (int i = 0; i < SIZE; i++)
	{
	    cout << "[" << i << "] " << data[i] << endl;
	}
    

}


// Calculate and return the total of all of the array's values.
int StatsArray::getTotal()
{
    int total = 0;
    
	for (int i = 0; i < SIZE; i++)
	{
	    total += data[i];
	}
	
	return total;
}


//Calculate and return the average of the values
double StatsArray::getAvg()
{
    double total = 0.0;
    double avg = 0.0;
    
	for (int i = 0; i < SIZE; i++)
	{
	    total += data[i];
	}
	
	avg = total / SIZE;
	
	return avg;
}


//Find and return the max value
int StatsArray::getLargest()
{
    int max = data[0];
    
	for (int i = 0; i < SIZE; i++)
	{
	    if (data[i] > max)
	    {
	        max = data[i];
	    }
	}
	
	return max;
}


//Find and return the min value
int StatsArray::getSmallest()
{
    int min = data[0];
    
	for (int i = 0; i < SIZE; i++)
	{
	    if (data[i] < min)
	    {
	        min = data[i];
	    }
	}
	
	return min;
}


//Return the number of values that are >= lowRange and <= highRange
int StatsArray::countValues(int lowRange, int highRange)
{
    int count = 0;
    
	for (int i = 0; i < SIZE; i++)
	{
	    if (data[i] >= lowRange && data[i] <= highRange)
	    {
	        count++;
	    }
	}
	
	return count;
}


//Return true if the array contains a certain number, else return false
bool StatsArray::isNumberFound(int someNumber)
{
    
	for (int i = 0; i < SIZE; i++)
	{
	    if (data[i] == someNumber)
	    {
	        return true;
	    }
	}
	
	return false;
}

