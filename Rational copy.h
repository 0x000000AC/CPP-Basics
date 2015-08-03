// Rational.h is the header file for a fraction program
// The program is to Create a class called Rational 
// (fractions) with the following capabilities:
//     1.Create a constructor that prevents a 0 denominator in a fraction
//     2. Reduces or simplifies fractions that are not in reduced form 
//		  and avoids negative denominators.
//	   3. Overload the addition, substraction, multiplication and division operators
//     4. Overload the relational and equality operators for this class.

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{

public:
   Rational( int = 0, int = 1 ); // Default Contstructor, prevents 0 denom.
   
   // Overlaoded addition, subtraction, multiplication and division operators
   const Rational operator+( const Rational& );
   const Rational operator-( const Rational& );
   const Rational operator*( const Rational& );
   const Rational operator/( Rational& );
   
   // Overloaded relational and equality operators
   bool operator>( const Rational& ) const;
   bool operator<( const Rational& ) const;
   bool operator>=( const Rational& ) const;
   bool operator<=( const Rational& ) const;
   bool operator==( const Rational& ) const;
   bool operator!=( const Rational& ) const;
   void printRational( void ) const;

private:
   int numerator; 
   int denominator;
   void reduction( void ); // Called and used with default constructor
};

#endif
