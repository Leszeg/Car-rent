#pragma once
#include <string>
//#include "Order.h"
//#include "Date.h"
#include "Customer.h"


//class Order;
class Customer;


class Rent
{
	Date rent_date;
	Date chosen_return_date;
	Date return_date;
	Order order;
public:
	Rent(Car_list*);
	~Rent();
	void return_car();
	friend void Customer::complain();
	friend void Customer::rent(Car_list*);
	friend class Order;

};

