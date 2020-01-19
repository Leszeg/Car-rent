#pragma once
#include "Rent.h"


Rent::Rent(Car_list* cars)
{
	this->chosen_return_date = Date(1);
	Date actual;
	Order* order_ = new Order(cars, Date::day_offset(actual, chosen_return_date));
	this->order = order_;
}

Rent::~Rent()
{
}

void Rent::return_car()
{
	order->set_returned(true);

}

Order* Rent::get_order()
{
	return this->order;
}

