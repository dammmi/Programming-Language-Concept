#include <iostream>
#include "complex.h"

using namespace std;


ostream& operator<<(ostream& out, const Complex& num)
{
	if (num.real == 0 && num.complex == 0) {
		out << 0;
	}
	else if (num.real == 0) {
		out << num.complex << "j";
	}
	else if (num.complex == 0) {
		out << num.real;
	}
	else if (num.complex > 0) {
		if (num.complex == 1) {
			out << num.real << "+j";
		}
		else {
			out << num.real << "+" << num.complex << "j";
		}
	}
	else {
		if (num.complex == -1) {
			cout << num.real << "-j";
		}
		else {
			out << num.real << num.complex << "j";
		}
	}
	return out;
}

Complex::Complex(double real, double complex) :
	real(real), complex(complex)
{
}

Complex::Complex(double real) :
	real(real), complex(0)
{
}

Complex::~Complex()
{
}

// operator overloading
Complex Complex::operator+(const Complex& other) const
{
	return Complex(this->real + other.real, this->complex + other.complex);
}

Complex Complex::operator-(const Complex& other) const
{
	return Complex(this->real - other.real, this->complex - other.complex);
}

Complex Complex::operator*(const Complex& other) const
{
	double real = this->real * other.real - this->complex * other.complex;
	double complex = this->real * other.complex + this->complex * other.real;
	return Complex(real, complex);
}

Complex Complex::operator/(const Complex& other) const
{
	Complex result = *this * Complex(other.real, -other.complex);
	double val = other.real * other.real + other.complex * other.complex;
	result.real /= val;
	result.complex /= val;
	return result;
}

Complex operator+(const double x, const Complex& other)
{
	return other + x;
}

Complex operator-(const double x, const Complex& other)
{
	return Complex(x) - other;
}

Complex operator*(const double x, const Complex& other)
{
	return other * x;
}

Complex operator/(const double x, const Complex& other)
{
	return Complex(x) / other;
}

double Complex::getReal() const
{
	return real;
}

double Complex::getComplex() const
{
	return complex;
}
