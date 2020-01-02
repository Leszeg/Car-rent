#pragma once
#include "Order.h"



Order::Order(Car_list* cars,int offset) 
{
	chosen_car = select_car(cars);
	cars->remove_car(chosen_car->get_firmnumber());
	payment = Price(chosen_car->price,offset);
}

Order::~Order()
{
}

Order::Order()
{
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
