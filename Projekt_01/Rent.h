#pragma once
#include <string>
#include "Order.h"
using namespace std;
class Rent
{
	string rent_date;
	string chosen_return_date;
	string return_date;

	Order order;
public:
	Rent();
	~Rent();
	void give_car();
	void collect_car();
	void return_car();		// po co tutaj s¹ dwie metody do tego samego odbierz i oddaj ??
};

