#pragma once
#include <map>

class Customer;


class Customer_list
{
	std::map<int, Customer*> customers;

public:
	void add_customer(Customer*);
	void erase_customerr(int);
	void show();
	friend class Customer;
	friend class Registration;
	friend class Login;
};
