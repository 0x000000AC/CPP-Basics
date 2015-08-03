#include <iostream>
using namespace std;
#include "CheckingAccount.h" 

// Constructor: Take initial balance and transaction fee.
CheckingAccount::CheckingAccount( double initBalance, double fee )
		: Account( initBalance ) 
{
	transactionFee = ( fee < 0.0 ) ? 0.0 : fee; 
} // end CheckingAccount constructor

// Add to balance as well as charge transaction fee
 void CheckingAccount::credit( double amount )
{
	Account::credit( amount ); 
	chargeFee();
} 

// Withdraw amount.  Local var success begins the process.
bool CheckingAccount::debit( double amount )
{
	bool success = Account::debit( amount ); // attempt to debit

	if ( success ) // If true, charge fee and return true
	{
		chargeFee();
		return true;
	} 
	else 
		return false;
 } 

// Subtract the additional transaction fee if using checking
void CheckingAccount::chargeFee()
{
	Account::setBalance( getBalance() - transactionFee );
	cout << "$" << transactionFee << " is the transaction fee for this." << endl;
} 
