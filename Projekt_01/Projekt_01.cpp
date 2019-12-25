#pragma once
#include <iostream>
#include "Car_list.h"
#include "Car.h"
#include "Worker.h"

//using namespace std;

Car_list* cars = new Car_list;

int main()
{
	Worker asd;
	//asd.add_vehicle(cars);
	cars->show();
	cars->add_car("RSA", "Volkswagen", "Caddy", 12345, "13.15.2019", 0);
	cars->add_car("RSA", "Volkswagen", "Corsa", 54321, "13.15.2019", 0);
	cars->remove_car(54321);
	cars->show();
	std::cout << "Hello World!\n";
	std::cout << "TEST";
}
