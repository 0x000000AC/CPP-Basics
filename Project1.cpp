// (Arithmetic, Smalles and Largest)
// Write a program that inputs three integers from the keyboard
// and prints the sum, average, product, smallest, and largest
// of these numbers.

#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begins program execution
int main()
{
   int number1; // first user-input intever
   int number2; // second integer to compare
   int number3; // final user-input integer
   
   cout << "Input three different Integers: "; // prompt user for data
   cin >> number1 >> number2 >> number3; // read three integers from user
   
   // Sum, average, and products of the 3 numbers
   cout << "Sum is " << number1 + number2 + number3  << endl;
   cout << "Average is " << (number1 + number2 + number3) / 3 << endl;
   cout << "Product is " << number1 * number2 * number3 << endl;
   
   if ( number1 < number2 && number1 < number3)
		cout << "Smallest is " << number1 << endl;
   else if (number2 < number1 && number2 < number3)
		cout << "Smallest is " << number2 << endl;
   else if (number3 < number1 && number3 < number2)
		cout << "Smallest is " << number3 << endl;
   else	
		cout << "No single smallest number exists" << endl;
		goto largest; // in case they're all equivalent
	
   largest:
   if ( number1 > number2 && number1 > number3)
		cout << "Largest is " << number1 << endl;
   else if (number2 > number1 && number2 > number3)
		cout << "Largest is " << number2 << endl;
   else if (number3 > number1 && number3 > number2)
		cout << "Largest is " << number3 << endl;
   else	
		cout << "No single largest number exists" << endl;
} // end function main

