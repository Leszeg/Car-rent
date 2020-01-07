#pragma once
#include "Customer_list.h"
#include "Customer.h"

class Customer;

void Customer_list::add_customer(Customer* customer_)
{
	this->customers[customer_->customer_number] = customer_;
}

void Customer_list::erase_customerr(int key)
{
	this->customers.erase(key);
}

void Customer_list::show()
{
	int i = 0;
	for (auto wsk = this->customers.begin(); wsk != this->customers.end(); ++wsk)
	{
		std::cout << wsk->second->name << std::endl;
		i++;
	}
}

