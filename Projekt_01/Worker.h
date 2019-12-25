#pragma once
#include "Person.h"

class Car_list;

class Worker : private Person
{
	int worker_number;
public:
	Worker();
	~Worker();
	void add_vehicle(Car_list*);
};
