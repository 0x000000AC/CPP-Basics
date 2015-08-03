/*****************************************************************************
* Derived class CheckingAccount should inherit from base class Account and include
* an additional data member of type double that represents the fee charged per
* transaction.  Teh constructor should receive the initial balance, as well as a
* parameter indicating a fee amount.  Should redefine member functions credit
* and debit so that they subtract the fee from the account balance whenever either 
* transaction is performed successfully.  These should ue Checking account's 
* versions to perform updates to the balance.
*****************************************************************************/
#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h" // Base Class

class CheckingAccount : public Account
{
public:
	CheckingAccount( double, double ); // Takes balance and transaction fee
	void credit( double ); // Modified credit function
	bool debit( double ); // Modified debit function
private:
	double transactionFee; 
	void chargeFee(); // Utility for Charging
}; 

 #endif