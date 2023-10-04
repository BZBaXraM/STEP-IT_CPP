// Всему, что я знаю, я научился из книг.
//                               Авраам Линкольн
#include<iostream>
#include<Windows.h>

using namespace std;

int main() {
	/*int a = 0;

	while (a <= 10) {
		cout << a <<" ";
		a++;
	}
	cout << "\nEnd of loop!!!" << endl;

	for (int i = 0; i <= 10; i++){
		cout << i << " ";
	}
	cout << "\nEnd of loop!!!" << endl;*/

	/*for (int i = 0, j = 2; i <= 5 && j < 15; i++, j+=2) {
		cout << i << " " << j << endl;
	}
	cout << "\nEnd of loop!!!" << endl;*/

#pragma region break continue

	/*int a = 0;

	while (a <= 10) {
		if (a == 5) break;
		cout << a << " ";
		a++;
	}
	cout << "\nEnd of loop!!!" << endl;*/


	/*int a = 0;

	while (a <= 10) {
		if (a == 5) { 
			continue; 
		}
		a++;
		cout << a << " ";
	}
	cout << "\nEnd of loop!!!" << endl;*/


	/*for (int i = 0; i <= 10; i++)
	{
		cout << i << " ";
		if (i == 5) {
			continue;
		}
	}
	cout << "\nEnd of loop!!!" << endl;*/
#pragma endregion
	
	for (;;) {
		cout << "Hello world" << " ";
	}
	cout << "\nEnd of loop!!!" << endl;

	return 0;
}