#include <iostream>
#include <string.h>
#include"DynamicArray.h"
using namespace std;



void show(const DynamicArray& array) {

	for (size_t i = 0; i < array.getSize(); i++)
	{
		cout << array.getElement(i) << " ";
	}
	cout << endl;
}

DynamicArray init(int size) {
	DynamicArray tmp{ size };
	tmp.randomize();
	return tmp;
}

int main() {
	/*DynamicArray arr(25);
	arr.randomize();
	show(arr);*/
	DynamicArray arr2{ init(10) };
	arr2.show();

	/*int a = 15;
	int* ptra = &a;
	int& refa = a;
	int b = 15;
	cout << "&a " << &a << endl;
	cout << "&b " << &b << endl;
	cout << "ptra " << ptra << endl;
	cout << "refa " << &refa << endl;
	ptra = &b;
	refa = b;
	cout << "&a " << &a << endl;
	cout << "&b " << &b << endl;
	cout << "ptra " << ptra << endl;
	cout << "refa " << &refa << endl;*/

	//// lvalue reference
	//int a{ 5 };
	//int& refA{ a };
	//const int& crefA{ a };
	//const int& crefAA{a + 8};
	//
	//// rvalue reference
	//int&& rValueRef{a+8};
	



}