#pragma once
#include <string>
#include "Car.h"

using namespace std;

class Car_list
{
	//Car* head;
	//Car* tail;
public:
	Car_list();
	~Car_list();
	void add_car(string plate_number_, string typ_, string model_, int firm_number_, string date_, bool repair_); // nie wiem jak oznaczac te wartosci przyjmowane jako argumenty, daje _ na koncu narazie
	void remove_car();
};