#pragma once
#include "Car_list.h"
#include "Car.h"



Car_list::Car_list () 
{
}

Car_list::~Car_list()
{
}

void Car_list::add_car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_)
{
	Car *nowy = new Car(plate_number_, typ_, model_, firm_number_, date_, repair_);
	this->vehicles[firm_number_] = nowy;
	
	
}

void Car_list::remove_car()
{
}

void Car_list::load_from_file()
{
}

void Car_list::show()
{
	int i = 0;
	for (auto wsk = this->vehicles.begin(); wsk != this->vehicles.end(); ++wsk) {
		std::cout << i + 1 << "." << wsk->second->model << "\n";
		i++;
	}
}
