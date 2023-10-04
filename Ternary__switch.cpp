// Учиться, учиться и еще раз учиться!!!
//                     говорят что В. И. Ленин
#include <iostream>

using namespace std;

int main() {
#pragma region Ternary
	/*int number1, modul;

	cin >> number1;*/

	/*if (number1 % 2 == 0) {
		cout << "Even number" << endl;
	}
	else {
		cout << "Odd number" << endl;
	}*/

	// Ternary operator - ?:

	/*number1 % 2 == 0 ? cout << "Even number\n" : cout << "Odd number\n";*/
	/*cout << (number1 % 2 == 0 ? "Even number" : "Odd number") << endl;*/

	// найти модуль числа
	/*number1 < 0 ? modul = -number1 : modul = number1;
	modul = number1 < 0 ? -number1 : number1;
	cout << modul << endl;*/

	// встроенный тернарный оператор
	/*cout << (number1 > 0 ? "positive" : number1 < 0 ? "negative" : "Zero") << endl;*/


#pragma endregion

#pragma region Abrah Kadabrah - особенности логических операторов (НИКОГДА НЕ ИСПОЛЬЗОВАТЬ)
	/*int number;
	cin >> number;

	(number % 2 == 0) && cout << "Even number" << endl;
	(number % 2 == 0) || cout << "Odd number" << endl;*/

	// из двух чисел определить самую большую

	// Пользователь вводить число. программа проверяет:
	// это число в диапазоне от 1 до 100 или нет

#pragma endregion


#pragma region switch

	/*int numb1, numb2;
	int oper;
	cout << "1. a + b\n2. a - b\n3. a * b\n4. a / b" << endl;
	cout << "Enter first:\n";
	cin >> numb1;
	cout << "Enter second:\n";
	cin >> numb2;
	cout << "Enter operation menu number:\n";
	cin >> oper;
	if (oper == 1) {
		cout << numb1 + numb2 << endl;
	}
	else if (oper == 2) {
		cout << numb1 - numb2 << endl;
	}
	else if (oper == 3) {
		cout << numb1 * numb2 << endl;
	}
	else if (oper == 4) {
		if (numb2 == 0) {
			cout << "Cannot divide by zero" << endl;
		}
		else {
		cout << numb1 / (float)numb2 << endl;

		}
	}*/

	/*int numb1, numb2;
	int oper;
	cout << "1. a + b\n2. a - b\n3. a * b\n4. a / b" << endl;
	cout << "Enter first:\n";
	cin >> numb1;
	cout << "Enter second:\n";
	cin >> numb2;
	cout << "Enter operation menu number:\n";
	cin >> oper;

	switch (oper)
	{
	case 1:
		cout << numb1 + numb2 << endl;
		break;
	case 2:
		cout << numb1 - numb2 << endl;
		break;
	case 3:
		cout << numb1 * numb2 << endl;
		break;
	case 4:
		if (numb2 == 0) {
			cout << "Cannot divide by zero" << endl;
		}
		else {
			cout << numb1 / (float)numb2 << endl;
		}
		break;
	default:
		cout << "Incorrect menu item" << endl;
		break;
	}*/

	/*int numb1, numb2;
	char oper;
	cout << "1. a + b\n2. a - b\n3. a * b\n4. a / b" << endl;
	cout << "Enter first:\n";
	cin >> numb1;
	cout << "Enter second:\n";
	cin >> numb2;
	cout << "Enter operation menu number:\n";
	cin >> oper;

	switch (oper)
	{
	case '+':
		cout << numb1 + numb2 << endl;
		break;
	case '-':
		cout << numb1 - numb2 << endl;
		break;
	case '*':
		cout << numb1 * numb2 << endl;
		break;
	case '/':
		if (numb2 == 0) {
			cout << "Cannot divide by zero" << endl;
		}
		else {
			cout << numb1 / (float)numb2 << endl;
		}
		break;
	default:
		cout << "Incorrect menu item" << endl;
		break;
	}*/


	/*int num;
	cin >> num;
	switch (num) {
	case 1: cout << "Monday" << endl;    break;
	case 2: cout << "Tuesday" << endl;   break;
	case 3: cout << "Wednesday" << endl; break;
	case 4: cout << "Thursday" << endl;  break;
	case 6: cout << "Saturday" << endl;  break;
	case 7: cout << "Sunday" << endl;    break;
	default: cout << "Wow. Vi pridumali noviy den nedeli" << endl; break;*/

	// enum
	enum weekdays {
		MONDAY = 1,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		SUNDAY
	};
	int week_day;
	cin >> week_day;
	switch (week_day)
	{
	case MONDAY:
		cout << "Monday" << endl;
		break;
	case TUESDAY:
		cout << "Tuesday" << endl;
		break;
	case WEDNESDAY:
		cout << "Wednesday" << endl;
		break;
	case THURSDAY:
		cout << "Thursday" << endl;
		break;
	case FRIDAY:
		cout << "Friday" << endl;
		break;
	case SATURDAY:
		cout << "Saturday" << endl;
		break;
	case SUNDAY:
		cout << "Sunday" << endl;
		break;
	default:
		cout << "Wow. Vi pridumali noviy den nedeli" << endl;
		break;
	}

	
#pragma endregion



	return 0;
}