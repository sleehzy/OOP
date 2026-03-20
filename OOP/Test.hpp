#ifndef _TEST_HPP_
#define _TEST_HPP_

#include <iostream>
#include <string>
#include <cmath>

class Test
{
public:
 
	Test();
	Test(int one, std::string name) : one(one), name(name) {}
	Test(int one, std::string name, int* data);
	~Test();



	void SetOne(int one);

private:
	int one = 0;
	int* ptr = nullptr;
	std::string name;
	
};

#endif // !_TEST_HPP_