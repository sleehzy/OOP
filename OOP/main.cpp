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
	
	Fraction one(3, 10);
	Fraction two(14, 15);
	Fraction three = one.Sum(two);
	std::cout << "One + Two = ";
	three.Print();
	std::cout << std::endl;
	return 0;
}