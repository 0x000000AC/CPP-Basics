// Sales Summary:
// Use a two-dimensional array to solve the following problem.
// A company has four sales people (1 to 4) who sell five products (1 - 5).
// Once a day, each sales person passes in a slip for each different type

#include <iostream>
using namespace std;
int main()
{
	double sales[4][5] =
		{ { 40, 13, 30, 10, 50 },
		  { 80, 40, 40, 12, 15 },
		  { 11, 22, 33, 44, 55 },
		  { 12, 34, 56, 78, 90 } }; // Two-dimensional array  Salesperson x Sales
	int outer = 0, inner = 0; // Initializing outer and inner variables to be used with 'for' loops
	double total,grandTotal = 0; // Total of individual sales and the over all sales

	grandTotal = 0;
	cout <<"     Salesman\tItem 1\tItem 2\tItem 3\tItem 4\tItem 5\tSales Total\n";

	for( outer = 0; outer < 4; outer++)
	{
		cout<< "\t" << ( outer + 1 ) << "\t";
		total = 0;
		for( inner = 0; inner < 5; inner++)
		{
			total += sales[outer][inner];
			cout << sales[outer][inner] << "\t";
        }
		cout << total << endl;
		grandTotal += total;        
	}

	cout << "\nProduct Total\t";
	for(outer = 0; outer < 5; outer++)
	{
		total=0;
		
		for( inner = 0; inner < 4; inner++)
			total += sales[inner][outer];
			cout << total << "\t";
    }
	cout << grandTotal << endl;

	return 0;
}
