// Files Activity 2 : Reading from a text file  STARTING CODE
// Program Name : ReadingFromFiles.cpp
// Author : Charli Pape
// Date : 10/22/24
// Class : CSC100AA and CIS162AB
//
// Brief Description : This program reads 5 floating-point numbers from a file
//                     and displays them.
// Example taken from Chapter 5 


#include <iostream>
#include <fstream>           //Step 1. Include the necessary header file to use files
#include <iomanip>			 //needed for setprecision in challenge
using namespace std;

int main()
{
	//Step 2. Define a file stream object
	ifstream infile;  
	
	double num1, num2, num3, num4, num5;
	double average;

    //Step 3. Open the input file  
    infile.open("myscores.txt"); //make sure the file name is correct
	
    //Step 4.  Use the file.
	//In this example, read in five exam scores from the file.
	infile >> num1 >> num2 >> num3 >> num4 >> num5;
 

	// and then display the 5 scores 
    cout << "The following numbers have been read in " << endl;
    cout << "from the data file called examScores.txt:\n";
    cout << num1 << "   " << num2 << "   "  << num3 << "   " << num4 << "   " << num5 << endl;

	//challenge
	average = (num1 + num2 + num3 + num4 + num5) / 5.0; 
	cout << fixed << setprecision(2);
	cout << "The average of the scores is: " << average << endl;

	//Step 5. Close the input file
	infile.close();

   
	cout << "Goodbye\n";

	return 0;
}

/* output 

The following numbers have been read in 
from the data file called examScores.txt:
75   89   66   77   66
The average of the scores is: 74.60
Goodbye


*/