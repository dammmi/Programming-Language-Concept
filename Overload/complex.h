#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double complex;

public:
	Complex(double real, double complex);
	// The constructor will convert double to complex
	
	Complex(double real);
	~Complex();

	// operator overloading
	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator/(const Complex& other) const;


	friend Complex operator+(const double x, const Complex& other);
	friend Complex operator-(const double x, const Complex& other);
	friend Complex operator*(const double x, const Complex& other);
	friend Complex operator/(const double x, const Complex& other);

	friend ostream& operator<<(ostream& out, const Complex& val);

	double getReal() const;
	double getComplex() const;
};


#endif
