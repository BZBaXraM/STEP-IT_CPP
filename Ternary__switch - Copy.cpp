// �������, ������� � ��� ��� �������!!!
//                     ������� ��� �. �. �����
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

	// ����� ������ �����
	/*number1 < 0 ? modul = -number1 : modul = number1;
	modul = number1 < 0 ? -number1 : number1;
	cout << modul << endl;*/

	// ���������� ��������� ��������
	/*cout << (number1 > 0 ? "positive" : number1 < 0 ? "negative" : "Zero") << endl;*/


#pragma endregion

#pragma region Abrah Kadabrah (������� �� ������������)
	int number;
	cin >> number;

	(number % 2 == 0) && cout << "Even number" << endl;
	(number % 2 == 0) || cout << "Odd number" << endl;

	// �� ���� ����� ���������� ����� �������

	// ������������ ������� �����. ��������� ���������:
	// ��� ����� � ��������� �� 1 �� 100 ��� ���

#pragma endregion



		return 0;
}