// Implementation file for SavingsAccount program.
// Constructor and class member function definitions
// are found here.

#include <iostream>
#include "SAVINGSACCOUNT.h" // SavingsAccount class definition
using namespace std;

// Single parameter SavingsAccount constructor.  If input
// is given in main(), the value will be stored to the 
// savingsBalance private data member.
SavingsAccount::SavingsAccount(int value)
{
	savingsBalance = value;
}

// annualInterestRate private data member initialized
float SavingsAccount::annualInterestRate = 0;

// calculate Interest will update the balance of an instantiated
// SavingsAccount object based on initial balance and input interest rate
void SavingsAccount::calculateInterest()
{
	savingsBalance += (	( savingsBalance * annualInterestRate ) / 12 );
}

// mutator methods that updates the annual interest rate based
// on driver input
void SavingsAccount::setIntererestRate(float value)
{
	annualInterestRate = value;
}
