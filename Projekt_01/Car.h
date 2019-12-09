#pragma once
#include <string>
#include "Car_condition.h"
using namespace std;
class Car
{
	string plate_number;
	string typ;
	string model;
	int firm_number;
	Car_condition condition;
public:
	Car();
	~Car();

};

