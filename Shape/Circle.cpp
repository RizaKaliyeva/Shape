#include "Circle.h"

double Circle::area()
{
	return (r*r*3.14);
}

bool Circle::operator<(Circle & obj)
{
	return (this->area()<obj.area());
}

bool Circle::operator==(Circle & obj)
{
	return (this->area() == obj.area());
}

istream & operator >> (istream & is, Circle & obj)
{
	is >> obj.r >> obj.x >> obj.y;
	return is;
}

ostream & operator<<(ostream & os, Circle obj)
{
	os << setw(6) << obj.r << setw(6) << obj.x << setw(6) << obj.y << endl;
	return os;
}