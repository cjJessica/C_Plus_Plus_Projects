// Files Activity 1 : Writing to a text file  STARTING CODE
// Program Name : WritingToFiles.cpp
// Author : 
// Date :
// Class : CSC100AA and CIS162AB
//
// Brief Description : This program writes 5 floating-point numbers to a file .
// Example taken from Chapter 5

#include <iostream>
#include <fstream>      //Step 1. Include the necessary header file
using namespace std;

int main()
{
	//Step 2.  Define a file stream object	
	ofstream outfile;

	double num1, num2, num3, num4, num5;

	//Step 3. Open the output file. 
	outfile.open("myscores.txt");


	//Step 4.  Use the file. 
	//In this example, get five exam scores from user
	cout << "Enter five exam scores, separated by blanks\n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	//and then write the 5 scores to the file 
	outfile << num1 << "\t" << num2 << "\t" << num3 << "\t" << num4 << "/t" << num5;

	//write a message back to the user
	cout << "Your numbers have been written to the examScores.txt file.\n\n";

	//Step 5. Close the output file
	outfile.close();


	cout << "Goodbye\n";

	return 0;
}

/* output


*/