#include<iostream>
#include<time.h>

using namespace std;

void fill_arr(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 41 - 20;
	}
}

void show(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}



int main() {
	srand(time(NULL));
	//int* number = new int(5);
	///*for (size_t i = 0; i < 40000000; i++)
	//{
	//	number = new int(52);
	//	delete number;
	//	
	//}*/
	//delete number;
	//cout << "End of programm" << endl;
	int length;
	cin >> length;
	int* arr = new int[length];
	fill_arr(arr, length);
	show(arr, length);
	
	show(arr, length);
}