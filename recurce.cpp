#include<iostream>

using namespace std;

void foo(int a) {
	if (a == 0) return;
	foo(a - 1);
	cout << a << " Foo" << endl;
}

unsigned long long factorial(int num) {
	unsigned long long result = 1;
	for (int i = num; i > 1; i--)
	{
		result *= i;
	}
	return result;
}

unsigned long long factorial_r(int num) {
	if (num == 0) return 1;
	if (num == 1) return 1;
	return num * factorial_r(num - 1);
}

// n! = n * (n-1)!

void dec_bin_show(int dec) {
	if (dec <= 1) {
		cout << dec;
		return;
	}
	dec_bin_show(dec / 2);
	cout << dec % 2;
}


int dec_bin(int dec) {
	if (dec <= 1) return dec;
	return dec % 2 + dec_bin(dec / 2) * 10;
}

int main() {
	/*cout << factorial(5) << endl;
	cout << factorial_r(5) << endl;*/
	dec_bin_show(179);
	cout << '\n';
	cout << dec_bin(179) << endl;
}