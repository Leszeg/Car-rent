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
