#pragma once
#include "Worker.h"
#include <iostream>
#include "Car_list.h"


Worker::Worker()
{
}

Worker::~Worker()
{
}

void Worker::add_vehicle(Car_list* lista)
{
	std::string plate_number, typ, model, date;
	int firm_number;
	bool repair;

	cout << "Podaj model: ";
	cin >> model;
	cout << "\nPodaj producenta: ";
	cin >> typ;
	cout << "\nPodaj numer wewnetrzny: ";
	cin >> firm_number;
	cout << "\nPodaj numer rejestracyjny: ";
	cin >> plate_number;
	cout << "\nPodaj date: ";
	cin >> date;
	cout << "Czy pojazd wymaga naprawy? (1-Tak,0-Nie)";
	cin >> repair;

	lista->add_car(plate_number, typ, model, firm_number, date, repair);

}
