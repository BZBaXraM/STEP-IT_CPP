#include<iostream>
#include<time.h>

using namespace std;
void fill_array(int* arr, int SIZE, int min = 0, int max = 100);
void show_array(int* arr, int SIZE);

int main() {
	srand(time(NULL));
	/*const int SIZE = 10;
	int arr[SIZE]{};
	fill_array(arr, SIZE);
	show_array(arr, SIZE);*/

	// ���������� ����������  
	//cout << &arr[0] + 1 << endl; // � ���������� ����� ��������� ������������� �������� - �������� ������ �����
	//cout << &arr[9] - 3 << endl; // �� ��������� ����� �������� ������������� �������� - �������� ������ �����
	//cout << &arr[9] - &arr[0] << endl; // �� ��������� ����� �������� ��������� - �������� ���������� ����� ��������

	// cout << &arr[1] + &arr[0] << endl; // error

	/*cout << &SIZE - arr << endl;
	cout << *(arr + 12) << endl;*/


	int* a;
	//a = 0; // ������. �����������. ��� ������� �� ������!!!
	//a = NULL;	// �� ����� �. ��� ������� �� ������!!!
	//a = nullptr;	//�������, ������ ������ ���.

	//if (a != nullptr){
	//cout << a << endl;
	//} 



	return 0;
}

void fill_array(int* arr, int SIZE, int min, int max) {
	for (int i = 0; i < SIZE; i++)
	{
		*(arr + i) = rand() % (max - min + 1) + min;
	}
}

void show_array(int* arr, int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << '\n';
}