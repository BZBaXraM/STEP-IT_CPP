#include<iostream>
#include<map>
#include<string>
#include<time.h>

using namespace std;

template<class Container>
void Show(Container cont)
{
	for (auto i = cont.begin(); i != cont.end(); i++)
	{
		cout << "City: " << i->first
			<< "\tSign: " << i->second << endl;
	}
	cout <<'\n' << string(25, '-') << "\n\n";
}

int main()
{
	map<string, int> mp;
	multimap<string, int> mmp;
	cout << "Map: " << endl;
	mp.insert(pair<string, int>("Baku", 10));
	mp.insert(pair<string, int>("Sumaqyit", 50));
	mp["Ganja"] = 20;
	Show(mp);
	mp["Baku"] = 90;
	Show(mp);
	mp.insert(make_pair("Baku", 99));
	Show(mp);

	cout << "Multimap: " << endl;
	mmp.insert(pair<string, int>("Baku", 10));
	mmp.insert(pair<string, int>("Sumaqyit", 50));
	mmp.insert(pair<string, int>("Ganja", 20));
	Show(mmp);
	mmp.insert(pair<string, int>("Baku", 90));
	Show(mmp);
	mmp.insert(pair<string, int>("Baku", 99));
	Show(mmp);

	multimap<string, int>::iterator itera = mmp.find("Baku");
	/*cout << mmp.count("Baku")<<endl;
	cout << mmp.lower_bound("Baku")->second<<endl;
	cout << mmp.upper_bound("Baku")->second<<endl;*/

	/*for (size_t i = 0; i < mmp.count("Baku"); i++)
	{
		auto iter = itera++;
		cout << "City: " << iter->first
			<< "\tSign: " << iter->second << endl;
	}*/

	for (auto i = mmp.lower_bound("Baku"); i != mmp.upper_bound("Baku"); i++)
	{
		cout << "City: " << i->first
			<< "\tSign: " << i->second << endl;
	}
}