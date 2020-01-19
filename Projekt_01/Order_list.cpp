#pragma once
#include "Order_list.h"
#include <iostream>
#include "Order.h"

Order_list::Order_list()
{

}

Order_list::~Order_list()
{

}

void Order_list::add(Order* temp)
{
	orders.push_back(temp);
}

void Order_list::remove(int i)
{
}

void Order_list::show_orders_to_collect()
{
	Order* temp = new Order;
	for (int i = 0; orders.size(); i++)
	{
		temp = orders[i];
		if (temp->get_returned())
		{
			std::cout << i + 1 << "." << temp->chosen_car->get_model();
		}
		
	}
}
