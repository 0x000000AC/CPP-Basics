// Sales Summary Assignment:
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
	int i = 0, j = 0; // Initializing outter (i) and inner (j) variables to be used with 'for' loops
	double total,grandtotal;
	
	/**************************************************************
	* This section could be uncommented if you wanted to take input
	* for sales at the command line
	***************************************************************	
	for(i = 0; i < 4; i++)
	{
		cout<<"Salesperson # "<< ( i+1 ) <<":\n";
		
		for(j = 0; j < 5; j++)
		{
			cout<<"Enter sales for item " <<(j+1)<< ": ";
			cin>>sales[i][j];
		}
	cout<<endl;
  
	}
	**************************************************************/
	grandtotal=0;
	cout<<"     Salesman\tItem 1\tItem 2\tItem 3\tItem 4\tItem 5\tSales Total\n";

	for(i = 0; i < 4; i++)
	{
		cout<<"\t"<<(i+1)<<"\t";
		total=0;
		for(j=0;j<5;j++)
		{
			total+=sales[i][j];
			cout<<sales[i][j]<<"\t";
        }
		cout << total << endl;
		grandtotal+=total;        
	}

	cout<<"\nProduct Total\t";
	for(i=0;i<5;i++)
	{
		total=0;
		
		for(j=0;j<4;j++)
			total+=sales[j][i];
			cout<< total <<"\t";
    }
	cout<<grandtotal<<endl;

	//system("pause");
	return 0;
}
