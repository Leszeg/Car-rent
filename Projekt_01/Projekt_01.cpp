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

												 //mapy
Car_list* cars = new Car_list;					 //samochodow
Worker_list* workers = new Worker_list;			 //pracownikow
Customer_list* customers = new Customer_list;	 //klientow
int choice;										 //wybor do switcha




void print_menu() // printer do menu, mozna pozniej zrobic jakas klase zeby nie bylo tyle tego w mainie
{
	std::cout << "Witamy w wypozyczalni samochodow" << std::endl
		<< "1.Rejestracja nowego pracownika" << std::endl
		<< "2.Rejestracja nowego klienta" << std::endl
		<< "3.Zaloguj sie na konto pracownicze (login 123456 haslo andrzej)" << std::endl
		<< "4.Zaloguj sie na konto klienta (login 321654 haslo bogdan)" << std::endl
		<< "0.Wyjdz z programu" << std::endl;
}

void print_customer_menu()
{
	std::cout << "1.Wypozycz Pojad" << std::endl
		<< "2.Zwroc pojazd" << std::endl
		<< "3.Zloz Zazalenie" << std::endl
		<< "4.Zglosc awarie swojego pojazdu" << std::endl
		<< "0.Wyloguj sie" << std::endl;
}


int main()
{
	cars->add_car("RSA 21356", "Volkswagen", "Caddy", 12345, "13.15.2019", 0); //testowe pojazdy
	cars->add_car("RSA 65123", "Opel", "Corsa", 54321, "13.15.2019", 0);
	//cars->show();
	Worker Andrzej(workers, "Andrzej", "Kowalski", "98020703971", 21, 123456, "andrzej"); //testowy pracownik
	//Andrzej.add_vehicle(cars); // dodawanie reczne pojazdu przez Andrzeja
	Customer Bogdan(customers, "Bogdan", "Nowak", "95030925369", 26, "bogdan", 123456, 321654); //testowy klient


	print_menu();

	do
	{
		std::cin >> choice;
		
		switch (choice)
		{
		case 1:
		{
			Registration::register_worker(workers);
			break;
		}
		case 2:
		{
			Registration::register_customer(customers);
			break;
			
		}
		case 3:
		{
			auto wsk_worker = Login::worker_login(workers);
			if (wsk_worker != 0)
			{
				std::cout << "\nPoprawnie zalogowany";
				break;
			}
			else std::cout << "\nLogowanie nieudane"; break;
		}
		case 4:
		{
			auto wsk_customer = Login::customer_login(customers);
			if (wsk_customer != 0)
			{
				std::cout << "\nPoprawnie zalogowany";
				break;

			}
			else std::cout << "\nLogowanie nieudane";
		}

		}
	} while (choice != 0);
	


	return 0;
}
