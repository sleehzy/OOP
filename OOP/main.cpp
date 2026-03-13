#include <string>
#include <iostream>


struct Test
{
	static const int size = 5;
	int grade[size];
	int a;
	void PrintSize(int num)
	{
		std::cout << num << "\n";
	}

	void SetA(int a)
	{
		this->a = a;
	}



};



int main()
{
	

	Test one;

	Test* two = new Test;
	

	one.a = 10;
    (*two).a = 20;

	one.SetA(10);
	(*two).PrintSize(20);




	return 0;
}