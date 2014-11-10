#pragma once
#include "Kuvio.h"
class Ympyra :
	public Kuvio
{
public:
	Ympyra();
	Ympyra(double);
	Ympyra(const Ympyra&);
	Ympyra& operator=(const Ympyra&);
	~Ympyra();
	double getRadius() const;
	void setRadius(double);

	double area() const;
private:
	double radius_;
};

