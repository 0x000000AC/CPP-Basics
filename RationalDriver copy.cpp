// RationalDriver.cpp
// Rational.h is the header file for a fraction program
// The program is to Create a class called Rational 
// (fractions) with the following capabilities:
//     1.Create a constructor that prevents a 0 denominator in a fraction
//     2. Reduces or simplifies fractions that are not in reduced form 
//		  and avoids negative denominators.
//	   3. Overload the addition, substraction, multiplication and division operators
//     4. Overload the relational and equality operators for this class.

#include <iostream>
#include "Rational.h"
using namespace std;


int main()
{
	// NOTE since there is no exception handling, the input must be exactly as shown at the prompt

	int num1, den1, num2, den2 = 1; //initialized numerators and denominators
	cout <<  "Please enter a numertor and a denominator (ex: 1/2 input is 1 2): " << endl;
	cin >> num1 >> den1;
	Rational a( num1, den1 ); // Declaration of Rational object in an odd area, but necessary after the output
    cout <<  "Please enter a second numertor and a denominator (ex: 1/2 input is 1 2): " << endl;
	cin >> num2 >> den2;
	Rational b( num2, den2 );
    Rational c; 
	
   cout << "\nNow, the program will demonstrate the overloaded operators after user input:" << endl;
   system("PAUSE");
   cout << "\n";

   // Add
   a.printRational();
   cout << " + " ;
   b.printRational();
   cout << " = ";
   c = a + b;
   c.printRational();
   
   // Subtract
   cout << '\n';
   a.printRational();
   cout << " - " ;
   b.printRational();
   cout << " = ";
   c = a - b; 
   c.printRational();
   
   // Multiply
   cout << '\n';
   a.printRational();
   cout << " * " ;
   b.printRational();
   cout << " = ";
   c = a * b; 
   c.printRational();
   
   // Divide
   cout << '\n';
   a.printRational();
   cout << " / " ;
   b.printRational();
   cout << " = ";
   c = a / b;
   c.printRational();
   
   // Compare a to b using overloaded relational and equality operators
   cout << "\n\n";
   a.printRational();
   cout << " is:\n\n";
   cout << ( ( a > b ) ? "  > " : "  <= " );
   b.printRational();
   cout << " according to the overloaded > operator\n";
   cout << ( ( a < b ) ? "  < " : "  >= " );
   b.printRational();
   cout << " according to the overloaded < operator\n";
   cout << ( ( a >= b ) ? "  >= " : "  < " );
   b.printRational();
   cout << " according to the overloaded >= operator\n";
   cout << ( ( a <= b ) ? "  <= " : "  > " );
   c.printRational();
   cout << " according to the overloaded <= operator\n";
   cout << ( ( a == b ) ? "  == " : "  != " );
   b.printRational();
   cout << " according to the overloaded == operator\n";
   cout << ( ( a != b ) ? "  != " : "  == " );
   b.printRational(); /* write statement to print d */
   cout << " according to the overloaded != operator" << endl;
   
   system("PAUSE");
   return 0;
} // end main