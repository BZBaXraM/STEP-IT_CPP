#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

class Test
{
private:
	int a = 0;
public:
	void operator()()
	{
		a++;
		cout << "Some" << endl;
	}
	int operator()(int n1)
	{
		a++;
		return n1;
	}
	int operator()(int n1, int n2)
	{
		a++;
		return n1 + n2;
	}
	void show()
	{
		cout << a << endl;;
	}
};

class addNumberFrom
{
private:
	int delta;
	int current;
public:
	addNumberFrom(int number, int from = 0)
		: delta(number), current(from){}

	int operator()()
	{
		return current += delta;
	}
};

int main()
{
	// Functors
	/*Test t;
	cout << t(5, 6) << endl;
	cout << t(25, 78) << endl;
	cout << t(45, 3) << endl;
	cout << t(15, 4) << endl;
	cout << t(6, 456) << endl;
	cout << t(6) << endl;
	t();
	t.show();*/
	/*cout << "Multiplication table: \n" << endl;
	for (size_t i = 1; i <= 10; i++)
	{
		list<int> lst(10);
		generate_n(lst.begin(), lst.size(), addNumberFrom(i));
		copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, "\t"));
		cout << '\n';
	}*/
}