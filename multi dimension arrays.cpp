#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int main() {
	srand(time(NULL));
	//const short length = 5;
	//int arr[length]{ 'a', 5.3, 1, 25.3f, true };
	//int arr1[length];
	//int arr2[length]{ 2, 9, 78, 6, 20 };
	//double mass[32];
	///*for (int i = 0; i < length; i++) {
	//	cout << arr[i] << ' ';
	//}
	//cout << '\n';*/

	//cout << sizeof(arr) << " byte" << endl;
	//cout << sizeof(arr1) << " byte" << endl;
	//cout << sizeof(arr2) << " byte" << endl;
	//int l;
	//l = sizeof(mass) / sizeof(mass[0]);
	//cout << l << endl;
	//for (int i = 0; i < l; i++)
	//{
	//	mass[i] = rand() % 1000 * 0.1;
	//}

	//for (int i = 0; i < l; i++)
	//{
	//	cout<< mass[i] <<' ';
	//}
	//cout << '\n';

#pragma region multidimension arrays
	const int row = 3, col = 3;
	/*
	int arr[row][col]{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};*/
	/*cout << arr[1][-1] << endl;*/

	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}*/

	/*int arr2[row][col]{ 5, 87, 79, 31, 78, 14, 178 ,12, 78 };*/
	/*cout << arr2[2][0] << endl;*/

	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(3) << left <<setfill('^') << arr2[i][j] << ' ';
		}
		cout << '\n';
	}*/

	/*int three_d_arr[3][3][3]{
		{{15, 25, 81}, {17, 87, 78}, {13, 78, 92}}, 
		{{1 ,56, 89}, {123, 321, 799}, {4, 5, 6}}, 
		{{7, 8, 9}, {10, 11, 115}, {99, 98, 91}},
	};*/

	/*int count = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 3; k++){
				three_d_arr[i][j][k] = rand() % 150;
			}
		}
	}
	cout << count << endl;*/

	//int arr3[row][col]{};
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		arr3[i][j] = rand() % 100;
	//	}
	//}

	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout<< setw(3) << arr3[i][j]<<' ';
	//	}
	//	cout << '\n';
	//}
	//// i * col + j
	///*cout << arr3[0][2 * col + 1] << endl;*/

#pragma endregion

}