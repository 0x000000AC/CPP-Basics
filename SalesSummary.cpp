// Sales Summary Assignment:
// Use a two-dimensional array to solve the following problem.
// A company has four sales people (1 to 4) who sell five products (1 - 5).
// Create montly data, display employees in columns and product in rows.

#include <iostream>
using namespace std;

int main()
{
	const int employees = 4; // number of employees
	const int transaction = 5; // number of transactions for the month
	double sales[ employees ][ transaction ] =
		{ { 40, 13, 30, 10, 50 },
		  { 80, 40, 40, 12, 15 },
		  { 11, 22, 33, 44, 55 },
		  { 12, 34, 56, 78, 90 } }; // Two-dimensional array  Employee x Sales Transaction
	int row = 0, column = 0; // Initilizing inner and outer 'for' loop variables
	double total,grandtotal = 0;
	
	cout << "Salesman->   \t1\t2\t3\t4\tItem Total\n\n"; // top of the table

	for ( column = 0; column < transaction; column++ )
	{
		cout <<"Product#\t" << (column+1) << "\t";
		total = 0;
		for ( row = 0; row < employees; row++)
		{
			total+=sales[row][column];
			cout << sales[row][column] << "\t";
		}
		cout << total << endl;
		grandtotal+=total;
	} // end outer for
	
	cout << "\nTotals: \t\t";
	for ( column = 0; column < employees; column++ )
	{
		total = 0;
		for ( row = 0; row < transaction; row++)
		{
			total+=sales[column][row];
		}
		cout << total << "\t";		
	} // end outer for
	cout << grandtotal << endl;

	return 0;
} // end main
