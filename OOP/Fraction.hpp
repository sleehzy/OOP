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



	

	int Getnumerator() const
	{
		return numerator;
	}

	int Getdenominator() const
	{
		return denominator;
	}

	void redaction();


private:
	int numerator;
	int denominator;

	int gcd(int one, int two) const 
	{
		one = std::abs(one);
		two = std::abs(two);
		while(two != 0) 
		{
			int temp = two;
			two = one % two;
			one = temp;
		}

	}


};


#endif // !_FRACTION_HPP_