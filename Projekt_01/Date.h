#pragma once
#include <iostream>


class Date
{
	int day, month, year;
public:
	Date();
	~Date();

	int getDay();
	int getMonth();
	int getYear();
	void show_date();
};

