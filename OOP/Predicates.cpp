#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool isPrime(int number)
{
	for (size_t i = 2; i <= number/2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}

bool isEven(int number)
{
	return !(number % 2);
}

class Cat
{
public:
	Cat(string name, int life):name(name), life(life) {}

	bool operator()(const Cat &cat)
	{
		return cat.life <= 0;
	}

private:
	string name;
	int life;
};

int main()
{
	srand(time(NULL));
	// Predicates
	/*list<int> lst;
	for (int i = 0; i < 20; i++)
	{
		lst.push_back(rand() % 100);
	}
	for(auto item: lst)
	{
		cout <<item << ' ';
	}
	cout << '\n';


	cout << count_if(lst.begin(), lst.end(), isPrime) << endl;
	cout << count_if(lst.begin(), lst.end(), isEven) << endl;

	auto a = remove_if(lst.begin(), lst.end(), isEven);
	copy(lst.begin(), a, ostream_iterator<int>(cout, " "));*/

	vector<Cat> cats
	{
		Cat{"Barsik", 5},
		Cat{"Musya", 0},
		Cat{"Kisya", 9},
		Cat{"Pussy in boots", 1},
		Cat{"Step cat", 3},
		Cat{"Pusya", 0}
	};

	cout << count_if(cats.begin(), cats.end(), cats.front()) << endl;

}