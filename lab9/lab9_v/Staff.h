#pragma once

#include "Person.h"


class Staff
{
private:
	map<Person, Person> personByName;
	map<Person, Person, Person> personByAge;
public:
	Staff();
	void searchByName();
	void searchByAge();
	void insert();
	void print();
	void printField();
	void erase();
	void search();

};