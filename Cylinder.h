#include "Shape.h"
class Cylinder: public Shape{
public:
	int getRadius();
	int getHeight();
	void setRadius(int r);
	void setHeight(int h);
	Cylinder(int radius, int height);
	Cylinder();
	virtual string toString();

private:
	int radius;
	int height;
	virtual void updateVolume();
	virtual void updateSurfaceArea();
};
