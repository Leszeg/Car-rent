#pragma once
#include <iostream>
#include "Car_list.h"
#include "Car.h"
#include "Worker.h"
#include "Date.h"
#include "Worker_list.h"
#include "Customer_list.h"
#include "Registration.h"
#include "Customer.h"
//using namespace std;

Car_list* cars = new Car_list;
Worker_list* workers = new Worker_list;
Customer_list* customers = new Customer_list;


int main()
{
	std::cout << "Witamy w wypozyczalni samochodow" << endl;


	cars->add_car("RSA 21356", "Volkswagen", "Caddy", 12345, "13.15.2019", 0); //testowe pojazdy
	cars->add_car("RSA 65123", "Opel", "Corsa", 54321, "13.15.2019", 0);
	cars->show();

	//Registration::register_worker(workers); // dodawanie pracownika recznie
	//Registration::register_customer(customers); // dodawanie klienta recznie
	Worker Andrzej(workers, "Andrzej", "Kowalski", "98020703971", 21, 123456, "wypozyczalnia"); //testowy pracownik
	//Andrzej.add_vehicle(cars); // dodawanie reczne pojazdu przez Andrzeja
	Customer Bogdan(customers, "Bogdan", "Nowak", "95030925369", 26, "samochodowa", 123456, 321654); //testowy klient

	return 0;
}
