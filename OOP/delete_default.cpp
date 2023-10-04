#include<iostream>

using namespace std;

int foo(int a, int b) {
	return a + b;
}
int foo(double a, double b) = delete;
//template <class T1, class T2>
//int foo(T1 a, T2 b) = delete;

class Point
{
public:
	Point() = default;
	Point(int x, int y) : x{ x }, y{y}{}
	Point(const Point& object) = delete;
	Point(Point&& object) = delete;
private:
	int x;
	int y;
};




int main() {
	cout << foo(2, 5);
	cout << foo('a', 4);
	cout << foo(2.5, 5.5);
	/*Point p{ 2, 5 };
	Point p1;*/
}