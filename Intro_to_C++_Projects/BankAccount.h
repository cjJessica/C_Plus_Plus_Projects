// Program Id: BankAccount.h
// Author: Charli Pape
// Brief Description : This program demonstrates class called BankAccount. It is the header file
//for the Bank.cpp program.

#include <iostream> //needed for output
#include <cmath> //needed for pow function
#include <iomanip> // needed for formatting
using namespace std;


//BankAccount class declaration
class BankAccount
{
    //defining private variables
    private:
        int acctNumber;
        string name;
        double balance;
    
    //defining public variables
    public:
        BankAccount(); //Default constructor
        BankAccount(int aNum, string aName, double amount); //overloaded constructor
        
        //sets instance variable constructors
        void setAcctNumber(int aNum);
        void setName(string aName);
        
        //returns instance variable constructors
        int getAcctNumber();
        string getName();
        double getBalance();
        
        //calculation constructors
        void deposit(double amount);
        void withdraw(double amount);
        
        void displayData();
        
}; //end of class


BankAccount::BankAccount()
{
    acctNumber = 0;
    name = "Unknown";
    balance = 0.0;
}

BankAccount::BankAccount(int aNum, string aName, double amount)
{
    acctNumber = aNum;
    name = aName;
    balance = amount;
}


//Functions for seting the instance variables

void BankAccount::setAcctNumber(int aNum)
{
    acctNumber = aNum;
}

void BankAccount::setName(string aName)
{
    name = aName;
}


//Functions for returning the value of instance variables
int BankAccount::getAcctNumber()
{
    return acctNumber;
}

string BankAccount::getName()
{
    return name;
}

double BankAccount::getBalance()
{
    return balance;
}

//Functions for calculations
void BankAccount::deposit(double amount)
{
    balance += amount;
}

void BankAccount::withdraw(double amount)
{
    balance -= amount;
}

//Function that display output
void BankAccount::displayData()
{
    cout << "Account Information\n";
    cout << "-------------------\n";
    
    cout << right << "Number: " << setw(12) << acctNumber << endl;
    cout << right << "Name: " << setw(14) << name << endl;
    cout << right << "Balance: " << setw(11) << fixed << setprecision(2) << balance << endl;
}

