#pragma once
#include <iostream>
#include <string>
#include "Car_list.h"
#include "Car_condition.h"


//using namespace std;
class Order;


class Car
{
	std::string plate_number;
	std::string typ; // zamienic na type
	std::string model;
	int firm_number;
	Car_condition condition;
	int price;
	bool rent;					//0-wolny 1-wynajety
public:
	Car();
	Car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_,int price_);
	~Car();
	int get_firmnumber();
	std::string get_model();
	friend void Car_list::show();
	friend class Order;
	friend class Worker;
	
	
	
};

