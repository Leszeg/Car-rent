#pragma once

#include "Complainment.h"
#include <iostream>
#include <string>

Complainment::Complainment() : content(" ")
{
}

Complainment::~Complainment()
{
}

void Complainment::add_complainment()
{
	std::cout << "Wpisz tresc zazalenia" << std::endl;
	std::cin >> content;
	std::cout << "/n";
	
}
