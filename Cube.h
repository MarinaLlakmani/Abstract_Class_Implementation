#pragma once
#include "Shape.h"
class Cube :
    public Shape
{
public:
	int getSide();
	void setSide(int);
	Cube(int);
	Cube();
	virtual string toString();

private:
	int side;
	virtual void updateVolume();
	virtual void updateSurfaceArea();
};
