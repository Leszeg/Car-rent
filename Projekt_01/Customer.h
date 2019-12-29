#pragma once
#include "Person.h"
#include "Order.h"
#include "Rent.h"
#include "Car.h"


class Customer_list;

class Customer : private Person
{
	int driver_license_number;
	int customer_number;
	string password;
public:
	Customer();
	Customer(Customer_list* lista_, std::string name_, std::string surname_, std::string pesel_, int age_,  std::string password_, int driver_license_number, int customer_number);
	~Customer();

	Rent rent(Customer);
	/*void return_car(Car);*/	// niedzia³a ta funkcja
	void accident();
	void logging();
	friend class Registration;
	friend class Customer_list;

};

