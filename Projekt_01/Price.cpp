#include "Price.h"
#include <iostream>

Price::Price() : repair_penalty(0), nogas_penalty(0), basic_fee(0)
{
}

Price::Price(int fee, int offset)
{
	set_basic_fee(fee, offset);
}

Price::~Price()
{
}

void Price::set_basic_fee(double fee,int offset)
{
	basic_fee = offset * fee;
}

void Price::set_repair_penalty()
{
	bool temp;
	std::cout << "Czy samochod zostal uszkodzony? (1-tak, 0-nie)";
	std::cin >> temp;
	if (temp) this->repair_penalty = get_basic_fee() * 0.1;
	else repair_penalty = 0;

}

void Price::set_nogas_penalty()
{
	bool temp;
	std::cout << "Czy samochod jest zatankowany? (1-tak, 0-nie)";
	std::cin >> temp;
	if (temp) this->nogas_penalty = get_basic_fee() * 0.1;
	else nogas_penalty = 0;
}

double Price::get_basic_fee()
{
	return basic_fee;
}

double Price::get_repair_penalty()
{
	return repair_penalty;
}

double Price::get_nogas_penalty()
{
	return nogas_penalty;
}
