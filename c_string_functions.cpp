#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;


int main() {
	// int getchar() - возвращает числовое (ASCII) значение символа
	// int _getch() - возвращает числовое значение символа или клавиша, без нажатия на enter

	// int putchar(int n); - принимает int значение выводит на консоль символ

	// вводим маленькие буквы вместо них выход€т большие
	// вводим большие буквы вместо них выход€т маленькие
	// вводим числа вместо них выход€т пробелы
	// вводим 0 программа останавливается 

	/*char symb = '\0';
	while (true)
	{
		symb = _getch();
		if (symb == '0') break;
		else if (symb >= 'A' && symb <= 'Z') putchar(symb + 32);
		else if (symb >= 'a' && symb <= 'z') putchar(symb - 32);
		else if (symb >= '0' && symb <= '9') putchar(32);
		else putchar(symb);
	}
	cout << "End of code" << endl;*/


	// strcpy_s(str1, str2)
	//char* str1 = new char[50];
	//char* str2 = new char[50];
	//cin >> str1 >> str2;
	//cout << str1 << " " << str2 << endl;
	///*strcpy_s(str1, 50, str2);*/
	///*strncpy_s(str1, 50, str2, 4);*/
	//cout << str1 << " " << str2 << endl;


	// strcat_s(str1, str2)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;*/
	/*cout << str1 << " " << str2 << endl;*/
	/*strcat_s(str1, 50, str2);
	cout << str1 << " " << str2 << endl;*/
	//strcat_s(str1, 50, " a.k.a. ");
	//strcat_s(str1, 50, str2);
	//cout << str1 << endl;


	// strlen(str)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;
	cout << strlen(str1) << " " << strlen(str2) << endl;*/


	// strcmp(str1, str2)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;
	cout << strcmp(str1, str2) << endl;*/

	// strncmp(str1, str2)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;
	cout << strncmp(str1, str2, 2) << endl;*/


	// _stricmp(str1, str2)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;
	cout << _stricmp(str1, str2) << endl;*/



	// _strlwr_s(str)
	// _strupr_s(str)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;
	_strlwr_s(str1, 50);
	_strupr_s(str2, 50);
	cout << str1 << " " << str2 << endl;*/


	// strchr(str1, symbol)
	/*char* str1 = new char[50];
	char symbol;

	cin >> str1 >> symbol;
	cout << strchr(str1, symbol) << endl;*/

	// strrchr(str1, symbol)
	/*char* str1 = new char[50];
	char symbol;

	cin >> str1 >> symbol;
	cout << strrchr(str1, symbol) << endl;*/

	// strstr(str, sub_str)
	/*char* str1 = new char[50];
	char* str2 = new char[50];
	cin >> str1 >> str2;
	cout << strstr(str1, str2);*/

	// _strrev(str)
	//char* str1 = new char[50];
	//cin >> str1;
	//_strrev(str1);
	//cout << str1 << endl;

	// _strset_s(str, symbol)
	/*char* str1 = new char[50];
	cin >> str1;
	_strset_s(str1, 50, 'A');
	cout << str1 << endl;*/

	//_strnset_s(str, symbol)
	/*char* str1 = new char[50];
	cin >> str1;
	_strnset_s(str1, 50, 'A', 10);
	cout << str1 << endl;*/

	//atoi()
	/*char* str1 = new char[50];
	cin >> str1;
	cout << atoi(str1) + atoi(str1) << endl;*/

	//_itoa_s()
	/*int numb;
	cin >> numb;
	char* str1 = new char[50];
	_itoa_s(numb, str1, 50, 2);
	cout << str1 << endl;*/

	//atof()
	/*char* str1 = new char[50];
	cin >> str1;
	cout << atof(str1) + atof(str1) << endl;*/
	//gets_s()
	/*char* str1 = new char[50];
	gets_s(str1, 50);
	cout << str1 << endl;*/

	//puts(str)
	// puts(str1);

	// cin.getline()
	char* str1 = new char[255];
	/*cin.getline(str1, 255);
	cout << str1 << endl;*/
	cin.getline(str1, 255, '.');
	puts(str1);

	// Nadir Zamanov 1980
	// nad_zam_41
	// ******













}