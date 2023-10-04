// Функции должны делать одну вещь 
// и делать ее хорошо и делать только ее.
//                      Роберт С. Мартин

#include<iostream>
#include<time.h>

using namespace std;

// return_type name([type param1, type param2 ...]){
//    body;
//    [return [value];]
//}

//Функция которая ничего не принимает и ничего не возвращает
void say_hello() {
	cout << "Hello" << endl;
}


//Функция которая ничего не принимает но возвращает значение
int my_rand() {
	return time(NULL) % 1000;
}

// Функция которая  принимает но ничего не возвращает
void show_age(int year) {
	if (year > 2021) {
		cout << "On ne rodilsya" << endl;
		return;
	}
	cout << "Vam " << 2021 - year << " let." << endl;
}

// Функция которая  принимает и возвращает значение
int add(int numb1, int numb2) {
	return numb1 + numb2;
}


int foo(float numb1, double numb2, bool b) {
	if (b) {
		if (numb1 - numb2 > 0) {
			return 56;
		}
		return 2;
	}
	else {
		return 78;
	}

}
int main() {
	/*say_hello();*/

	/*cout << my_rand() << endl;
	int numb = my_rand();
	cout << numb + my_rand() << endl;*/

	/*show_age(1980);
	int year;
	cin >> year;
	show_age(year);*/

	/*cout << add(3, 5) << endl;
	cout << add(add(3, 8), 5.25) << endl;
	cout << add(add(3, 8), my_rand()) << endl;*/

	/*cout << foo(22.25, 3.76, false);*/

	// Функция принимает целое число 
	// и возвращает куб числа

	// Функция принимает 3 целых числа
	// и возвращает среднеарифметическое
}