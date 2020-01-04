#pragma once
#include <iostream>
#include "Date.h"
#include <windows.h>
#include <winbase.h>


Date::Date() 
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	this->day = st.wDay;
	this->month = st.wMonth;
	this->year = st.wYear;

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

void Date::show_date()
{
	std::cout << "Dzien: " << getDay() << "Miesiac: " << getMonth() << "Rok: " << getYear();
}
