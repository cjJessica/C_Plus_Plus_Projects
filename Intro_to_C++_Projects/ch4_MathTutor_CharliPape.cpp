/*
Program Name: MathTutor
Author: Charli Pape
Date: 9/22/24
Brief Description: Generates two random numbers between 10 and 49. The user then adds them together and the program checks if it's correct or not
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{   //Defining variables
    int user_answer, correct_answer;
    
    //Defining variables with random values between 10 and 49
    srand(time(0));
    int num1 = rand()%38 + 10;
    int num2 = rand()%38 + 10;
    
    //Outputing the variables
    cout << "Math Flash Card\n";
    cout << "---------------\n\n";
    
    cout << setw(7) << num1 << endl;
    cout << "+" << setw(6) << num2 << endl;
    cout << setw(8) << "-----\n";
    
    //Asking user to input the correct answer
    cout << setw(5) << " ";
    cin >> user_answer;
    
    //Calculations
    correct_answer = num1 + num2;
    
    //Comparing the user's answer to the correct one
    if (user_answer == correct_answer)
    {
        cout << "\nCongratulations! That's correct.";
    }
    else
    {
        cout << "\nSorry, the correct answer is " << correct_answer;
    }
    

    return 0;
}

/*
OUTPUT for wrong guess:

Math Flash Card
---------------

     39
+    46
  -----
     4

Sorry, the correct answer is 85



OUTPUT for correct guess:

Math Flash Card
---------------

     37
+    26
  -----
     63

Congratulations! That's correct.
*/