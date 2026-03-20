#include "Test.hpp"
#include "Fraction.hpp"

Fraction::Fraction(int num, int den) : numerator(num), denominator(den)
{
	
	
}

Fraction Fraction::Sum(const Fraction& other)
{
	int newNumerator = numerator * other.denominator + other.numerator * denominator;
	int newDenominator = denominator * other.denominator;

	return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::Subtract(const Fraction& other) 
{ 
	int newNumerator = numerator * other.denominator - other.numerator * denominator;
	int newDenominator = denominator * other.denominator;
 
	return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::Multiply(const Fraction& other)
{
	int newNumerator = numerator * other.numerator;
	int newDenominator = denominator * other.denominator;

	return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::Divide(const Fraction& other)
{
	
	int newNumerator = numerator * other.denominator;
	int newDenominator = denominator * other.numerator;

	return Fraction(newNumerator, newDenominator);
}




void Fraction::redaction()
{
	if (denominator == 0)
	{
		std::cout << "Denominator cant be zero";
		return;
	}

	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}

	int commonDivisor = gcd(numerator, denominator);
	numerator /= commonDivisor;
	denominator / +commonDivisor;
}


