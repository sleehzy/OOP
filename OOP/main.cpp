#include "Test.hpp"
#include "Fraction.hpp"

/*class Test
{
 public:


	 Test()
	 {

	 }

	
	void PrintSize(int num)
	{
		std::cout << num << "\n";
	}

	void SetA(int a)
	{
		this->a = a;
	}
	int GetA() const
	{
		return a;
	}


private:
	static const int size = 5;
	int grade[size];
	int a;


};*/



int main()
{
	
	Fraction Setnumerator(3, 10);
	Fraction Setdenominator(14, 15);
	Fraction three = Setnumerator.Sum(Setdenominator);
	std::cout << "\nOne + Two = ";
	three.Print();

	Fraction four = Setnumerator.Subtract(Setdenominator);
	std::cout << "\nOne - Two = ";
	four.Print();

	Fraction five = Setnumerator.Multiply(Setdenominator);
	std::cout << "\nOne * Two = ";
	five.Print();

	Fraction six = Setnumerator.Divide(Setdenominator);
	std::cout << "\nOne / Two = ";
	six.Print();

	return 0;
}