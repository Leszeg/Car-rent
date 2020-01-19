#pragma once
#include "Customer.h"
#include "Customer_list.h"
#include "Rent.h"

Customer::Customer()
:driver_license_number{}
,customer_number{}
,password{""}
,rented_car( nullptr )
{
}

Customer::Customer(Customer_list* lista_, std::string name_, std::string surname_, std::string pesel_, int age_, std::string password_, int driver_license_number_, int customer_number_) 
: Customer()
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
	if(rented_car) delete rented_car;
}

void Customer::rent(Car_list* cars)
{
	if (rented_car)
	{
		std::cout << "Masz juz wypozyczony samochod, jedz nim" << std::endl;
		return;
	}

	Rent* temp = new Rent(cars);
	rented_car = temp;
	
}

void Customer::complain()
{

}

void Customer::return_car()
{
	if (rented_car == nullptr)
	{
		std::cout << "Nie masz wypozyczonego pojazdu" << std::endl;
	}
	if (rented_car)
	{
		
		rented_car->return_car();
		rented_car->get_order()->payment.set_nogas_penalty();
		rented_car->get_order()->payment.set_repair_penalty();
		std::cout << "Do zaplaty: " <<
			rented_car->get_order()->payment.get_basic_fee()+
			rented_car->get_order()->payment.get_repair_penalty()+
			rented_car->get_order()->payment.get_nogas_penalty()
			<< "zl" << std::endl;
		this->rented_car = nullptr;
	}
}

Order* Customer::get_rented_car()
{
	return rented_car->get_order();
}

void Customer::accident()
{
}


