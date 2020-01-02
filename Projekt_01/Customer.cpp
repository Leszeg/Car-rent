#pragma once
#include "Customer.h"
#include "Customer_list.h"
#include "Rent.h"

Customer::Customer()
{
}

Customer::Customer(Customer_list* lista_, std::string name_, std::string surname_, std::string pesel_, int age_, std::string password_, int driver_license_number_, int customer_number_) : rented_car(nullptr)
{
	name = name_;
	surname = surname_;
	pesel = pesel_;
	age = age_;
	driver_license_number = driver_license_number_;
	customer_number = customer_number_;
	password = password_;
	rented_car = nullptr;
	lista_->add_customer(this);
}

Customer::~Customer()
{
}

void Customer::rent(Car_list* cars)
{
	Rent* temp = new Rent(cars);
	
	rented_car = temp;
	
}

void Customer::complain()
{

}



/*void Customer::return_car(Car)
{
}*/

void Customer::accident()
{
}


