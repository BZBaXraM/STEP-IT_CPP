#include <iostream>
#include <string.h>
#include"DynamicArray.h"
using namespace std;

class Account {
private:
	double sum;
	const double percent;
public:
	Account(double percent, double sum) : percent{percent} {
		this->sum = sum;
	}
	
	double getPercent() const {
		return percent;
	}
	double getIncome() {
		cout << "Non const" << endl;
		return sum * percent / 100;
	}
	double getIncome() const {
		cout << "Const" << endl;
		return sum * percent / 100;
	}
	double getSum() {
		cout << "Non const" << endl;
		return sum;
	}
	double getSum() const{
		cout << "Const" << endl;
		return sum;
	}
	double setSum() {
		sum += getIncome();
		return sum;
	}
};

void show(const DynamicArray& array) {
	
	for (size_t i = 0; i < array.getSize(); i++)
	{
		cout << array.getElement(i) << " ";
	}
	cout << endl;
}

void sh(const int a) {
	cout << a << endl;
}

int main() {
	/*Account account1(8, 2325);
	const Account account2(18, 6974);*/

	/*account1.getPercent();
	account2.getPercent();

	account1.getIncome();
	account2.getIncome();*/

	DynamicArray arr(25);
	arr.randomize();
	show(arr);
	/*cout << arr[-8] << endl;*/
	sh(arr[-8]);
}