#pragma once
#include "Kuvio.h"
class Suorakaide :
	public Kuvio
{
public:
	Suorakaide();
	Suorakaide(double, double);
	Suorakaide(const Suorakaide&);
	Suorakaide& operator=(const Suorakaide&);
	~Suorakaide();
	double getHeight() const;
	double getWidth() const;
	void setHeight(double);
	void setWidth(double);

	double area() const;
private:
	double height_;
	double width_;
};

