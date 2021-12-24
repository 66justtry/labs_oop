#pragma once

#include<iostream>
#include <string>
#include<map>
#include<iomanip>
#include<ctime>

using namespace std;


class Person {
private:
	string m_name;
	int m_age;
public:
	Person();
	Person(string name);
	Person(int age);
	string getName() { return m_name; }
	int getAge() { return m_age; }
	bool operator()(const Person& age1, const Person& age2)const;
	friend bool operator < (const Person& name1, const Person& name2);
	friend ostream& operator <<(ostream& out, Person person);

};