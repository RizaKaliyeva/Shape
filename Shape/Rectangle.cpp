#include "Rectangle.h"

void Rectangle::rotation(int gr)
{
	int f = gr / 90;
	if (f & 2 != 0) {
		double tmp = a;
		a = b;
		b = tmp;
	}
}

double Rectangle::area()
{
	return (a*b);
}

bool Rectangle::operator<(Rectangle & obj)
{
	return (this->area()<obj.area());
}

bool Rectangle::operator==(Rectangle & obj)
{
	return (this->area() == obj.area());
}

istream & operator >> (istream & is, Rectangle & obj)
{
	is >> obj.a >> obj.b >> obj.x >> obj.y;
	return is;
}

ostream & operator<<(ostream & os, Rectangle obj)
{
	os << setw(6) << obj.a << setw(6) << obj.b << setw(6) << obj.x << setw(6) << obj.y << endl;
	return os;
}