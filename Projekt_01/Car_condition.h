#pragma once
#include <string>

//using namespace std;

class Car_condition
{
	std::string date;
	bool repair;
public:
	friend class Car;
	Car_condition();
	~Car_condition();
	void control();
	void send_repair();
};

