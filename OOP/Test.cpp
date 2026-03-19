#include "Test.hpp"

Test::Test()
{
	this->one = 100;
	this->name = "None";
	std::cout << "I come!!!\n\n";
	this->ptr = new int[this->one];
}

/*Test::Test(int one, std::string name)
{
	this->one = one;
	this->name = name;

}*/

Test::Test(int one, std::string name, int* data) : one(one), name(name), ptr(data)
{

}

Test::~Test()
{
	//delete[] ptr;
}

void Test::SetOne(int one)
{

}
