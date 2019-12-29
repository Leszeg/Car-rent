#pragma once
#include <iostream>
#include <string>
#include "Car_list.h"
#include "Car_condition.h"


//using namespace std;


class Car
{
	std::string plate_number;
	std::string typ;
	std::string model;
	int firm_number;
	Car_condition condition;
public:
	Car();
	Car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_);
	~Car();
	friend void Car_list::show();
	
	
	
};

