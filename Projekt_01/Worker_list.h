#pragma once
#include <map>

class Worker;
class Worker_list;

class Worker_list
{
	std::map<int, Worker*> workers;
public:
	Worker_list();
	~Worker_list();
	void add_worker(Worker*);
	void erase_worker(int);
	friend class Registration;
	friend class Worker_list;

};