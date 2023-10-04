#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Cat
{
public:
	Cat(string name, int life, int age) : name(name), life(life), age(age) {}
	bool operator()()
	{
		return life > 0;
	}
	string name;
	int life;
	int age;
};

bool isPrime(int n)
{
	for (size_t i = 2; i <= n / 2; i++)
	{
		if (n % i == 0) return false;
	}
	return true;

}

bool age_compare(const Cat& cat1, const Cat& cat2)
{
	return cat1.age < cat2.age;
}

bool compare(int n1, int n2)
{
	return n1 > n2;
}

bool less_100(int n)
{
	return n < 100;
}

class
{
public:
	bool operator()(int n) const { return n < 100;}
};

void cout_n(int n, void (*p)(int))
{
	p(n);
}

int main()
{
	int numb{};
	vector<int> numbs{ 13, 78, 9, 718, 1, 365, 78 };
	/*cin >> numb;*/
	/*auto r = find(numbs.begin(), numbs.end(), numb);

	if (r == numbs.end())
	{
		cout << numb << " is not found" << endl;
	}
	else
	{
		cout << numb << " in this vector" << endl;
	}*/

	vector<int> some;
	/*auto r = find_if(numbs.begin(), numbs.end(), isPrime);

	if (r == numbs.end())
	{
		cout << "prime number is not found" << endl;
	}
	else
	{
		cout << "prime number in this vector" << endl;
	}*/

	/*copy(numbs.begin(), numbs.end(), back_inserter(some));*/
	/*copy_if(numbs.begin(), numbs.end(), back_inserter(some), isPrime);

	for (auto item: some)
	{
		cout << item << ' ';
	}
	cout << '\n';*/


	/*int arr[] { 13, 78, 9, 718, 1, 365, 718 };
	auto r = find(arr, arr + 7, 718);
	if (r == arr+7)
	{
		cout << "number is not found" << endl;
	}
	else
	{
		cout << "number in this array" << endl;
	}*/


	/*cout << *(max_element(numbs.begin(), numbs.end())) << endl;
	cout << *(min_element(numbs.begin(), numbs.end())) << endl;*/

	vector<Cat> cats
	{
		Cat("Barsik", 2, 5),
		Cat("Realik", 0, 21),
		Cat("Neftchik", 21, 3),
		Cat("Kotik", 3, 4),
		Cat("Pupsik", 4, 7),
		Cat("Bobik", 6, 9),
	};
	/*auto max_e = max_element(cats.begin(), cats.end(), age_compare);
	cout << (* max_e).name << endl;*/

	/*int iter = 0;
	int comp = cats.at(iter).age;
	for (size_t i = 1; i < cats.size(); i++)
	{
		if (cats.at(i).age > comp)
		{
			comp = cats.at(i).age;
			iter = i;
		}
	}
	cout << cats.at(iter).name << endl;*/

	/*sort(numbs.begin(), numbs.end(), compare);

	for (auto item : numbs)
	{
		cout << item << ' ';
	}
	cout << '\n';*/

	/*sort(cats.begin(), cats.end(), age_compare);

	for (auto cat : cats)
	{
		cout << "name: " << cat.name << "\t life = " << cat.life << "\t age = " << cat.age << '\n';
	}*/


	/*auto r = remove(numbs.begin(), numbs.end(), 718);
	numbs.erase(r, numbs.end());
	for (auto item : numbs)
	{
		cout << item << ' ';
	}
	cout << '\n';*/

	/*auto r = remove_if(numbs.begin(), numbs.end(), less_100);
	numbs.erase(r, numbs.end());
	for (auto item : numbs)
	{
		cout << item << ' ';
	}
	cout << '\n';*/

	// lambda expression, anonymous function
	// [](){}

	/*auto r = remove_if(numbs.begin(), numbs.end(), [](int n) {return n < 100; });
	numbs.erase(r, numbs.end());
	for (auto item : numbs)
	{
		cout << item << ' ';
	}
	cout << '\n';*/


	/*sort(cats.begin(), cats.end(),
		[](const Cat& cat1, const Cat& cat2)
		{
			return cat1.age > cat2.age;
		}
	);

	for (auto cat : cats)
	{
		cout << "name: " << cat.name << "\t life = " << cat.life << "\t age = " << cat.age << '\n';
	}*/


	cout_n(5, [](int n) {cout << n << endl; });
	cout_n(10, [](int n) {cout << n * 25 << endl; });

}
