// Program Name : FamousCS.cpp
// Author : Charli Pape
// Date : 10/27/24
// Class : CSC100AA and CIS162AB
// Brief Description : Outputs exam scores from scores-1.txt and writes the output to a file 
// called CSExamReport.txt


#include <iostream>
#include <iomanip>
#include <fstream>      //Step 1. Include the necessary header file
using namespace std;

int main()
{
	//declare variables
	double exam1, exam2, exam3, exam4, exam5;
	double average;
	string lname, fname;
	int i = 0;
	

	//define file stream object and create CSExamReport.txt
	ofstream writefile;
    writefile.open("CSExamReport.txt");
    
    //define file stream object and open scores-1.txt
	ifstream file;
	file.open("scores-1.txt");
	
	
	//cout title for both the output and writefile
	cout << "Computer Scientist Exam Report\n";
	cout << "------------------------------\n\n";
	
	writefile << "Computer Scientist Exam Report\n";
	writefile << "------------------------------\n\n";
	

	//Check if file opened successfully
	if (file)
	{
		i = 0;

		//a while loop read in and output the data to both the output and writefile
		while (file >> fname >> lname >> exam1 >> exam2 >> exam3 >> exam4 >> exam5)
		{
			average = 0;
			average = (exam1 + exam2 + exam3 + exam4 + exam5) / 5;
			cout << fname << " " << lname << " has an exam average of " << fixed << setprecision(2) << average << endl;
			writefile << fname << " " << lname << " has an exam average of " << fixed << setprecision(2) << average << endl;
			i++;
		}

		cout << "\nThere were " << i << " student records in this file.\n\n";
		cout << "All files are closed and report is written. Goodbye!";
		
		writefile << "\nThere were " << i << " student records in this file.\n\n";
		writefile << "All files are closed and report is written. Goodbye!";
		
		

		//close the file and the writefile
		file.close();
		writefile.close();
	}
	else
	{
		cout <<  "Error opening file." << endl;
	}
	

	return 0;
}


/* OUTPUT
Computer Scientist Exam Report
------------------------------

Grace Hopper has an exam average of 82.02
Alan Kay has an exam average of 83.04
John Backus has an exam average of 92.12
Sergey Brin has an exam average of 85.50
Dennis Ritchie has an exam average of 98.98
Brian Kernighan has an exam average of 97.40
Alan Turning has an exam average of 95.58

There were 7 student records in this file.

All files are closed and report is written. Goodbye!

*/