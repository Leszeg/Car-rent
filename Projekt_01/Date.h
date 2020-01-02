#pragma once
#include <iostream>


class Date
{
	int day, month, year;
public:
	Date(); //konstruktor domyslny pobiera obecna date z systemu
	Date(bool); //konstruktor do ustalania daty zwrotu pojazdu, przy tworzeniu obiektu robisz Date obj(1) i wtedy wczytuje date z klawiatury
	~Date();

	int getDay();
	int getMonth();
	int getYear();
	void setDay();
	void setMonth();
	void setYear();
	void show_date();
	static int day_offset(Date, Date);
};

