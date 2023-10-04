#include<iostream>

using namespace std;

int main() {
	int b = 3;
	const int a = 5;
	const int* ptra = &a; // pointer to constant value
	int* const ptrb = &b; // constant pointer
	const int* const ptr = &b; // constant pointer to constant value

}