/*В наше время осуществилось волшебство мифа и легенды.
  С клавиатуры вводится верное заклинание,
  и экран монитора оживляет, показывая  то,
  что невозможно было и не могло быть.
								Фредерик Брукс */
#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int summ_two(int a, int b);
int summ_three(int a, int b, int c);

int summ(int a, int b, int c = 0);
double summ(double a, double b, double c = .0);

inline int foo(int a, int b); // 1
int foo(double a, double b); //2
int foo(double a, double b, int u); //3
int foo(int a, double b, double u); // 4

void foo1(int a);
void foo1(int a, int b = 0);

int main() {
	/*cout << summ(2, 89) << endl;*/
	/*cout << summ(2, 8, 78) << endl;
	cout << summ(0.2, 8.89, 0.78) << endl;
	cout << summ(0.2, 8.89) << endl;*/
	//cout << foo(2, 3) << endl; // 1
	//// cout<<foo(2, 3.2)<<endl; // error
	//cout << foo(2.3, 3.2) << endl; // 2
	//cout << foo(2.3, 3.2, 5) << endl; //3
	//cout << foo(5, 3.2, 5.0) << endl; // 4
	//// cout<<foo(5.35, 3, 5.0)<<endl; // error

	/*foo1(2);
	foo1(2, 3);*/
}

int summ_two(int a, int b) {
	return a + b;
}

int summ_three(int a, int b, int c) {
	return a + b + c;
}

int summ(int a, int b, int c) {
	return a + b + c;
}

double summ(double a, double b, double c) {
	return a + b + c;
}

inline int foo(int a, int b) { // 1
	return a * b;
}
int foo(double a, double b) { // 2
	return a * b;
}
int foo(double a, double b, int u) { // 3
	return a * b / u;
}

int foo(int a, double b, double u) { // 4
	return a * b / u;
}

void foo1(int a) {
	cout << "First" << endl;
}

void foo1(int a, int b) {
	cout << "Second" << endl;
}