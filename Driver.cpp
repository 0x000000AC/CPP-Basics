#include <iostream>
#include <iomanip> // need to ensure vals are represented to two dec. places like typical money
using namespace std;
using std::setprecision;
using std::fixed;

#include "Account.h" 
#include "SavingsAccount.h" 
#include "CheckingAccount.h" 

int main()
{
	double balance1, balance2, balance3, interestRate, transactionFee = 0; //Account inputs.  Will be changed with user input.
	cout <<  "Please enter an initial Balnce for Account1 (example 40.0): " << endl;
	cin >> balance1;
	Account Account1( balance1 ); 
    cout <<  "Please enter an inital balance and interest rate for Savings account, Account2 (example 20.0 .04): " << endl;
	cin >> balance2 >> interestRate;
	SavingsAccount Account2( balance2, interestRate );
    cout <<  "Please enter an inital balance and transaction fee for Checking account, Account3 (example 90.0 3.0): " << endl;
	cin >> balance3 >> transactionFee;
	CheckingAccount Account3( balance3, transactionFee );
	
	//Account account1( 50.0 ); // create Account object
	//SavingsAccount account2( 25.0, .03 ); // create SavingsAccount object
	//CheckingAccount account3( 80.0, 1.0 ); // create CheckingAccount object

	cout << fixed << setprecision( 2 );

	// Display what user entered
	cout << "\nAccount1 balance: $" << Account1.getBalance() << endl;
	cout << "Savings account, Account2 balance: $" << Account2.getBalance() << endl;
	cout << "Checking account, Account3 balance: $" << Account3.getBalance() << endl;

	cout << "\nNow, program will subtract dollar values specified from accounts to test their functions" << endl;
	cout << "\nDebiting $2.00 from Account1." << endl;
	Account1.debit( 2.0 ); 
	cout << "Debiting $9000.00 from account2." << endl;
	Account2.debit( 9000.0 ); 
	cout << "Debiting $40.00 from account3." << endl;
	Account3.debit( 40.0 ); 

	// Now, display the balances based on if the program was successfull or not
	cout << "\nAccount1 balance: $" << Account1.getBalance() << endl;
	cout << "Savings account, Account2 balance: $" << Account2.getBalance() << endl;
	cout << "Checking account, Account3 balance: $" << Account3.getBalance() << endl;

	system("PAUSE");

	cout << "\nNow, program will add funds to each account" << endl;
	cout << "\n$60.00 -> Account1." << endl;
	Account1.credit( 60.0 ); 
	cout << "$400.00 -> Savings account, Account2." << endl;
	Account2.credit( 400.0 ); 
	cout << "$.05 -> Checking account, Account3." << endl;
	Account3.credit( .05 ); 

	 // Now, dispaly the balances after the additions to each account
	cout << "\nAccount1 balance: $" << Account1.getBalance() << endl;
	cout << "Savings account, Account2 balance: $" << Account2.getBalance() << endl;
	cout << "Checking account, Account3 balance: $" << Account3.getBalance() << endl;

	system("PAUSE");

	// Everything has been test to this point except added interest.
	double earnedInterest = Account2.calculateInterest();
	cout << "\nSavings account, account 2 has earned $" << earnedInterest << " interest." << endl;
	cout << "Adding interest to savings account total." << endl;
	Account2.credit( earnedInterest );
	cout << "\nFinal Account2 balance: $" << Account2.getBalance() << endl;
	
	system("PAUSE");
	return 0;
 } // end main