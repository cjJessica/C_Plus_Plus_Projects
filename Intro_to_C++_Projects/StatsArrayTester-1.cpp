// Program Id: StatsArrayTester.cpp
// Written By:  Patricia Baker and Charli Pape
// Date: 11/24/2024
// Description:
//	 This program uses a StatsArray class to exam grades and reports statistics

#include <iostream>
#include <iomanip>
#include "StatsArray.h"    //StatsArray class declaration and implementation

using namespace std;

//function prototypes
bool tryAgain();


//*************************** tester program *****************************

int main()
{
	StatsArray examData;      // Create an instance of the StatsArray class
	// to manage exam data
	do
	{
		//fill array with random exam scores
		examData.randomFill();

		cout << "Exam Scores" << endl;
		cout << "-----------" << endl;
		//display array elements
		examData.display();

		//display additional array statistics such as maximum, minimum, total, average...
		cout << left << setw(20) <<  "\nThe minimum value" << right << ":" << setw(7) << examData.getSmallest();
		cout << left << setw(20) << "\nThe maximum value" << right << ":" << setw(7) << examData.getLargest();
		cout << left << setw(20) << "\nThe total is" << right << ":" << setw(7) << examData.getTotal();
		cout << left << setw(20) << "\nThe average  is" << right << ":" << setw(7) << examData.getAvg();
		cout << left << setw(20) << "\nNumber of A's" << right << ":" << setw(7) << examData.countValues(90, 100);
		
		//Check to see if there is a perfect Scores
		if (examData.isNumberFound(100))
		{
		    cout << "\nCongrats you have a perfect exam score!\n";

		} else
		{
		    cout << "\nSorry, you DO NOT have a perfect exam score.\n";
		}
		
	} while ( tryAgain() );

	return 0;
}

//function implementation
bool tryAgain()
{
	char again = 'Y';
	bool flag = false;
	cout << "\nDo you want to try again?  (Y or N) ";
	cin >> again;

	if (toupper(again) == 'Y')
		flag = true;

	return flag;

}

//OUTPUT:
/*

Exam Scores
-----------
[0] 75
[1] 82
[2] 54
[3] 100
[4] 74
[5] 80
[6] 5
[7] 89
[8] 96
[9] 79

The minimum value  :      5
The maximum value  :    100
The total is       :    734
The average  is    :   73.4
Number of A's      :      2
Congrats you have a perfect exam score!

Do you want to try again?  (Y or N) n
*/

