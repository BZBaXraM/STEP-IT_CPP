#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

//int add(int a, int b) {
//	return a + b;
//}
//
//float add(float a, float b) {
//	return a + b;
//}
//
//double add(double a, double b) {
//	return a + b;
//}

template <typename T>
T add(T a, T b) {
	return a + b;
}

template <class T>
T add(T a, T b, bool c) {
	if(c) return a + b;
	return a * c;
}

template <typename T1, typename T2>
T2 add(T1 a, T2 b, T2 c);


// error
//template <class T>
//T foo(int a, int b) {
//	T d = 2;
//	return a + b;
//}


int main() {
	/*cout << add(2, 3) << endl;*/
	//cout << add(2.6, 3.8) << endl;
	//cout << add(2.6f, 3.8f) << endl;
	//cout << add('A', 'B') << endl;

	/*cout << add(2, 3, true) << endl;
	cout << add(2.5, 3.6, false) << endl;*/

	//cout << add(3, 2.5, 5.8) << endl; // 8 8 8
	//cout << add(89.3, 2, 5) << endl;   // 4 4 8
	//cout << add(2, 23, 5) << endl;    // 4 4 4


	return 0;
}

template <typename T1, typename T2>
T2 add(T1 a, T2 b, T2 c) {
	return (a + b) / c;
}
