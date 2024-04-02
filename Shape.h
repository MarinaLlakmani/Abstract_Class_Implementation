#pragma once
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

class Shape
{
public:
	virtual ~Shape() {}
	double getVolume() { return volume; }
	double getSurfaceArea(){ return surfaceArea;}
	int compareVolume(Shape *other);
	int compareSurfaceArea(Shape *other);
	virtual string toString() = 0;

protected:
	double surfaceArea;
	double volume;
	virtual void updateVolume() = 0;
	virtual void updateSurfaceArea() = 0;
};
