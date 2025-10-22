//Program Id: CheckingAccount.h
//Author: Charli Pape
//DateL 12/8/24
//Description: This is a header file. It includes a subclass called CheckingAccount and it'
//superclass is BankAccount. This subclass adds a transaction fee feature.


#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "ch11_BankAccount.h"
using namespace std;

class CheckingAccount : public BankAccount
//CheckingAccount (subclass) inherits from BankAccount (superclass)
{
    private:
            //declare member/instance variable
            double transactionFee;
            
    public:
            //declare function prototypes
            CheckingAccount();
            
            void setTransactionFee(double trFee);
            double getTransactionFee();
            void deposit(double amount);
            void withdraw(double amount);
            void displayData();
            
}; //end of CheckingAccount class


//Member function implementation section ---------------------------


// constructor first calls the BankAccount constructor then initializes transactionFee
CheckingAccount::CheckingAccount() : BankAccount()
{
    transactionFee = 1.00;
}


//sets instance variable transactionFee
void CheckingAccount::setTransactionFee(double trFee)
{
    transactionFee = trFee;
}


//returns the value of instance variable transactionFee
double CheckingAccount::getTransactionFee()
{
    return transactionFee;
}


//adds the amount to the balance and subtracts the transactionFee from the balance
void CheckingAccount::deposit(double amount)
{
    balance += amount;
    balance -= transactionFee;
}


//subtracts the amount to the balance and subtracts the transactionFee from the balance
void CheckingAccount::withdraw(double amount)
{
    balance -= amount;
    balance -= transactionFee;
}


//displays the current values of all instance variables of a checking account. 
//method overriding 
void CheckingAccount::displayData()
{
    //call BankAccount's displayData function
    BankAccount::displayData();
    cout << fixed << showpoint << setprecision(2);
    cout << "Transaction Fee: " << setw(14) << transactionFee << endl;
}


/* OUTPUT


         Welcome to your bank 

1. Make a deposit
2. Make a withdrawal
3. Set the account name
4. Set the account number
5. Set the transaction fee
6. Display account information
7. Exit

Please enter your choice: 6

   Account Information   
-------------------------
         Number:              0
           Name:        Unknown
        Balance:           0.00
Transaction Fee:           1.00

         Welcome to your bank 

1. Make a deposit
2. Make a withdrawal
3. Set the account name
4. Set the account number
5. Set the transaction fee
6. Display account information
7. Exit

Please enter your choice: 1

Deposit amount. Enter value: -50
Enter value: (0 or greater): 50

         Welcome to your bank 

1. Make a deposit
2. Make a withdrawal
3. Set the account name
4. Set the account number
5. Set the transaction fee
6. Display account information
7. Exit

Please enter your choice: 3

Enter the name: Joe Smith

         Welcome to your bank 

1. Make a deposit
2. Make a withdrawal
3. Set the account name
4. Set the account number
5. Set the transaction fee
6. Display account information
7. Exit

Please enter your choice: 4

Account number. Enter value: 23456

         Welcome to your bank 

1. Make a deposit
2. Make a withdrawal
3. Set the account name
4. Set the account number
5. Set the transaction fee
6. Display account information
7. Exit

Please enter your choice: 6

   Account Information   
-------------------------
         Number:          23456
           Name:      Joe Smith
        Balance:          49.00
Transaction Fee:           1.00

         Welcome to your bank 

1. Make a deposit
2. Make a withdrawal
3. Set the account name
4. Set the account number
5. Set the transaction fee
6. Display account information
7. Exit

Please enter your choice: 7


Bank is closed.


*/
