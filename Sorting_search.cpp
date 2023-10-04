// Алгоритм подобен кулинарному рецепту
//                           Васим Латиф

#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

int main() {
	srand(time(NULL));
	const int length = 1000;
	int arr[length]{};
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 1000;
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';


#pragma region Bubble sorting
	// version 1
	int tmp;
	/*count = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			count++;
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	cout << "iterations = " << count << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/

	// version 2
	/*count = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			count++;
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	cout << "iterations = " << count << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/


	// version 3
	/*count = 0;
	bool swapped = false;
	do
	{
		swapped = false;
		for (int i = 0; i < length-1; i++)
		{
			count++;
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}

	} while (swapped);
	cout << "iterations = " << count << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n'; */

#pragma endregion

#pragma region Selection sorting
	/*count = 0;
	int min_i, min_e;

	for (int i = 0; i < length; i++)
	{
		min_e = arr[i];
		min_i = i;
		for (int j = i + 1; j < length; j++)
		{
			count++;
			if (arr[j] < min_e) {
				min_i = j;
				min_e = arr[j];
			}
		}
		if (min_i != i) {
			arr[min_i] = arr[i];
			arr[i] = min_e;
		}
	}

	cout << "iterations = " << count << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/
#pragma endregion

#pragma region Insertion sorting
	count = 0;
	int element, i, j;

	for (i = 0; i < length; i++)
	{
		element = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > element; j--)
		{
			count++;
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = element;

	}

	cout << "iterations = " << count << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

#pragma endregion

#pragma region Linear search 
	int find, index = -1;
	count = 0;
	cout << "Enter find element: \n";
	cin >> find;
	for (int i = 0; i < length; i++)
	{
		count++;
		if (arr[i] == find) {
			index = i;
			break;
		}
	}
	cout << "Iteration = " << count << endl;
	if (index != -1) {
		cout << "Element in index " << index << endl;
	}
	else {
		cout << "Not found!" << endl;
	}

#pragma endregion

#pragma region Binary search
	/*int find, index = -1;*/
	count = 0;
	cout << "Enter find element: \n";
	cin >> find;
	int start = 0, end = length - 1, middle;

	while (true)
	{
		count++;
		middle = (end + start) / 2;
		if (find == arr[middle]) {
			index = middle;
			break;
		}
		else if (find > arr[middle]) {
			start = middle + 1;
			
		}
		else if (find < arr[middle]) {
			end = middle -1;
		}

		if (end <= start) {
			break;
		}
	}

	cout << "Iteration = " << count << endl;
	if (index != -1) {
		cout << "Element in index " << index << endl;
	}
	else {
		cout << "Not found!" << endl;
	}
#pragma endregion



}