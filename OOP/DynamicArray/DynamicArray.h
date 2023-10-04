#pragma once
class DynamicArray
{
	int* arr;
	int size;
public:
	explicit DynamicArray(int size);
	DynamicArray();
	DynamicArray(const DynamicArray& other);
	~DynamicArray();
	int getElement(int index) const;
	int getSize() const;
	void setElement(int index, int value);
	void show();
	void randomize();
	int& operator[](int);
	int& operator[](int) const;
	const DynamicArray& operator=(const DynamicArray&);
	bool operator==(const DynamicArray&) const;
	bool operator!=(const DynamicArray&) const;
};

