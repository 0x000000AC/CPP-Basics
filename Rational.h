// prevent multiple inclusions of header file
#include <iostream>
#ifndef RATIONAL_H  
#define RATIONAL_H 

using namespace std;

class Rational
{
public:
    
	Rational() //initialization constructor.
    {
        numerator = 1;
        denominator = 1;
    }
    
	Rational(int n, int d)
    {
        numerator = n;
        
		if (d == 0) 
        {
            cout << "CAN'T DIVIDE BY ZERO" << endl;
            exit(0); // exit the program.  can be re-written later for error 
        }
        else
            denominator = d;
    }
   
    Rational Sum(Rational otherFraction)
    {
        int n = numerator * otherFraction.denominator + otherFraction.numerator * denominator;
        int d = denominator * otherFraction.denominator;
        return Rational( n / gcd(n,d), d / gcd(n,d) );
    }
    Rational Difference(Rational otherFraction)
    {
        int n = numerator * otherFraction.denominator - otherFraction.numerator * denominator;
        int d = denominator * otherFraction.denominator;
        return Rational( n / gcd(n,d), d / gcd(n,d));
    }
    Rational Product(Rational otherFraction)
    {
        int n = numerator * otherFraction.numerator;
        int d = denominator * otherFraction.denominator;
        return Rational(n / gcd(n,d), d / gcd(n,d));
    }
    Rational Division(Rational otherFraction)
    {
        int n = numerator * otherFraction.denominator;
        int d = denominator * otherFraction.numerator;
        return Rational( n / gcd(n,d), d / gcd(n,d));
    }
    
    
    int gcd(int n, int d)
    {
        int remainder;
        
		while (d != 0)
        {
            remainder = n % d;
            n = d;
            d = remainder;
        }
        return n;
    }
    void print() 
    {
        if (denominator == 1) // Simplify if denominator is one
            cout << numerator << endl;
        else
            cout << "\n" << numerator << " / " << denominator << endl;
    }

private:
    int numerator;
	int denominator; 	

};

#endif
