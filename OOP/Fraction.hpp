#ifndef _FRACTION_HPP_
#define _FRACTION_HPP_
#include "Test.hpp"

class Fraction
{
public:

	Fraction(int num, int den);
	Fraction Sum(const Fraction& other);
	Fraction Subtract(const Fraction& other);
	Fraction Multiply(const Fraction& other);
	Fraction Divide(const Fraction& other);

	

private:
	int numerator;
	int denominator;

	void Print()
	{
		std::cout << numerator << "/" << denominator;
	}

};




#endif // !_FRACTION_HPP_