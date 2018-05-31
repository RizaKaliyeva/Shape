#pragma once
#include"Library.h"
#include"Point.h"
class Circle : public Point {
private:
	double r;
public:
	Circle() = default;
	Circle(double r, double x, double y) :Point(x, y), r(r) {}
	double area();
	void rotation(int gr) {}
	bool operator<(Circle& obj);
	bool operator==(Circle& obj);
	friend istream& operator >> (istream& is, Circle& obj);
	friend ostream& operator<<(ostream& os, Circle obj);
};
