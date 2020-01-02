#pragma once
#include "Car.h"

Car::Car() : rent(false)
{
}

Car::Car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_,int price_) : rent(false)
{
	plate_number = plate_number_;
	typ = typ_;
	firm_number = firm_number_;
	model = model_;
	condition.repair = repair_;
	condition.date = date_;	
	price = price_;
}

Car::~Car()
{
}

int Car::get_firmnumber()
{
	return firm_number;
}

