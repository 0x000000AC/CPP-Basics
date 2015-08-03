// Total Sales
// A mail order house sells five different products
// whose retail prices are included in the switch statement
// This program read a series of pairs of numbers as follows:
//		 a) product number  b) quantity sold
// Example Input: 1 2     This means there were two of item 
// one purchased.

#include <iostream> 
using std::cout; 
using std::cin; 
using std::endl; 
using std::fixed; 
#include<iomanip> 
using std::setprecision; 

int main() 
{ 
	int product; // the first number of user input. The "item id"
	int quantity; // the second number of user input.  How much of the item was sold.
	double total = 0.0; // all of the items dollar values added.  The final result

	cout<<"Enter an item id that was purchased along with a quantity number " 
		<<"(-1 to end): "; 
	cin>>product; 

	cout<<fixed<<setprecision(2); 

	while(product!=-1) 
	{ 
		cin>>quantity; 
		switch(product)
		{ 
			case 1: 
				total += quantity * 2.98; 
				break; 
			case 2: 
				total += quantity * 4.50; 
				break; 
			case 3: 
				total += quantity * 9.98; 
				break; 
			case 4: 
				total += quantity * 4.49; 
				break;
			case 5: 
				total += quantity * 6.87; 
				break; 
			default: 
				cout<<"Invalid product code: "<<product 
					<<"\n Quantity: "<<quantity<<'\n'; // default in case bad input
			break; 
		} 
 
		cout<<"Enter an item id that was purchased along with a quantity number " 
		<<"(-1 to end): "; 
 
		cin>>product; 
	} // end while 
	
	cout<<"The total dollar value of all item sales is: "<<total<<endl; 
	return 0; 
} // end main