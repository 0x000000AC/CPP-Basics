/*************************************************************************
* Base Account should include one data member of type double to represent
* the account balance.  The class should provide a constructor that 
* receives and initial balance and uses it to initialize the data member.
* The constructor should validate the initial balance to ensure that it's
* greater than or equal to 0.0.  If not, the balance should be set to 0.0
* and the constructor should display an error message, indicating that the
* initial balance was invalid.  
************************************************************************/
 #ifndef ACCOUNT_H
 #define ACCOUNT_H

class Account
{
public:
	Account( double ); // Constructor takes init. balance
	void credit( double ); // When money is added to account
	bool debit( double ); // Withdrawl money. Bool returned if does/doesn't
	void setBalance( double ); 
	double getBalance(); 
private:
	double balance; 
}; 

 #endif