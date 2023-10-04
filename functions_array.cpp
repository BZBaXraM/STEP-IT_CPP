// Функции должны делать одну вещь 
// и делать ее хорошо и делать только ее.
//                      Роберт С. Мартин

#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

// function prototype
int change_value(int numb);
void change_arr_value(int arr[]);
void fill_arr(int arr[], int length);
void show_arr(int arr[], int length);

void fill_md_array(int arr[][4], int row, int col);
void show_md_array(int arr[][4], int row, int col);


int main() {
	srand(time(NULL));
	//int numb = 5;
	//cout << "Before numb = " << numb << endl; // 5  5   5  5  5
	//change_value(numb);
	//cout << "After numb = " << numb << endl; //  75 80  75 5  75
	/*const int length = 5;
	int arr[length]{};


	fill_arr(arr, length);
	show_arr(arr, length);

	change_arr_value(arr);

	show_arr(arr, length);*/
	const int row = 5, col = 4;
	int a[5][4]{};
	fill_md_array(a, row, col);
	show_md_array(a, row, col);
	return 0;
}

int change_value(int numb) {
	numb = 75;
	return numb;
}

void change_arr_value(int arr[]) {
	arr[0] = 23;
}

void fill_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}

void show_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void fill_md_array(int arr[][4], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void show_md_array(int arr[][4], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << right << setw(2)<< arr[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}