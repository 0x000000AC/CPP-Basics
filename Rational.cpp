//Rational.cpp
// The program is to Create a class called Rational 
// (fractions) with the following capabilities:
//     1.Create a constructor that prevents a 0 denominator in a fraction
//     2. Reduces or simplifies fractions that are not in reduced form 
//		  and avoids negative denominators.
//	   3. Overload the addition, substraction, multiplication and division operators
//     4. Overload the relational and equality operators for this class.

#include <cstdlib> // needed in line 65 for system exit
#include <iostream>
#include "Rational.h"
using namespace std;

// Constructor, takes numerator and denominator and then utilizes reduction()
Rational::Rational( int num, int den )
{
   numerator = num;
   denominator = den;
   reduction();
}

// Overloaded +,-,*,/ all instantiate objec for info, returns object after computation
const Rational Rational::operator+(const Rational &added )
{
   Rational add; // Instantiate object add to handle additional info
   add.numerator = numerator*added.denominator+denominator*added.numerator;
   add.denominator = denominator*added.denominator;
   add.reduction();
   return add;
}

const Rational Rational::operator-(const Rational &subtracted )
{
   Rational sub;
   sub.numerator = numerator*subtracted.denominator-denominator*subtracted.numerator;
   sub.denominator = denominator*subtracted.denominator;
   sub.reduction();
   return sub;
}

const Rational Rational::operator*(const Rational &multiplied )
{
   Rational mul;
   mul.numerator = numerator*multiplied.numerator;
   mul.denominator = denominator*multiplied.denominator;
   mul.reduction();
   return mul;
}

const Rational Rational::operator/( Rational &divided )
{
   Rational divide;
  
   if ( numerator!=0 )
   {
      divide.numerator = numerator*divided.denominator;
      divide.denominator = denominator*divided.numerator;
      divide.reduction();
   }
   else
   {
      cout << "Divide by zero error: terminating program\n";
      system("PAUSE");
	  exit( 1 );   // why cstdlib is needed
   }
   return divide;
}

// Relational operators compares instantiated numerator/denomintator to passed in object
// Returns true if condition met, false otherwise
bool Rational::operator>(const Rational &gtrThan ) const
{
   if ( static_cast< double >( numerator ) / denominator >
        static_cast< double >( gtrThan.numerator ) / gtrThan.denominator )
      return true;
   else
      return false;
}

bool Rational::operator<(const Rational &lessThan ) const
{
   return !(*this > lessThan);
}

bool Rational::operator>=(
   const Rational &gte ) const
   { 
	   return *this == gte || *this > gte; 
   }

bool Rational::operator<=(const Rational &lte ) const
	{ 
		return !(*this == lte || *this > lte); 
	}

bool Rational::operator==(const Rational &eq ) const
   {
   if ( static_cast< double >( numerator ) == eq.numerator &&
        static_cast< double >( denominator ) == eq.denominator )
        return true;
   else
        return false;
   }

bool Rational::operator!=(const Rational &pdne ) const
   { 
	   return !(*this == pdne); 
   }

void Rational::printRational( void ) const
{
   if ( numerator == 0 )         // Whelp, then print 0
      cout << numerator;
   else if ( denominator == 1 )  // print fraction as integer
      cout << numerator;
   else
      cout << numerator << '/' << denominator;
}

// Reduction function, utilizes gcd and reduces fraction
void Rational::reduction( void )
{
   int smallest = 1;
   int gcd = 1;  // gcd code from cplusplus.com
   
   smallest = ( numerator < denominator ) ? numerator : denominator;
   
   for ( int loop = 2; loop <= smallest; ++loop )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;
   
   numerator /= gcd;
   denominator /= gcd;
}