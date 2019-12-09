#pragma once
#include "Person.h"
class Worker : private Person
{
	int worker_number;

	Worker();
	~Worker();
};
