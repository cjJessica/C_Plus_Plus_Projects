// Program Id: MultiArrayTester.cpp  SKELETON CODE.  
// Written By:  Patricia Baker and Charli Pape
// Date: 12/1/24
// Description:
//	This program uses a MultiStatsArray class to keep exam grades and report statistics
// 

#include <iostream>
#include <iomanip>

#include "MultiStatsArray.h"    //class declaration and implementation

using namespace std;

//function prototypes
bool tryAgain();


int main()
{
   MultiStatsArray examData; // Create an instance of the MultiStatsArray class
                             // to manage exam data.  10 rows, 5 columns
  
	
  do
  {
	   //fill array with random exam scores	  
	   examData.randomFill();
       
       cout << "Exam Scores" << endl;
	   cout << "-----------" << endl;
	   
       //display array and row total and row average
	   examData.display();

	   //display additional array statistics such as maximum, minimum, array total,
       //array average, number of A's, perfect score
       cout << "\n";
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
	bool flag  = false;
	char again = 'Y';
	cout << "\nDo you want to try again?  (Y or N) ";
	cin >> again;
	cout << endl;
	if (toupper(again) == 'Y')
		flag = true;

	return flag;
} 


/* OUTPUT


Exam Scores
-----------

[0]     96     12     76     45     84      Total:313      Avg:62.6
[1]     44     47     26     83     15      Total:215      Avg:43
[2]     71     47     31     99     24      Total:272      Avg:54.4
[3]     99     59     90     22     43      Total:313      Avg:62.6
[4]     44     52     31     22     37      Total:186      Avg:37.2
[5]     64      3     91     77     44      Total:279      Avg:55.8
[6]     58     38     56      0     84      Total:236      Avg:47.2
[7]      5     44     30     99     94      Total:272      Avg:54.4
[8]     11     69     40     42     67      Total:229      Avg:45.8
[9]     65      6     25     20     95      Total:211      Avg:42.2

The minimum value  :      0
The maximum value  :     99
The total is       :   2526
The average  is    :  50.52
Number of A's      :      8
Sorry, you DO NOT have a perfect exam score.

Do you want to try again?  (Y or N) n


*/
