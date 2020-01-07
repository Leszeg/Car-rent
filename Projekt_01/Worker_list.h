#pragma once
#include <map>
#include <iostream>

class Worker;
class Worker_list;
class Login;

class Worker_list
{
	std::map<int, Worker*> workers;
public:
	Worker_list();
	~Worker_list();
	void show();
	void add_worker(Worker*);
	void erase_worker(int);
	friend class Registration;
	friend class Login;

};