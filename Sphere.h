#pragma once
#include "Shape.h"
class Sphere :
   public Shape
{
public:
	int getRadius();
	void setRadius(int);
	Sphere(int);
	Sphere();
	virtual string toString();

private:
	int radius;
	virtual void updateVolume();
	virtual void updateSurfaceArea();
};
