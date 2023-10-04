#include<iostream>
#include<vector>
#include<time.h>

using namespace std;

template<class Container>
void show(Container cont)
{
	for (int item : cont)
	{
		cout << item << ' ';
	}
	cout << '\n';
}

int main()
{
	srand(time(NULL));
	// vector
	// https://en.cppreference.com/w/cpp/container/vector
	// https://www.geeksforgeeks.org/vector-in-cpp-stl/
	// https://www.cplusplus.com/reference/vector/vector/
	vector<int> v;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	v.push_back(36);
	show(v);
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	v.resize(5, 0);
	show(v);
	for (size_t i = 1; i < v.size(); i++)
	{
		v[i] = rand() % 90 + 10;
	}
	show(v);
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	cout << "v[2] = " << v.at(2) << endl;
	cout << "max size = " << v.max_size() << endl;

	vector<int>::reverse_iterator r_itera = v.rbegin();
	cout << *r_itera << endl;

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << *(r_itera++) << ' ';
	}
	cout << '\n';

	vector<int>::iterator itera = v.end();

	v.insert(itera - 1, 5);
	v.insert(v.end(), 35);

	for (itera = v.begin(); itera != v.end(); itera++)
	{
		cout << *itera << ' ';
	}
	cout << '\n';

	v.insert(itera - 1, 3, 13);
	show(v);
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	v.pop_back();
	v.erase(v.cbegin()+4);
	show(v);
	v.clear();
	cout << v.empty() << endl;
	show(v);
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
}