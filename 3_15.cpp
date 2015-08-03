// Sales Commision Calculator
// A large company pays its salespeople on a commision basis.
// The salesperson recieves $200 per week plus 9% of their
// gross sales for that week.
#include <iostream>
#include <iomanip> // parameterized stream manipulators  
using namespace std;

int main()
{
   double salary; // salary of the sales person after commission
   double saleAmount; // how much the person made in a particular transaction
   
   // initialization phase
   salary = 0; 
   saleAmount = 0; 
   
   // processing phase
   // prompt for input and read saleAmount from user  
   cout << "Enter sales in dollars (-1 to end): ";        
   cin >> saleAmount; // input saleAmount or sentinel value

   // loop until sentinel value read from user   
   while ( saleAmount != -1 ) // while saleAmount is not -1
   {  
	  salary = 200 + .09 * saleAmount;

	  // Display the commission amount (with two digits of precision)
      cout << "Salary is: $" << setprecision( 2 ) << fixed << salary 
         << endl;
		 
	// prompt for input and read next saleAmount from user
      cout << "Enter sales in dollars (-1 to end): ";           
      cin >> saleAmount; // input saleAmount or sentinel value 
   } // end while
} // end main
