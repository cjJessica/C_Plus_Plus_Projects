// Program Name : LowestScoreDrop.cpp
// Author : Charli Pape
// Date : 11/10/24
// Class : CSC100AA and CIS162AB
// Brief Description : The program asks the user for 5 test scores. It will then drop the lowest score and then return the
//average of the four highest ones.

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getScore(int &score);
int findlowest(int s1, int s2, int s3, int s4, int s5);
void calcAverage(int s1, int s2, int s3, int s4, int s5);


int main()
{
    //defining variables
    int score1, score2, score3, score4, score5;
    char again = 'Y';
    
    do 
    
    {
        cout << "\nWhen you enter 5 test scores, I will drop the lowest one and find the average of the four highest ones.\n\n";
    
        //Calling getScore() function five times
        getScore(score1);
        getScore(score2);
        getScore(score3);
        getScore(score4);
        getScore(score5);
        
        //Call calcAverage to get the average of the top 4 scores
        calcAverage(score1, score2, score3, score4, score5);
        
        //Ask if user wants to run the program again
        cout << "\n\nDo you want to try again for the next set of scores? ";
        cin >> again;
        
    } while (again == 'y' || again == 'Y');

    cout << "\nGoodbye!";
    
    return 0;
}


//getScore() function
void getScore(int &score)
{
    //Ask user for input about test score
    cout << "Enter a test score between 0 and 100: ";
    cin >> score;
    
    //Validate the input
    while (score < 0 || score > 100)
    {
        cout << "Please re-enter value between 0 and 100\n";
        
        cout << "\nEnter a test score between 0 and 100: ";
        cin >> score;        
    }
    
}


//findlowest() funtion
int findlowest(int s1, int s2, int s3, int s4, int s5)
{
    //Set the lowest to the 1st value
    int min = s1;
    
    //Compare the rest of the values to the current min
    if (s2 < min)
        min = s2;
    if(s3 < min)
        min = s3;
    if(s4 < min)
        min = s4;
    if(s5 < min)
        min = s5;
        
    //return the lowest test score
    return min;
}


//calcAverage() function
void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
    //define variables
    double total = 0;
    double average;
    int min;
    
    //Find the total of all the values
    total = s1 + s2 + s3 + s4 + s5;
    
    //Call the findlowest() function in order to minus the total by the lowest value
    total -= findlowest(s1, s2, s3, s4, s5);
    
    //Calculate the average
    average = total / 4;
    
    cout << "\nAfter dropping the lowest score, the test average is " << fixed << setprecision(2) << average;
}

/*
OUTPUT:



When you enter 5 test scores, I will drop the lowest one and find the average of the four highest ones.

Enter a test score between 0 and 100: 82
Enter a test score between 0 and 100: 77
Enter a test score between 0 and 100: 70
Enter a test score between 0 and 100: 90
Enter a test score between 0 and 100: 81

After dropping the lowest score, the test average is 82.50

Do you want to try again for the next set of scores? Y

When you enter 5 test scores, I will drop the lowest one and find the average of the four highest ones.

Enter a test score between 0 and 100: 56
Enter a test score between 0 and 100: 78
Enter a test score between 0 and 100: 67
Enter a test score between 0 and 100: 72
Enter a test score between 0 and 100: 70

After dropping the lowest score, the test average is 71.75

Do you want to try again for the next set of scores? Y

When you enter 5 test scores, I will drop the lowest one and find the average of the four highest ones.

Enter a test score between 0 and 100: 90
Enter a test score between 0 and 100: 89
Enter a test score between 0 and 100: 88
Enter a test score between 0 and 100: 92
Enter a test score between 0 and 100: 91

After dropping the lowest score, the test average is 90.50

Do you want to try again for the next set of scores? N

Goodbye!
*/