#pragma once
class Order
{
	int order_number;
	int order_priority;
	int order_condition;

public:		// zamiast public mo¿na zaprzyjaŸniæ t¹ klase z Customer bo inaczej z³o¿enie zamowienia wywala ERROR
	Order();
	~Order();
};

