#pragma once
#include <string>
#include "Car.h"
#include<map>

using namespace std;

class Car_list
{
	map<string, Car*> cars;
	Car_list();

public:
	const Car_list* get_instance();
	~Car_list();
	void add_car(string plate_number_, string typ_, string model_, int firm_number_, string date_, bool repair_);
	void remove_car(string plate_number_);
	const Car& get_car(string plate_number_) const;
};