#pragma once
#include "Rent.h"


Rent::Rent(Car_list* cars)
{
	this->chosen_return_date = Date(1);
	this->order = Order(cars, Date::day_offset(chosen_return_date, Date()));
}

Rent::~Rent()
{
}

void Rent::return_car()
{
	order.set_returned(true);
}

