#include<iostream>
#include<iterator>

using namespace std;

int main()
{
	// STL - Контейнеры, итераторами, функторы, предикаты, 
	// лямбда функции, алгоритмы


	/*int arr[5]{ 5, 9, 8, 12, 3 };

	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';

	for (size_t i = 0; i < 5; i++)
	{
		cout << *(arr+i) << ' ';
	}
	cout << '\n';


	for (int i : arr)
	{
		cout << i << ' ';
	}
	cout << '\n';*/

	/*
		input (входные)					==, !=, *i, ++i, i++, *i++
		output (выходные)				++i, i++, *i = t, *i++ = t
		forward (однонаправленные)		==, !=, *i, ++i, i++, *i++
		bidirectional(двунаправленные)	==, !=, *i, ++i, i++, *i++, --i, i--, *i--
		random access					i+=n, i+n, i-=n, i-n, i1-i2, i[n], i1<i2, i1<=i2, i1>i2, i1>=i2

		template <class InIter, class Dist>
			advance(InIter &itr, Dist d)

		template <class InIter> ptrdiff_t
			distance(InIter &start, InIter &end)
		
	*/
}