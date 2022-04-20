#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

struct Complex {
	double re = 0;
	double im = 0;

	Complex sum(Complex n1);

	void minus(Complex n1);

	void multiply(Complex n1);

	void divide(Complex n1);

	void printComplex();

};

#endif