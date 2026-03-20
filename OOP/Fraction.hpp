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

	void Print()
	{
		std::cout << numerator << "/" << denominator;
	}

	void Setnumerator(int one);

	void Setdenominator(int two);

	int Getnumerator() const 
	{
		return numerator;
	}

	int Getdenominator() const 
	{
		return denominator;
	}

private: 
	int numerator;
	int denominator;

	

};




#endif // !_FRACTION_HPP_