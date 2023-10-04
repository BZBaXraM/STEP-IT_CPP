// ”читьс€, учитьс€ и еще раз учитьс€!!!
//                     говор€т что ¬. ». Ћенин
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

#pragma region Abrah Kadabrah (никогда не использовать)
	int number;
	cin >> number;

	(number % 2 == 0) && cout << "Even number" << endl;
	(number % 2 == 0) || cout << "Odd number" << endl;

	// из двух чисел определить самую большую

	// ѕользователь вводить число. программа провер€ет:
	// это число в диапазоне от 1 до 100 или нет

#pragma endregion



		return 0;
}