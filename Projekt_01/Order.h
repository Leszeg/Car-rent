#pragma once
#include "Car.h"
#include "Price.h"
#include "Complainment.h"
#include "Customer.h"


class Customer;
class Rent;
class Order_list;


class Order
{

	Complainment complain;
	Price payment;
	Car* chosen_car;
	int order_ID;
	static int counter;
	// zrobic awarie i podmianke pojazdu
	bool returned;

public:		// zamiast public mo¿na zaprzyjaŸniæ t¹ klase z Customer bo inaczej z³o¿enie zamowienia wywala ERROR
	Order(Car_list*,int);
	~Order();
	Order();
	void set_returned(bool);
	bool get_returned();
	Car* select_car(Car_list*);
	friend Customer;
	friend class Rent;
	friend class Order_list;
};

