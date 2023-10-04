#include<iostream>
#include<string.h>

using namespace std;

class Person
{
public:
	Person() : Person("Empty", 18, 13) {
		/*strcpy_s(_name, 50, "Empty");
		_age = 18;*/
		cout << "Default constructor!" << endl;
	}

	Person(const char name[50], int age, int field) :_field(field) {
		strcpy_s(_name, 50, name);
		_age = age;
		arr = new int[5000];
		cout << "Constructor with 2 parameters!" << endl;
	}
	/*Person(const char name[50]): _age(18) {
		strcpy_s(_name, 50, name);
		cout << "Constructor with 1 parameter!" << endl;
	}*/

	Person(const char name[50]) : Person(name, 18, 13) {
		/*strcpy_s(_name, 50, name);*/
		cout << "Constructor with 1 parameter!" << endl;
	}


	void show() {
		cout << "Name: " << _name
			<< "\nAge: " << _age
			<< "\n_________________________\n" << endl;
	}

	int get_field() {
		return _field;
	}
	// Деструктор
	~Person() {
		delete[] arr;
		cout << "Destructor is calle!" << endl;
	}

private:
	char _name[50];
	int _age;
	const int _field;
	int* arr;
};



int main() {
	//Person person1;
	//person1.show();
	//person1.get_field();
	//cout << person1.get_field() << endl;
	//Person person2("Nadir", 15, 58);
	//person2.show();
	//cout << person2.get_field();
	///*Person person3 = Person("Nadir");
	//person3.show();*/

	/*Person* ptr = new Person("Salam", 15, 36);
	ptr->show();
	cout << ptr->get_field();*/
	{
		for (size_t i = 0; i < 100000; i++)
		{
			Person person;
		}
	}
	system("Pause");
}
