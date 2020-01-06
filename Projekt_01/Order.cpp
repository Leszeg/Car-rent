#pragma once
#include "Order.h"

int Order::counter = 0;

Order::Order(Car_list* cars,int offset) 
{
	order_ID = counter;
	counter++;
	chosen_car = select_car(cars);
	cars->remove_car(chosen_car->get_firmnumber());
	payment = Price(chosen_car->price,offset);
	returned = false;
}

Order::~Order()
{
}

Order::Order()
{
	order_ID = counter;
	counter++;
}

void Order::set_returned(bool arg)
{
	returned = arg;
}

bool Order::get_returned()
{
	return returned;
}

Car* Order::select_car(Car_list* cars)
{
	int choice;
	cars->show();
	std::cin >> choice;
	auto it = cars->vehicles.begin();
	for (int i = 1; i != choice; i++)
	{
		it++;
	}
	std::cout << it->second->model;
	return cars->vehicles[it->first];
}
