#pragma once
#include <iostream>
#include "Date.h"
#include <windows.h>
#include <winbase.h>
#include <math.h>


Date::Date() 
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	this->day = st.wDay;
	this->month = st.wMonth;
	this->year = st.wYear;

}

Date::Date(bool temp)
{
	if (temp)
	{
		setDay();
		setMonth();
		setYear();
	}
}

Date::~Date()
{
}


int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}

void Date::setDay()
{
	std::cout << "Podaj dzien: ";
	std::cin >> this->day;
}

void Date::setMonth()
{
	std::cout << "Podaj miesiac: ";
	std::cin >> this->month;
}

void Date::setYear()
{
	std::cout << "Podaj rok: ";
	std::cin >> this->year;
}

void Date::show_date()
{
	std::cout << "Dzien: " << getDay() << "Miesiac: " << getMonth() << "Rok: " << getYear();
}

int Date::day_offset(Date actual_, Date set_)
{
	return (set_.getYear() - actual_.getYear()) * 365 + abs(set_.getMonth() - actual_.getYear() * 31 + abs(set_.getDay() - actual_.getDay()));
}
