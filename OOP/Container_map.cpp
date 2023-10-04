#include<iostream>
#include<map>
#include<vector>
#include<time.h>

using namespace std;

int main()
{
	map<int, int> mp;
	vector<int> vc;
	/*cout << mp.max_size()<<endl;
	cout << vc.max_size()<<endl;*/

	int value{ };
	int key{ };
	cout << "Enter key: ";
	cin >> key;
	cout << "Enter value: ";
	cin >> value;

	pair<int, int> element(key, value);

	mp.insert(element);
	mp.insert(make_pair(5, 325));


	/*cout << "Enter key: ";
	cin >> key;
	cout << mp[key] << endl;*/

	/*pair<map<int, int>::iterator, bool> error = mp.insert(make_pair(5, 35));

	if(error.second == false)
	{
		cout << "Error" << endl;
	}*/

	cout << mp.size() << endl;

	map<int, int>::iterator itera = mp.begin();

	for (; itera != mp.end(); ++itera)
	{
		cout << "Key = " << itera->first
			<< " Value = " << itera->second << endl;
	}
		
}