// (What does the following program pring?)
// Exercise 3.12 for Ch. 3
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
	int y; // declare y
	int x = 1; // initialize x
	int total = 0; // initialize total
	
	while ( x <= 10 ) // loop 10 times
	{
		y = x * x; // perform calculation
		cout << y << endl; // output result
		total += y;  // add y to total
		x++; // increment counter x
	} // end while
	
	cout << "Total is " << total << endl; // display result
} // end main

