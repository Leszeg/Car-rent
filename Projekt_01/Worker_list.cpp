#pragma once
#include "Worker_list.h"
#include "Worker.h"



Worker_list::Worker_list()
{
}

Worker_list::~Worker_list()
{
}

void Worker_list::show()
{
	int i = 0;
	for (auto wsk = this->workers.begin(); wsk != this->workers.end(); ++wsk) 
	{
		std::cout << wsk->second->name << std::endl;
		i++;
	}
}

void Worker_list::add_worker(Worker* worker_)
{
	
	this->workers[worker_->worker_number] = worker_;

}

void Worker_list::erase_worker(int worker_number_)
{
	this->workers.erase(worker_number_);
}
