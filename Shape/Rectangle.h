#pragma once
#include"Library.h"
#include"Point.h"

class Rectangle :public Point {
private:
	double a;
	double b;
public:
	Rectangle() = default;
	Rectangle(double a, double b, double x, double y) :Point(x, y), a(a), b(b) {}

	void rotation(int gr);
	double area();
	bool operator<(Rectangle& obj);
	bool operator ==(Rectangle& obj);
	friend istream& operator >> (istream& is, Rectangle& obj);
	friend ostream& operator<<(ostream& os, Rectangle obj);

};