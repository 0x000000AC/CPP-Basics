// Member definitions for Account.h header file
#include <iostream>
using namespace std;
#include "Account.h" 

// Constructor: initilizes and validates balance
Account::Account( double initBalance )
{
	if ( initBalance >= 0.0 )
		balance = initBalance;
	else // If there is an invalid value, tell the person and set to 0
	{
		cout << "You have attempted an invalid input balance." << endl;
		balance = 0.0;
	} 
} // end Account constructor

// For adding money to the account
void Account::credit( double amount )
{
	balance = balance + amount; 
} // end function credit

// Withdrawl from an account function returns bool
// for if that happens or not
bool Account::debit( double amount )
{
	if ( amount > balance ) // debit amount exceeds balance
	{
		cout << "Cannot witdraw.  Withdrawl exceeds available funds." << endl;
		return false;
	} 
	else // debit amount does not exceed balance
	{
		 balance = balance - amount;
		 return true;
	} 
 } // end function debit

// Allows derived classes to update Account private member balance
void Account::setBalance( double updateBalance )
{
	balance = updateBalance;
}	

// Show balance
double Account::getBalance()
{
	return balance;
} 
