#pragma once
#include <string>

using namespace std;

class Person
{
protected:
	string name, surname;
	int pesel, age;
public:
	Person();
	~Person();
};

