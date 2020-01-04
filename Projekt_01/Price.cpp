#include "Price.h"

Price::Price() : repair_penalty(0), nogas_penalty(0), basic_fee(0)
{
}

Price::Price(int fee, int offset)
{
}

Price::~Price()
{
}

void Price::set_basic_fee(int)
{
	
}

void Price::set_repair_penalty(int)
{
	
}

void Price::set_nogas_penalty(int)
{
	
}

int Price::get_basic_fee()
{
	return basic_fee;
}

int Price::get_repair_penalty()
{
	return repair_penalty;
}

int Price::get_nogas_penalty()
{
	return nogas_penalty;
}
