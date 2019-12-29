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
#include "Login.h"
//using namespace std;

Car_list* cars = new Car_list;
Worker_list* workers = new Worker_list;
Customer_list* customers = new Customer_list;
int choice;



void print_menu()
{
	std::cout << "Witamy w wypozyczalni samochodow" << std::endl;
	std::cout << "1.Rejestracja nowego pracownika" << std::endl;
	std::cout << "2.Rejestracja nowego klienta" << std::endl;
	std::cout << "3.Zaloguj sie na konto pracownicze" << std::endl;
	std::cout << "4.Zaloguj sie na konto klienta" << std::endl;
}


int main()
{

	cars->add_car("RSA 21356", "Volkswagen", "Caddy", 12345, "13.15.2019", 0); //testowe pojazdy
	cars->add_car("RSA 65123", "Opel", "Corsa", 54321, "13.15.2019", 0);
	//cars->show();


	Worker Andrzej(workers, "Andrzej", "Kowalski", "98020703971", 21, 123456, "wypozyczalnia"); //testowy pracownik
	//Andrzej.add_vehicle(cars); // dodawanie reczne pojazdu przez Andrzeja
	Customer Bogdan(customers, "Bogdan", "Nowak", "95030925369", 26, "samochodowa", 123456, 321654); //testowy klient


	print_menu();
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	{
		Registration::register_customer(customers);
	}
	case 2:
	{
		Registration::register_worker(workers);
	}
	case 3:
	{
		auto wsk_worker = Login::worker_login(workers);
	}
	case 4:
	{
		auto wsk_customer = Login::customer_login(customers);
	}

	}


	return 0;
}
