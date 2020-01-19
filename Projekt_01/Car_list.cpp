#pragma once
#include "Car_list.h"
#include "Car.h"



Car_list::Car_list () 
{
}

Car_list::~Car_list()
{
}

void Car_list::add_car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_,int price_)
{
	Car *nowy = new Car(plate_number_, typ_, model_, firm_number_, date_, repair_,price_); // tworzy obiekt dynamiczny Car i przekazuje do konstruktora dane podane przez uzytkownika w metodzie Worker::add_vehicle
	this->vehicles[firm_number_] = nowy; // dodaje ten nowy obiekt do mapy
	
	
	
}

void Car_list::remove_car(int key) // Podaje "firm number" i usuwam dany pojazd z mapy. firm number == key
{
	this->vehicles.erase(key);
}

void Car_list::load_from_file() // czytanie z pliku, ale chyba jednak sie nie przyda :v
{
}

void Car_list::show() // Wypisuje cala liste samochodow znajdujacych sie w mapie
{
	if (is_empty())
	{
		std::cout << "Brak pojazdow" << std::endl;
		return;
	}

	int i = 0;
	for (auto wsk = this->vehicles.begin(); wsk != this->vehicles.end(); ++wsk) {
		std::cout << i + 1 << "." << wsk->second->model << "Cena za jeden dzien wypozyczenia: " <<  wsk->second->price << "\n";
		i++;
	}
}

bool Car_list::is_empty()
{
	return this->vehicles.empty();
}

void Car_list::add_rented(Car* temp)
{
	vehicles[temp->get_firmnumber()] = temp;
}
