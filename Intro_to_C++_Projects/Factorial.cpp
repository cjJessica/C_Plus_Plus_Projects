// Program ID: Factorial
// Author: Charli Pape
// Date Written: 10/13/24
// Class : CSC100AA or CIS162AB 
/*
  Brief Description:  Gets a number between 1 and 10 from the user. The prgram than computes the factorial of that number

*/
#include <iostream>
using namespace std;

int main()
{
    //Define Variable
    int user_num = 100;
    
    //Input
    cout << "Calculating a Factorial\n";
    
    //Keeps the program running until 0 is entered
    while (user_num != 0)
    {
        cout << "\nEnter a value between 1 and 10. (0 to quit): ";
        cin >> user_num;
        
        //Input validation
        while ((user_num < 0) || (user_num > 10))
        {
            cout << "The value is out of range.\n";
            cout << "Please re-enter a value between 1 and 10. (0 to quit): ";
            cin >> user_num;
        }
    
    
        //Calculte Factorial and define variables for the FOR loop
        int total = 1;
        int i;
        for (i=1; i <= user_num; i++)
        {
            total *= i;
        }
        
        //Output
        if (user_num != 0)
        {
            cout << "---------------\n";
            cout << user_num << "! = " << total << endl;
        }

    }
    
    //Exit Output
    cout << "Goodbye!";
    
    return 0;
}

/*
OUTPUT:
Calculating a Factorial

Enter a value between 1 and 10. (0 to quit): 22
The value is out of range.
Please re-enter a value between 1 and 10. (0 to quit): 7
---------------
7! = 5040

Enter a value between 1 and 10. (0 to quit): 0
Goodbye!
*/