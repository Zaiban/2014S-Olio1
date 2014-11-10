#include "Ympyra.h"
#include <cmath>

Ympyra::Ympyra() : radius_(0.0)
{
}
Ympyra::Ympyra(double radius) : radius_(radius)
{
}
Ympyra::Ympyra(const Ympyra& org) : radius_(org.radius_)
{
}
Ympyra& Ympyra::operator=(const Ympyra& source)
{
	if (this != &source)
	{
		radius_ = source.radius_;
	}
	return *this;
}
Ympyra::~Ympyra()
{
}
double Ympyra::getRadius() const
{
	return radius_;
}
void Ympyra::setRadius(double radius)
{
	radius_ = radius;
}

double Ympyra::area() const
{
	return 4 * atan(1.0) * radius_ * radius_;
}