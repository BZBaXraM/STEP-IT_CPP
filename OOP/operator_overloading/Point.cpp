#include "Point.h"
Point::Point(double x, double y) :x{ x }, y{ y } {}
Point::Point() : Point(0, 0) {}
Point Point::add(const Point& left, const Point& right) {
	return { left.x + right.x, left.y + right.y };
}
Point Point::multiple(const Point& other, double value) {
	return { double(other.x * value), double(other.y * value) };
}

double Point::getX()const { return x; }
void Point::setX(double x) { this->x = x; }
double Point::getY() const { return y; }
void Point::setY(double y) { this->y = y; }
void Point::show() {
	cout << "x: " << x << " y: " << y << endl;
};


Point operator*(const Point& left, double value) {
	return Point(left.x * value, left.y * value);
}

Point operator/(const Point& left, double value) {
	return Point(left.x / value, left.y / value);
}

ostream& operator<<(ostream& output, const Point& point) {
	output << "x: " << point.x << " y: " << point.y;	
	return output;
}

istream& operator>>(istream& input, Point& point) {
	//cout << "Enter x: ";
	input >> point.x;
	input.ignore(1);
	/*cout << "Enter y: ";*/
	input >> point.y;
	return input;
}

