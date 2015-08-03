#include <iostream>
using namespace std;
#include <cstdlib> // needed in line 65 for system exit


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