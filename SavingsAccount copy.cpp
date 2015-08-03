#include "SavingsAccount.h" 
// Constructor: takes in init value and interest rate.
 SavingsAccount::SavingsAccount( double initBalance, double rate )
	: Account( initBalance ) 
{
	interestRate = ( rate < 0.0 ) ? 0.0 : rate; 
} 

// Show how much was earned base on interest rate
double SavingsAccount::calculateInterest()
{
	return getBalance() * interestRate;
} 