#include "Complex.h"


Complex Complex::sum(Complex n1)
{
	return Complex{ this->re + n1.re,this->im + n1.im };
}

void Complex::minus(Complex n1)
{
	this->im -= n1.im;
	this->re -= n1.re;
}

void Complex::multiply(Complex n1)
{
	double a = this->re;
	double b = this->im;
	double c = n1.re;
	double d = n1.im;
	this->re = a * c - b * d;
	this->im = b * c + a * d;
}

void Complex::divide(Complex n1)
{
	Complex conjugated{ n1.re,-n1.im };
	this->multiply(conjugated);
	double denom = pow(n1.re, 2) + pow(n1.im, 2);
	if (denom != 0) {
		this->re = this->re / denom;
		this->im = this->im / denom;
	}
	else cout << "not enable ";
}

void Complex::printComplex()
{
	cout << this->re;

	if (this->im != 0) {
		if (this->im > 0) {
			cout << "+";
		}
		cout << this->im << "i";
	}
}

