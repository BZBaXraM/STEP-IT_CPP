#include "DynamicArray.h"
#include<iostream>
#include<time.h>
#include<cassert>

using namespace std;

DynamicArray::DynamicArray(int size)
	:arr{ new int[size] }, size{ size }
{
	cout << "DynamicArray constructor for " <<
		size << " elements, for adress: " << this << endl;
}

DynamicArray::DynamicArray() : DynamicArray(5) {}

// Shallow copy - bitwise copy
//DynamicArray::DynamicArray(const DynamicArray& other) 
//	:arr{other.arr}, size{other.size}
//{
//	cout << "DynamicArray copy constructor for " <<
//		size << " elements, for adress: " << this << endl;
//}


// Deep copy
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{ new int[other.size] }, size{ other.size }
{
	cout << "DynamicArray copy constructor for " <<
		size << " elements, for adress: " << this << endl;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}

}

DynamicArray::DynamicArray(DynamicArray&& other)
	:arr{ other.arr }, size{ other.size }
{
	other.arr = nullptr;
	other.size = 0;
	cout << "DynamicArray move constructor for " <<
		size << " elements, for adress: " << this << endl;
}

DynamicArray::~DynamicArray() {
	cout << "DynamicArray destructor for " <<
		size << " elements, for adress: " << this << endl;
	delete[]arr;
}

int DynamicArray::getSize() const {
	return size;
}

int DynamicArray::getElement(int index) const {
	return arr[index];
}

void DynamicArray::setElement(int index, int value) {
	arr[index] = value;
}

void DynamicArray::show() {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}
void DynamicArray::randomize() {
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

}
int& DynamicArray:: operator[](int index) {

	/*assert((index < 0 || index >= size) && "Index out of range!");*/
	if (index < 0 || index >= size) {
		cout << "Index out of range!" << endl;
		exit(1);
	}
	return arr[index];
}
int& DynamicArray:: operator[](int index) const {
	if (index < 0 || index >= size) {
		cout << "Index out of range!" << endl;
		exit(1);
	}
	return arr[index];
}
const DynamicArray& DynamicArray:: operator=(const DynamicArray& object) {
	if (!(this == &object)) {
		if (size != object.size) {
			delete arr;
			arr = new int[object.size];
		}
		size = object.size;
		int* destination{ arr };
		int* source{ object.arr };
		int* const end{ arr + size };
		while (destination < end)
		{
			*destination++ = *source++;
		}
	}
	cout << "DynamicArray copy assigned for " <<
		size << " elements, for adress: " << this << endl;
	return *this;
}

DynamicArray& DynamicArray:: operator=(DynamicArray&& object) {
	if (!(this == &object)) {
		if (size != object.size) {
			delete arr;
			arr = object.arr;
			size = object.size;
			object.arr = nullptr;
			object.size = 0;
		}
	}
	cout << "DynamicArray move assigned for " <<
		size << " elements, for adress: " << this << endl;
	return *this;
}

//bool operator==(const DynamicArray&) const;
//bool operator!=(const DynamicArray&) const;
