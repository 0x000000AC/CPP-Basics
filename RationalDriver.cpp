#include <iostream>
#include "Rational.h" 
using namespace std;

enum MenuSelectionEnum
{
	MENU_NONE = 0,
	MENU_ADD = 1,
	MENU_SUBTRACT = 2,
	MENU_MULTIPLY = 3,
	MENU_DIVIDE = 4,
	MENU_QUIT = 5,
	MENU_END = 6
};

int menu(); // menu will be a helper function that allows you to select to add,subtract,multiply,divide

int main()
{
	int num1 = 0, num2 = 0, den1 = 0, den2 = 0; // Intitialize the two fractions numerators and denominators
	
	cout <<  "Please enter a numertor and a denominator (ex: 1/2 input is 1 2): " << endl;
	cin >> num1 >> den1;
	Rational a( num1, den1 ); // Declaration of Rational object in an odd area, but necessary after the output
    cout <<  "Please enter a second numertor and a denominator (ex: 1/2 input is 1 2): " << endl;
	cin >> num2 >> den2;
	Rational b( num2, den2 );
    Rational c;
	
	int menuSelect = MENU_NONE; // Initialize enum type MENU_NONE (0)
	menuSelect = menu(); // call menu helper for menuselect below
	switch ( menuSelect)
	{
		case 1:
			c = a.Sum(b); 
			c.print();
			break;
		case 2:
			c = a.Difference(b); 
			c.print();
			break;
		case 3:
			c = a.Product(b); 
			c.print();
			break;
		case 4:
			c = a.Division(b); 
			c.print();
		case 5:
			exit(0);
		default:
			cout << "Something is awry my guy" << endl;
	}
		
	system("PAUSE");

    return 0;
}

int menu()
{
	int menuItemSelect = 0;
	
	do
	{
		cout << "Fraction Calculator" << endl;
		cout << "1. Add Fractions " << endl;
		cout << "2. Subtract Fractions " << endl;
		cout << "3. Multiply Fractions " << endl;
		cout << "4. Divide Fractions " << endl;
		cout << "5. Quit" << endl;
		cout << "Please make a selection: " << endl;
		cin >> menuItemSelect;
		if(menuItemSelect <= MENU_NONE || menuItemSelect >= MENU_END)
			cout << "Invalid selection! " << endl;
	}
	while(menuItemSelect <= MENU_NONE || menuItemSelect >= MENU_END);
	
	return menuItemSelect;
}