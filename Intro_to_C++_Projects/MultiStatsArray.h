// Program Id: MultiStatsArray.h   SKELETON CODE.
// Written By:  Patricia Baker and Charli Pape
// Date: 12/1/24
// Description:
// This program uses a MultiStatsArray class to keep exam grades and report statistics
// 

#include <iostream>
#include <iomanip>
#include <cstdlib>          // Needed to use rand() and srand()
#include <time.h>		    // Needed for time functions
using namespace std;

const int ROWSIZE = 10;     // Number of rows in the array 
const int COLSIZE = 5;      // Numbe of columns in each row of the array

class MultiStatsArray 
{
private:
	int data[ROWSIZE][COLSIZE];    // 2DArray holding ROWSIZE x COLSIZE int values
	           
public:
   MultiStatsArray();               // Constructor.  Initialize all elements to 0
   
   
   void randomFill();
   int getRowSize(); 
   int getColSize();
   int getTotal();
   int getRowTotal(int);
   double getAvg();
   double getRowAvg(int);
   int getLargest();
   int getSmallest();
   int countValues (int, int);
   bool isNumberFound(int);
   void display();

};

/************************************************************
 *                  MultiStatsArray constructor             *
 *                       fill array with 0
 ************************************************************/
MultiStatsArray::MultiStatsArray()             
   {  for (int r = 0; r < ROWSIZE; r++)
		for (int c = 0; c < COLSIZE; c++)
         data[r][c] = 0;
   }

//Continue to implement the other functions here
void MultiStatsArray::randomFill()
{
	//seed the random number generator
	srand( time(0) );

	//your code goes here to fill the array with 
	//random numbers from 0 - 100. Use a nested for loop! 
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
	        data[r][c] = rand() % 101;
	    }
	}
	
}

int MultiStatsArray::getRowSize()
{  return ROWSIZE;  }


int MultiStatsArray::getColSize()
{ return COLSIZE;  }

void MultiStatsArray::display()
{
	for (int r = 0; r < ROWSIZE; r++)
	{
	    cout << "\n[" << r << "]";
	    for (int c = 0; c < COLSIZE; c++)
	    {
	        cout << setw(7) << data[r][c] << setw(7);
	    }
	    cout << setw(12) << "Total:" << getRowTotal(r);
	    cout << setw(10) << "Avg:" << getRowAvg(r);
	}	
}



// Calculate and return the total of all of the array's values.
int MultiStatsArray::getTotal()
{
    int total = 0;
    
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
	        total += data[r][c];
	    }
	}
	
	return total;
}


//Calculate and return the total of the values stored in a given row
int MultiStatsArray::getRowTotal(int r)
{
    int rowTotal = 0;
    
    for (int c = 0; c < COLSIZE; c++)
    {
        rowTotal += data[r][c];
    }
    
    return rowTotal;
}


//Calculate and return the average of the values
double MultiStatsArray::getAvg()
{
    double total = 0.0;
    double avg = 0.0;
    
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
	        total += data[r][c];
	    }
	}
	
	avg = total / (ROWSIZE * COLSIZE);
	
	return avg;
}


//Calculate and return the average of the values in a given row in the array
double MultiStatsArray::getRowAvg(int r)
{
    double rowTotal = 0.0;
    double avg = 0.0;
    
    
    for (int c = 0; c < COLSIZE; c++)
    {
        rowTotal += data[r][c];
    }
    
    avg = rowTotal / COLSIZE;
    
    return avg;
}

//Find and return the max value
int MultiStatsArray::getLargest()
{
    int max = data[0][0];
    
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
    	    if (data[r][c] > max)
    	    {
    	        max = data[r][c];
    	    }	        
	    }

	}
	
	return max;
}


//Find and return the min value
int MultiStatsArray::getSmallest()
{
    int min = data[0][0];
    
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
    	    if (data[r][c] < min)
    	    {
    	        min = data[r][c];
    	    }	        
	    }

	}
	
	return min;
}



//Return the number of values that are >= lowRange and <= highRange
int MultiStatsArray::countValues(int lowRange, int highRange)
{
    int count = 0;
    
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
	        if (data[r][c] >= lowRange && data[r][c] <= highRange)
    	    {
    	        count++;
    	    }
	    }
	}
	
	return count;
}


//Return true if the array contains a certain number, else return false
bool MultiStatsArray::isNumberFound(int someNumber)
{
    
	for (int r = 0; r < ROWSIZE; r++)
	{
	    for (int c = 0; c < COLSIZE; c++)
	    {
	        if (data[r][c] == someNumber)
    	    {
    	        return true;
    	    }
	    }
	}
	
	return false;
}
