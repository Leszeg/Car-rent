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
	asd.add_vehicle(cars);
	cars->show();
	std::cout << "Hello World!\n";
	std::cout << "TEST";
}
