#include<iostream>
#include<time.h>

using namespace std;

void fill_arr(int arr[], int length);

void show_arr(int arr[], int length);

void bubble_sorting_v1(int arr[], int length);

void bubble_sorting_v2(int arr[], int length);

void bubble_sorting_v3(int arr[], int length);

void insert_sorting(int arr[], int length);

void select_sorting(int arr[], int length);

void quick_sorting_r(int arr[], int n);



int main() {
	const int length = 100000;
	int arr[length]{};
	fill_arr(arr, length);
	clock_t start = clock();
	/*show_arr(arr, length);*/
	
	//bubble_sorting_v1(arr, length); // 37.283 seconds
	//bubble_sorting_v2(arr, length); // 26.689 seconds
	//bubble_sorting_v3(arr, length); // 37.325 seconds

	//insert_sorting(arr, length); // 6.124 seconds

	//select_sorting(arr, length); // 12.235 seconds

	//quick_sorting_r(arr, length - 1); // 0.028 seconds
	clock_t end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC<< " seconds";
	/*show_arr(arr, length);*/
}


void fill_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 1000;
	}
}

void show_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void bubble_sorting_v1(int arr[], int length) {
	int temp = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void bubble_sorting_v2(int arr[], int length) {
	int temp = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j > i; j--)
		{

			if (arr[j] < arr[j - 1]) {
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void bubble_sorting_v3(int arr[], int length) {
	bool swapped = false;
	int temp = 0;
	do
	{
		swapped = false;
		for (int i = 0; i < length - 1; i++)
		{

			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);
}

void insert_sorting(int arr[], int length) {
	int temp = 0, i, j;

	for (i = 0; i < length; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
}

void select_sorting(int arr[], int length) {
	int min_index, min;

	for (int i = 0; i < length; i++)
	{
		min_index = i;
		min = arr[i];

		for (int j = i + 1; j < length; j++)
		{
			if (min > arr[j]) {
				min = arr[j];
				min_index = j;
			}
		}
		if (min_index != i) {
			arr[min_index] = arr[i];
			arr[i] = min;
		}
	}
}

void quick_sorting_r(int arr[], int n) {
	int i = 0, j = n;
	int tmp, p;
	p = arr[n / 2];
	do
	{
		while (arr[i] < p) i++;
		while (arr[j] > p) j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	} while (i <= j);

	if (j > 0) quick_sorting_r(arr, j);
	if (n > i) quick_sorting_r(arr + i, n - i);
}

