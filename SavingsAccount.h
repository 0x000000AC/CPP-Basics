// Header file for SavingsAccount program.  The idea here is that
// the static data mmber annualInterestRate is used to store a rate
// for the month for savers.  Their balance is input in the driver
// and their value with interest is returned after the month.

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
using namespace std;

class SavingsAccount
{
public:

	SavingsAccount()
	{
		// explicit empty body constructor
	}
	SavingsAccount(int value); // single value inputer version
	~SavingsAccount() // deconstructor for SavingsAccount
	{
		// explicit empty body destructor
	}
	static float annualInterestRate; // static interest rate input in main
	void calculateInterest(); // Will take inpt value and crunch it with inpt interest
	static void setIntererestRate(float value); // when recieved, ensures correct montly interest
	float getBalance() const // get declared as constant as the book defines as typical
	{ 
		return savingsBalance; 
	}

private:
	float savingsBalance; // private data member modified in mutator setInterestRate
};

#endif