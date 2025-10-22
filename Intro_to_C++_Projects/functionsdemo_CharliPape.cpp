/*********************************
 Functions demo.  
 Intro to writing functions

Charli Pape
 *********************************/

#include <iostream>
using namespace std;


int findMax(int firstNumber, int secondNumber); //function prototype
int main()
{
	int maxNum = 0;
	int firstNumber;
	int secondNumber;

	
	cout << "First Integer Number: ";
	cin >> firstNumber;

	cout << "Second Integer Number: ";
	cin >> secondNumber;
	
	//calling or invoking the function
	maxNum = findMax(firstNumber, secondNumber);

	cout << "The maximum number = " <<  maxNum << endl <<endl;
	
	return 0;

}//end of main

/* Define our findMax function
name:
input parameters:
body of the function: find the max of two numbers
output: return value

*/

int findMax(int firstNumber, int secondNumber)
{
    int maxNum;
    if (firstNumber > secondNumber)
	{
		maxNum = firstNumber;
	}
	else {
		maxNum = secondNumber;
	}
	
	return maxNum;
}
/*OUTPUT

First Integer Number: 45
Second Integer Number: 34
The maximum number = 45


*/




