#pragma once
#include "Library.h"
#include"Point.h"

class Triangle : public Point {
private:
	double a;
	double b;
	double c;

public:
	Triangle();
	Triangle(double a, double b, double c, double x, double y);

	void rotation(int gr);
	double area();
	bool operator<(Triangle& obj);
	bool operator==(Triangle& obj);
	friend istream& operator >> (istream& is, Triangle& obj);
	friend ostream& operator<<(ostream& os, Triangle obj);
};