#pragma once
#include <iostream>

class Worker_list;
class Customer_list;



class Registration
{
public:
	static void register_worker(Worker_list*); // metody statyczne zeby nie trzebabylo tworzyc obiektu rejestracja
	static void register_customer(Customer_list*);// metody pobieraja dane od uzytkownika, tworza nowy obiekt i
														// przekazuja go do map
};