/*************************************************************************
*  Should inherit the functionality of an Account, but also include a data
*  member of type double indicating the interest rate (percentage) asigned
*  to the Account.  The constructor should receive the initial balance, as 
*  well as an initial value for the interest rate.  Shoul provide a public
*  member function calculateInterest that should determine this amount of
*  interest earned by an account.  member function calculateInterest should
*  determine this amount by multiplying the interest rate by the acct. bal
*  credit and debit should be inherited without modification
*************************************************************************/
#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h" 

class SavingsAccount : public Account
{
public:
	SavingsAccount( double, double ); // balance and interest rate respectively
	double calculateInterest(); 
private:
 double interestRate; 
}; 

 #endif