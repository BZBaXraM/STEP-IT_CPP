#include<iostream>

#include<time.h> // 01.01.1970

using namespace std;

int main() {
#pragma region Arrays
	/*const int length = 5;*/
	/*int arr[length];
	arr[0] = 32;
	arr[1] = 87;
	arr[2] = 15;
	arr[3] = 36;
	arr[4] = 315;

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < length; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/

	/*int arr1[5] = { 2, 5, 9, 7, 78 };

	for (int i = 0; i < length; i++)
	{
		cout << arr1[i] << ' ';
	}
	cout << '\n';

	int arr2[5]{ 24, 45, 69, 74, 728 };
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << '\n';

	int arr3[]{ 6, 78, 74, 12, 3 };
	for (int i = 0; i < length; i++)
	{
		cout << arr3[i] << ' ';
	}
	cout << '\n';

	int arr4[5]{};
	for (int i = 0; i < length; i++)
	{
		cout << arr4[i] << ' ';
	}
	cout << '\n';*/

	/*int arr7[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr7[i];
	}
	for (int i = 0; i < length; i++)
	{
		cout << arr7[i] << ' ';
	}
	cout << '\n';
	for (int i = length-1; i >= 0 ; i--)
	{
		cout << arr7[i] << ' ';
	}
	cout << '\n';*/

#pragma endregion

#pragma region fill random value
	srand(time(NULL)); // seed
	const int length = 10;
	int arr[length]{};
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 201 - 99; // -99  101
		// %(max - min + 1) + min
		// %(101 - (-99) +1) + (-99)
	}
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
#pragma endregion



	return 0;
}