#pragma once

#include <vector>
class Order;

class Order_list
{
public:
	Order_list();
	~Order_list();
	void add(Order*);
	void remove(int i);
protected:
	std::vector<Order*> orders;
	std::vector<Order*> completed;
};

