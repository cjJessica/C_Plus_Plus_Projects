/*
Program Name: Percentage
Author: Charli Pape
Date: 9/14/24
Brief Description: Detemines what percentage of questions a student got right on a test
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    //Define Variables
    string fullname;
    int num_of_questions, correct;
    double correct_percentage = 0;
    
    //Input
    cout << "Enter your first and last name: ";
    getline(cin, fullname);
    
    cout << "Enter the number of questions on the test: ";
    cin >> num_of_questions;
    
    cout << "Enter the number of answers you got correct: ";
    cin >> correct;
    
    
    //Calculations
    correct_percentage = (double)correct / num_of_questions * 100;

    
    //Output
    cout << fullname << setw(8) << fixed << setprecision(1) << correct_percentage << "%";

    return 0;
}

/*
Output:

Enter your first and last name: Charli Pape
Enter the number of questions on the test: 40
Enter the number of answers you got correct: 31
Charli Pape    77.5%

*/