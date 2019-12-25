#pragma once
#include "Car_list.h"
#include "Car.h"



Car_list::Car_list () 
{
}

Car_list::~Car_list()
{
}

void Car_list::add_car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_)
{
	Car *nowy = new Car(plate_number_, typ_, model_, firm_number_, date_, repair_); // tworzy obiekt dynamiczny Car i przekazuje do konstruktora dane podane przez uzytkownika w metodzie Worker::add_vehicle
	this->vehicles[firm_number_] = nowy; // dodaje ten nowy obiekt do mapy
	
	
	
}

void Car_list::remove_car(int key) // Podaje "firm number" i usuwam dany pojazd z mapy.
{
	this->vehicles.erase(key);
}

void Car_list::load_from_file() // czytanie z pliku, ale chyba jednak sie nie przyda :v
{
}

void Car_list::show() // Wypisuje cala liste samochodow znajdujacych sie w mapie
{
	int i = 0;
	for (auto wsk = this->vehicles.begin(); wsk != this->vehicles.end(); ++wsk) {
		std::cout << i + 1 << "." << wsk->second->model << "\n";
		i++;
	}
}
