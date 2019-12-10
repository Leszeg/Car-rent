#pragma once
#include <string>

using namespace std;

class Car_condition
{
	string date;
	bool repair;
public:
	Car_condition();
	~Car_condition();
	void control();
	void send_repair();
};

