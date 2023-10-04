#include<iostream>
#include<iomanip>

using namespace std;
// заполнение многомерного динамического массива
void fill_md_arr(int** arr, int ROW, int COL) {
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
// вывод на консоль многомерного динамического массива
void show_md_arr(int** arr, int ROW, int COL) {
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << '\n';
	}
}

int main() {
	srand(time(NULL));
	//int a = 5;
	//int* ptra = &a;

	//cout <<"&a = " << &a << endl;
	//cout <<"ptra = " << ptra << endl;
	//cout <<"&ptra = " << &ptra << endl;
	//
	//// pointer to pointer
	//int** ptrptra = &ptra;
	//cout <<"ptrptra = " << ptrptra << endl;

	//cout << "a = " << a << endl;
	//cout << "*ptra = " << *ptra << endl;
	//cout << "*ptrptra = " << *ptrptra << endl;
	//cout << "**ptrptra = " << **ptrptra << endl;

	// pointers array

	/*int a = 5, b = 3, c = 56;
	int** arr = new int*[3];
	arr[0] = new int(5);
	arr[1] = new int(3);
	arr[2] = new int(6);

	for (int i = 0; i < 3; i++)
	{
		cout << *arr[i] << " ";
	}
	cout << '\n';

	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	for (int i = 0; i < 3; i++)
	{
		cout << *arr[i] << " ";
	}
	cout << '\n';*/

	// multi dimension dynamic array
	//// создание многомерного динамического массива
	//int** mdArr = new int* [3];
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	*(mdArr+i) = new int[3];
	//}

	//fill_md_arr(mdArr, 3, 3);
	//show_md_arr(mdArr, 3, 3);

	//// удаление многомерного динамического массива
	//for (int i = 0; i < 3; i++)
	//{
	//	delete[] mdArr[i];
	//}
	//delete[] mdArr;

	// jagged array
	// triangke array
	/*int l;
	cin >> l;
	int** triangleArr = new int* [l];

	for (int i = 0; i < l; i++)
	{
		triangleArr[i] = new int[i + 1];
	}

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			triangleArr[i][j] = rand() % 90 + 10;
		}
	}

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout<< setw(3) <<left <<triangleArr[i][j];
		}
		cout << '\n';
	}*/

	/*int lengths[]{ 4, 2, 6, 1, 3, 1, 2 };

	int** jagged = new int* [7];

	for (int i = 0; i < 7; i++)
	{
		jagged[i] = new int[lengths[i]];
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < lengths[i]; j++)
		{
			jagged[i][j] = rand() % 90 + 10;
		}
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < lengths[i]; j++)
		{
			cout << setw(3) << left << jagged[i][j];
		}
		cout << '\n';
	}*/

	
}
