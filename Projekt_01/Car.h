#pragma once
#include "Car_list.h"
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
	friend void Car_list::add_car(string plate_number_, string typ_, string model_, int firm_number_, string date_, bool repair_);
};

