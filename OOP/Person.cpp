#include "Person.h"

int Person::count = 0;

Person::Person(const char name[50], const char surname[50], int age)
{
	strcpy_s(this->name, name);
	strcpy_s(this->surname, surname);
	this->age = age;
	count++;
}

void Person::show_info() {
	cout << "Name: " << this->name
		<< "\nSurname: " << this->surname
		<< "\nAge: " << this->age
		<< "\n_______________________\n\n";
}

int Person::get_count() {
	return count;
}

Person::~Person() {
	count--;
}
