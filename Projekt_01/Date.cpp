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
	while (true)
	{
		std::cout << "Podaj dzien: ";
		std::cin >> this->day;
		if (this->day > 31 || this->day < 1)
		{
			std::cout << "Niepoprawny dzien" << std::endl;
		}
		else break;
	}


}

void Date::setMonth()
{
	while (true)
	{
		std::cout << "Podaj miesiac: ";
		std::cin >> this->month;
		if (this->month > 12 || this->month < 1)
		{
			std::cout << "Niepoprawny miesiac" << std::endl;
		}
		else break;
	}

}

void Date::setYear()
{
	
	while (true)
	{
		std::cout << "Podaj rok: ";
		std::cin >> this->year;
		if (this->year != 2020)
		{
			std::cout << "Niepoprawny rok " << std::endl;
		}
		else break;
	}
	
}

void Date::show_date()
{
	std::cout << "Dzien: " << getDay() << "Miesiac: " << getMonth() << "Rok: " << getYear();
}

int Date::day_offset(Date actual_, Date set_)
{
	return set_.day - actual_.day + (set_.month - actual_.month) * 31;
}
