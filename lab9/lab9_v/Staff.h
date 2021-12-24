#pragma once

#include "Person.h"


class Staff
{
private:
	map<Person, Person> personByName;
	map<Person, Person, Person> personByAge;
	void searchByName();
	void searchByAge();
public:
	Staff();

	void insert();
	void print();
	void printField();
	void erase();
	void search();

};