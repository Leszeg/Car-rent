#include "Car_list.h"

Car_list::Car_list ()
{
}

Car_list::~Car_list()
{
}

void Car_list::add_car(string plate_number_, string typ_, string model_, int firm_number_, string date_, bool repair_)
{
	
}



void Car_list::remove_car(string plate_number_)
{
}

const Car_list* Car_list::get_instance()
{
	static Car_list* instance = new Car_list;
	return instance;
}

const Car* Car_list::get_car(string plate_number_) const
{
	return cars[arg];
}