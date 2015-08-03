// Driver for SavingsAccount class.  Takes initial values
// of $2000.00 and $3000.00 respectively for two savings 
// accounts and shows their return after a month with 
// 3% interest and then 4% interest

#include <iostream>
#include "SAVINGSACCOUNT.h" // SavingsAccount Class Definition
using namespace std;

int main()
{

	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);

	SavingsAccount::setIntererestRate(3); // Change the 0% initialized state to 3%
	saver1.calculateInterest();
	cout << "At 3% monthly interest, Saver 1's value is: $" << saver1.getBalance() << endl;
	saver2.calculateInterest();
	cout << "At 3% monthly interest, Saver 2's value is: $" << saver2.getBalance() << endl;

	cout << endl; // separate 2% section from 4%

	SavingsAccount::setIntererestRate(4); // set the new Interest rate to 4%
	saver1.calculateInterest();
	cout << "At 4% monthly interest, Saver 1's value is: $" << saver1.getBalance() << endl;
	saver2.calculateInterest();
	cout << "At 4% monthly interest, Saver 1's value is: $" << saver2.getBalance() << endl;

	cout << endl; // print a new line, purely for aesthetics

	system("PAUSE"); // Pause after calculating.  Enter/Return closes program.

	return 0;
} // end main