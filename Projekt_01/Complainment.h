#pragma once
#include <iostream>
#include <string>
#include "Date.h"

class Complainment
{
	std::string content;
	Date apperance_date;
public:
	Complainment();
	~Complainment();
	void add_complainment();
};

