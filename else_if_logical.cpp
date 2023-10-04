// Как приятно знать, что ты что - то узнал! Мольер

#include <iostream>

using namespace std;

int main() {
	//int number = 0;
	//cout << "Enter number: " << endl;
	//cin >> number;

	///*if (number > 0) {
	//	cout << number << " is positive.\n";
	//}
	//else
	//{
	//	if (number < 0) {
	//		cout << number << " is negative.\n";
	//	}
	//	else {
	//		cout << number << " is zero.\n";
	//	}
	//}*/

	//if (number > 0) {
	//	cout << number << " is positive.\n";
	//}
	//else if (number < 0) {
	//	cout << number << " is negative.\n";
	//}
	//else {
	//	cout << number << " is zero.\n";
	//}

	// Задание 1
	// Реализовать простой калькульятор. Пользователь вводит 2 целых числа
	// и выбирает операцию например из меню
	// 1. a + b
	// 2. a - b
	// 3. a * b
	// 4. a / b

	//int number1, number2;
	//char choose;
	//cout << "Enter first number: " << endl;
	//cin >> number1;
	//cout << "Enter second number: " << endl;
	//cin >> number2;
	///*cout << "1. a + b\n2. a - b\n3. a * b\n4. a / b" << endl;*/
	//cout << "Select operation: (+, -, * /)" << endl;
	//cin >> choose;
	//if (choose == '+') cout << number1 + number2 << endl;
	//else if (choose == '-') cout << number1 - number2 << endl;
	//else if (choose == '*') cout << number1 * number2 << endl;
	//else if (choose == '/') {

	//	if (number2 == 0) {
	//		cout << "Cannot divide by zero!" << endl;
	//	}
	//	else {
	//		cout << number1 / (float)number2 << endl;
	//	}
	//}


	// Задание 2
	// Пользователь вводит целое число: 
	// если число кратно 3 вывести слово Fizz
	// если число кратно 5 вывести слово Buzz
	// если число кратно 3 и 5 одновременно, вывести слово Fizz-Buzz
	// если не число кратно не 3 и не 5 вывести само число

	/*int number;
	cin >> number;

	if (number % 3 == 0) {
		if (number % 5 == 0) cout << "Fizz-Buzz" << endl;
		else cout << "Fizz" << endl;
	}
	else if (number % 5 == 0) cout << "Buzz" << endl;
	else cout << number << endl;*/

	// Задание 3
	// Пользователь вводит СИМВОЛ, проверить этот символ цифра или буква 

	/*char symbol;
	cout << "Enter any symbol: " << endl;
	cin >> symbol;
	if (symbol >= 'a') {
		if (symbol <= 'z') {
			cout << "Its lower letter" << endl;
		}
		else {
			cout << "Its not digit and not letter" << endl;
		}
	}

	else if (symbol >= 'A') {
		if (symbol <= 'Z') {
			cout << "Its upper letter" << endl;
		}
		else {
			cout << "Its not digit and not letter" << endl;
		}
	}
	else if (symbol >= '0') {
		if (symbol <= '9') {
			cout << "Its digit" << endl;
		}
		else {
			cout << "Its not digit and not letter" << endl;
		}
	}*/


	// Логические операторы

	// Логическое и - &&
	//cout << boolalpha << (true && true) << endl; // true
	//cout << boolalpha << (true && false) << endl; // false
	//cout << boolalpha << (false && true) << endl; // false
	//cout << boolalpha << (false && false) << endl; // false

	/*int number;
	cin >> number;

	if (number % 3 == 0 && number % 5 == 0) {
		cout << "Fizz-Buzz" << endl;
	}
	else if (number % 3 == 0) cout << "Fizz" << endl;
	else if (number % 5 == 0) cout << "Buzz" << endl;
	else cout << number << endl;*/


	// Логическое или - ||
	//cout << boolalpha << (true || true) << endl; // true
	//cout << boolalpha << (true || false) << endl; // true
	//cout << boolalpha << (false || true) << endl; // true
	//cout << boolalpha << (false || false) << endl; // false
	short bread, kebab;
	cout << "XLEB yest? 1 or 0" << endl;
	cin >> bread;
	cout << "Kebab yest? 1 or 0" << endl;
	cin >> kebab;

	if (bread == 1 || kebab == 1) {
		cout << "Bon appetit!!!" << endl;
	}
	else {
		cout << "Momento more" << endl;
	}

	// Логический нет - !
	/*cout << boolalpha << !true << endl;
	cout << boolalpha << !false << endl;*/

	/*bool to_be = true;
	cout << boolalpha << (to_be || !to_be) << endl;*/
	
	return 0;
}