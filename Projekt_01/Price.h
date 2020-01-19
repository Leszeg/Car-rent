#pragma once

class Price
{
	double basic_fee; //podstawowa cena za wypozyczenie cena*ilosc dni
	double repair_penalty; //cena za uszkodzenia
	double nogas_penalty; // cena za brak paliwa przy oddaniu
public:
	Price();
	Price(int, int);
	~Price();
	double get_basic_fee();
	double get_repair_penalty();
	double get_nogas_penalty();
	void set_basic_fee(double,int);
	void set_repair_penalty();
	void set_nogas_penalty();
	friend class Worker;
	friend class Customer;
};

