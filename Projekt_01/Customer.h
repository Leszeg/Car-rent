#pragma once
#include "Person.h"
#include "Order.h"
class Customer : private Person
{
	int driver_license_number;
	int customer_number;

	Customer();
	~Customer();

	Order rent();
	void return_car();
};

