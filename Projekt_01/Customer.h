#pragma once
#include "Person.h"
#include "Order.h"
#include "Rent.h"
#include "Car.h"
class Customer : private Person
{
	int driver_license_number;
	int customer_number;
	string password;
public:
	Customer();
	~Customer();

	Rent rent(Customer);
	//void return_car(Car);
	void accident();
	void logging();

};

