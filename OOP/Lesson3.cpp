#include<iostream>
#include"Person.h"


int main() {
	cout << Person::get_count() << " object created" << endl;
	Person p("Nadir", "Zamanov", 42);
	Person p2("Samir", "Azimov", 26);
	p.show_info();
	p2.show_info();
	Person p3("Elvin", "Azimov", 20);
	p3.show_info();

	cout << Person::get_count() << " object created" << endl;

	

}

