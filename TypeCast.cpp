// � ������� � �����, � ������ � ��������, � ������ � �����. ��������.
#include<iostream>

using namespace std;

int main() {
	// Type casting - ���������� �����
	/*setlocale(LC_ALL, "Russian");*/

	// Python - typecasting 
	// name = "Nadir"
	// age = 41
	// print(name + " you are " + str(age) + " years old")

	/*cout << "������ ���" << endl;*/
	int int_numb = 152;
	float float_numb = 0.65f;
	char symb = 'a';
	bool bool_val = true;

	/*int_numb = float_numb;
	cout << int_numb << endl;*/

	/*bool_val = float_numb;
	cout << bool_val << endl;*/

	// bool -> char -> short -> int -> long long -> float -> double

	// �������� - ���� ������� ��� �������� � �������� ����� ������ ������
	/*bool_val = float_numb;
	cout << bool_val << endl;*/

	// ����������� - ���������� �������� ���� � �������� ����
	/*int_numb = symb;
	cout << int_numb << endl;*/


	// ������� ���������� ����� - implicit typecasting
	/*int_numb = 'A';
	symb = 67;
	cout << int_numb << endl;
	cout << symb << endl;*/

	// ����� ���������� ����� - explicit typecasting
	/*int_numb = (int)float_numb;*/

	int a = 25;
	int b = 2;
	cout << sizeof(b) << " byte" << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / (float)b << endl;

	// ����� - ��� �������������� ��������� ������ �����, ��������� ����� �������� ����

	/*cout << sizeof(true + 2.0) << " byte" << endl;
	cout << true + 2.0  << endl;*/
	/*cout << (int)(true + true + 0.2) << endl;*/

	/*cout << sizeof(b) <<" byte" << endl;*/

}