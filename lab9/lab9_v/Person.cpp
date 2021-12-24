#include "Person.h"

Person::Person() {
	m_name = "";
	m_age = 0;
}

Person::Person(string name) {
	m_name = name;
	m_age = 0;
}
Person::Person(int age) {
	m_name = "";
	m_age = age;
}

bool Person:: operator()(const Person& age1, const Person& age2) const {
	return age1.m_age < age2.m_age;
}

bool operator<(const Person& name1, const Person& name2) {
	return name1.m_name < name2.m_name;
}



ostream& operator<<(ostream& out, Person person) {
	if (person.getAge() == 0) {
		out << person.getName();
	}
	if (person.getName() == "") {
		out << person.getAge();
	}
	return out;
}