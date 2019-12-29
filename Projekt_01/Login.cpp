#pragma once
#include<iostream>
#include "Login.h"
#include "Customer.h"
#include "Worker.h"
#include "Customer_list.h"
#include "Worker_list.h"

class Customer_list;
class Worker_list;

Customer* Login::customer_login(Customer_list* lista)
{
	int temp_login;
	std::string temp_passwd;
	std::cout << "Podaj Numer klienta: ";
	std::cin >> temp_login;
	if (lista->customers.count(temp_login)==0)
	{
		std::cout << "Nie znaleziono takiego uzytkownika";
		return 0;
	}
	else
	{
		std::cout << "Podaj haslo: ";
		cin >> temp_passwd;
		if (lista->customers[temp_login]->password == temp_passwd)
		{
			std::cout << "Witaj " << lista->customers[temp_login]->name;
			return lista->customers[temp_login];
		}
	}
	
}

Worker* Login::worker_login(Worker_list* lista_)
{
	int temp_login;
	std::string temp_passwd;
	std::cout << "Podaj Numer Pracownika: ";
	std::cin >> temp_login;
	if (lista_->workers.count(temp_login) == 0)
	{
		std::cout << "Nie znaleziono takiego pracownika";
		return 0;
	}
	else
	{
		std::cout << "Podaj haslo: ";
		cin >> temp_passwd;
		if (lista_->workers[temp_login]->password == temp_passwd)
		{
			std::cout << "Witaj " << lista_->workers[temp_login]->name;
			return lista_->workers[temp_login];
		}
	}
}
