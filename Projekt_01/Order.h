#pragma once
class Order
{
	int order_number;
	int order_priority;
	int order_condition;

public:		// zamiast public mo�na zaprzyja�ni� t� klase z Customer bo inaczej z�o�enie zamowienia wywala ERROR
	Order();
	~Order();
};

