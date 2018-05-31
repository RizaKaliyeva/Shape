#include "Triangle.h"


Triangle::Triangle()
{
	this->a = 0;
	this->b = 0;
	this->c = 0;
	this->x = 0;
	this->y = y;
}

Triangle::Triangle(double a, double b, double c, double x, double y)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->x = x;
	this->y = y;
}

void Triangle::rotation(int gr)
{
	int f = gr / 90;
	for (int i = 0;i < f;i++) {
		double tmp;
		tmp = a;
		a = b;
		b = c;
		c = tmp;
	}
}

double Triangle::area()
{
	double p = this->a + this->b + this->c;
	double area = sqrt(p*(p - this->a)*(p - this->b)*(p - this->c));
	return area;
}


bool Triangle::operator<(Triangle& obj)
{
	return (this->area() < obj.area());
}

bool Triangle::operator==(Triangle& obj)
{
	return (this->area() == obj.area());
}

istream & operator >> (istream & is, Triangle & obj)
{
	is >> obj.a >> obj.b >> obj.c >> obj.x >> obj.y;
	return is;
}

ostream & operator<<(ostream & os, Triangle obj)
{
	os << setw(6) << obj.a << setw(6) << obj.b << setw(6) << obj.c << setw(6) << obj.x << setw(6) << obj.y << endl;
	return os;
}