#include<iostream>
#include<iomanip>

using namespace std;
int add(int a, int b);
int diff(int a, int b);
int multi(int a, int b);
int divide(int a, int b);

void foo() {
	cout << "foo" << endl;
}

int main() {
	/*int (*ptrfunc)(int, int) = add;
	cout << add << endl;
	cout << ptrfunc << endl;
	cout << (*ptrfunc)(5, 8) << endl;
	ptrfunc = diff;
	cout << (*ptrfunc)(5, 8) << endl;

	void(*pt)(void) = foo;
	(*pt)();*/

	// pointer to function - calculator
	/*int (*ptrfunc)(int, int) = nullptr;
	int numb1, numb2;
	char oper = '\0';
	enum operations { ADD = '+', DIF = '-', MULTI = '*', DIVIDE = '/' };
	cin >> numb1 >> numb2;
	cin >> oper;
	switch (oper)
	{
	case ADD:
		ptrfunc = add;
		break;
	case DIF:
		ptrfunc = diff;
		break;
	case MULTI:
		ptrfunc = multi;
		break;
	case DIVIDE:
		ptrfunc = divide;
		break;
	}
	cout << (*ptrfunc)(numb1, numb2) << endl;*/


	// pointer to function array
	int (*funArray[4])(int, int) { add, diff, multi, divide };

	cout << (*funArray[2])(3, 8) << endl;
}

int add(int a, int b) {
	return a + b;
}

int diff(int a, int b) {
	return a - b;
}

int multi(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}