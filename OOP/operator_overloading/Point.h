#pragma once
#include<iostream>
#include<cassert>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	Point(double x, double y);
	Point();
	static Point add(const Point& left, const Point& right);
	static Point multiple(const Point& other, double value);
	double getX() const;
	void setX(double x);
	double getY()const;
	void setY(double y);
	void show();

	Point operator+(const Point& other) {
		return Point(this->x + other.x, this->y + other.y);
	}

	Point operator-(const Point& other) {
		return Point(this->x + other.x, this->y + other.y);
	}

	friend Point operator*(const Point& left, double value);
	friend Point operator/(const Point& left, double value);

	Point& operator++() {
		++x;
		++y;
		return *this;
	}
	Point& operator++(int) {
		Point tmp(x, y);
		++(*this);
		return tmp;
	}

	bool operator==(const Point& other) {
		return this->x == other.x && this->y == other.y;
	}

	Point operator-() {
		return Point(-x, -y);
	}

	friend ostream& operator<<(ostream& output, const Point& point);
	friend istream& operator>>(istream& input, Point& point);

	
};

