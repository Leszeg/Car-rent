#pragma once
#include "Person.h"
#include "Order.h"
//#include "Rent.h"
//#include "Car.h"

class Rent;
class Customer_list;
class Order;

class Customer : private Person
{
	int driver_license_number;
	int customer_number;
	string password;
	Rent* rented_car;
public:
	Customer();
	Customer(Customer_list* lista_, std::string name_, std::string surname_, std::string pesel_, int age_,  std::string password_, int driver_license_number, int customer_number);
	~Customer();

	void rent(Car_list*);
	void complain();
	void accident();
	void return_car();
	friend class Registration;
	friend class Customer_list;
	friend class Login;

};

