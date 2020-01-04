#pragma once
#include "Registration.h"
#include "Worker.h"
#include "Customer.h"
#include <iostream>
#include "Worker_list.h"
#include "Customer_list.h"

std::string getPesel()
{
	string pesel;
	while (true)
	{
		std::cout << "\nPodaj Pesel: ";
		cin >> pesel;

		if (pesel.length() != 11)
		{
			std::cout << "zle";
		}
		else break;
		
	}
	return pesel;
}

std::string getPassword()
{
	std::string temp_pw;
	std::string pass;
	while (true)
	{
		std::cout << "Podaj haslo:";
		std::cin >> pass;
		std::cout << "Potwierdz haslo:";
		std::cin >> temp_pw;
		if (temp_pw == pass)
		{
			break;
		}
		else std::cout << "Hasla nie zgadzaja sie, wprowadz ponownie.";
	}
	return pass;
}


void Registration::register_worker(Worker_list* workers_list)
{
	Worker* temp = new Worker();

	std::cout << "Podaj imie: ";
	std::cin >> temp->name;

	std::cout << "\nPodaj nazwisko: ";
	std::cin >> temp->surname;

	temp->pesel = getPesel();

	std::cout << "\nPodaj nr pracownika: ";
	std::cin >> temp->worker_number;

	std::cout << "Podaj wiek;";
	std::cin >> temp->age;

	temp->password = getPassword();

	workers_list->add_worker(temp);
}

void Registration::register_customer(Customer_list* customers_list)
{
	Customer* temp = new Customer;

	std::cout << "Podaj imie: ";
	std::cin >> temp->name;

	std::cout << "\nPodaj nazwisko: ";
	std::cin >> temp->surname;

	std::cout << "Podaj numer klienta ktory bedzie uzywany do logowania: ";
	std::cin >> temp->customer_number;

	std::cout << "Podaj numer prawa jazdy";
	std::cin >> temp->driver_license_number;

	std::cout << "\nPodaj Pesel: ";
	temp->pesel = getPesel();

	std::cout << "Podaj wiek;";
	std::cin >> temp->age;

	temp->password = getPassword();

	customers_list->add_customer(temp);
}
