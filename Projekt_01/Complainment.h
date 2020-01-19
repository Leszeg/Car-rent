#pragma once
#include <iostream>
#include <string>
#include "Date.h"

class Complainment
{
	std::string content;

public:
	Complainment();
	~Complainment();
	void add_complainment();
};

