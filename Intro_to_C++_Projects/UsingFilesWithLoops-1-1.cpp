//Files Activity 3 : File Errors and using a Loop to read data from a file  STARTING CODE
//Program Name : UsingFilesWithLoops.cpp 
// Written by : Charli Pape
// Date : 10/22/24
// Class : CSC100 and CIS162
// Brief Description:
//		This program checks for file errors and uses a loop to read values
//		from an existing file. 
//	
// Needs testData.txt in the project folder
// Can create using Visual Studio.  Right-Click Source Files > Add > New Item > Utility > 
 
 

#include <iostream>			 
#include <fstream>           // Step 1. Include necessary header file
using namespace std;

int main()
{
	
	//Step 2.  Define a file stream object
	ifstream infile;     
    double num = 0;	 //value read in from the file
	double sum = 0;  //the sum of all values read from the file
	int i = 0;       //used to count how many values read from the file
	string lname, fname;
	
	cout << "This program reads data from a file" << endl;
    cout << "-----------------------------------" << endl;
	
	//Step 3. Open the file
   infile.open("testData.txt");

   // << insertion operator - cout and ofstream objects for writing
   // >> extraction operator - cin and ifstream objects for reading
   //Step 4 . Use the file. 
   if (infile)  //successfully opened file
   {
	   cout << "Please update this program." << endl;
	   
	   // Read in data using a while loop and display the data
	   i = 0;
	   sum = 0;
	   while(infile >> num >> lname >> fname)
	   {
	       cout << fname << " " << lname << " has a score of " << num << endl;
	       i++;
	       sum += num;
	   }
	   
   
		cout << "There were " << i << " values in the file." << endl;
		cout << "The sum of all the values is " << sum << "." << endl << endl;
	
		// Step 5. Close the file.
		infile.close();
   }		
   else //problem opening the file
   {
       cout << "Error opening file." << endl;
   }  
 
   return 0;
}

/* output

This program reads data from a file
-----------------------------------
Please update this program.
George Washingtonhas a score of 95
John Adamshas a score of 97
Thomas Jeffersonhas a score of 98
James Madisonhas a score of 100
James Monroehas a score of 93
There were 5 values in the file.
The sum of all the values is 483.

*/