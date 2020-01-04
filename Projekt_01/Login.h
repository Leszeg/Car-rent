#pragma once
class Customer_list;
class Worker_list;
class Customer;
class Worker;

class Login
{
public:
	static Customer* customer_login(Customer_list*);
	static Worker* worker_login(Worker_list*);
};

