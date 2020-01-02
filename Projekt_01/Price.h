#pragma once

class Price
{
	int basic_fee; //podstawowa cena za wypozyczenie cena*ilosc dni
	int repair_penalty; //cena za uszkodzenia
	int nogas_penalty; // cena za brak paliwa przy oddaniu
public:
	Price();
	Price(int, int);
	~Price();
	int get_basic_fee();
	int get_repair_penalty();
	int get_nogas_penalty();
	void set_basic_fee(int);
	void set_repair_penalty(int);
	void set_nogas_penalty(int);
};

