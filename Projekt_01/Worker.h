#pragma once
#include "Person.h"

class Car_list;
class Registration;
class Worker_list;
class Login;

class Worker : private Person
{
	int worker_number;
	std::string password;
public:
	
	Worker();
	Worker(Worker_list* lista_,std::string name_, std::string surname_, std::string pesel_,int age_,int worker_number_,std::string password_);
	//^konsruktor do testowania (dodaje na poczatku programu odrazu jakiegos pracowanika)
	~Worker();
	void add_vehicle(Car_list*);
	
	void delete_car(Car_list*);

	friend class Registration;
	friend class Worker_list;
	friend class Login;
	friend class Car_list;
};
