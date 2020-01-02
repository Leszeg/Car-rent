#pragma once
#include "Car.h"
#include "Price.h"
#include "Complainment.h"
#include "Customer.h"


class Customer;
class Rent;


class Order
{
	Complainment complain;
	Price payment;
	Car* chosen_car;

public:		// zamiast public mo¿na zaprzyjaŸniæ t¹ klase z Customer bo inaczej z³o¿enie zamowienia wywala ERROR
	Order(Car_list*,int);
	~Order();
	Order();
	Car* select_car(Car_list*);
	friend Customer;
	friend class Rent;
	
};

