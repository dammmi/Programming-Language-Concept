#include <iostream>
#include "complex.h"

int main()
{
	double var;
	int i, j;
	int x, y;

	cout << "Enter a number with decimal value: ";
	cin >> var;
	cout << endl;

	cout << "Enter the  real part for vector a: ";
	cin >> i;
	cout << endl;

	cout << "Enter the complex part for vector a: ";
	cin >> j;
	cout << endl;

	cout << "Enter the real part for vector b: ";
	cin >> x;
	cout << endl;

	cout << "Enter the complex part for vector b: ";
	cin >> y;
	cout << endl;


	 Complex a(i, j);
	 Complex b(x, y);
	// operators
  // two complex
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;

	// complex with double
	cout << "a + var = " << a + var << endl;
	cout << "a - var = " << a - var<< endl;
	cout << "a * var = " << a * var << endl;
	cout << "a / 2 = " << a / var << endl;

	// double with complex
	cout << "-var + b = " << -var + b << endl;
	cout << "var - b = " << var - b << endl;
	cout << "var * b = " << var * b << endl;
	cout << "var / b = " << var / b << endl;

	return 0;

}