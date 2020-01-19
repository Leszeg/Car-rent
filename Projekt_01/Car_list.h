#pragma once
#include <iostream>
#include <string>
#include <map>

class Car;

class Car_list
{
	std::map<int, Car*> vehicles; //mapa uzywajaca inta jako klucza, przechowuj¹ca wskazniki do obiektow typu Car
	
public:
	Car_list();
	~Car_list();
	void add_car(std::string plate_number_, std::string typ_, std::string model_, int firm_number_, std::string date_, bool repair_,int price); // nie wiem jak oznaczac te wartosci przyjmowane jako argumenty, daje _ na koncu narazie

	void remove_car(int);
	void load_from_file();
	void show();
	bool is_empty();
	friend class Worker;
	friend class Order;
	void add_rented(Car*);


};