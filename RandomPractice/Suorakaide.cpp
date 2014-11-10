#include "Suorakaide.h"


Suorakaide::Suorakaide() : height_(0.0), width_(0.0)
{
}
Suorakaide::Suorakaide(double height, double width):
height_(height), width_(width)
{
}
Suorakaide::Suorakaide(const Suorakaide& org):
height_(org.height_), width_(org.width_)
{
}
Suorakaide& Suorakaide::operator=(const Suorakaide& source)
{
	if (this != &source)
	{
		height_ = source.height_;
		width_ = source.width_;
	}
	return *this;
}
Suorakaide::~Suorakaide()
{
}
double Suorakaide::getHeight() const
{
	return height_;
}
double Suorakaide::getWidth() const
{
	return width_;
}
void Suorakaide::setHeight(double height)
{
	height_ = height;
}
void Suorakaide::setWidth(double width)
{
	width_ = width;
}

double Suorakaide::area() const
{
	return height_ * width_;
}