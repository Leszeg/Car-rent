#pragma once
#include "Worker.h"
#include <iostream>
#include "Car_list.h"
#include "Worker_list.h"
#include "Registration.h"

Worker::Worker(Worker_list* lista,std::string name_, std::string surname_, std::string pesel_, int age_, int worker_number_, std::string password_)
{
	name = name_;
	surname=surname_;
	pesel=pesel_;
	age=age_;
	worker_number=worker_number_;
	password=password_;
	lista->add_worker(this);

}

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
	int price;

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
	cout << "Cena za jeden dzien wypozyczenia?";
	cin >> price;

	lista->add_car(plate_number, typ, model, firm_number, date, repair,price);
}

void Worker::collect_car(int choice_)
{


}
