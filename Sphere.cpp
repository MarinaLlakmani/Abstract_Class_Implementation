#define _USE_MATH_DEFINES
#include "Sphere.h"

//TODO: Write Sphere constructors, 
Sphere::Sphere(int radius) : radius(radius) {
	updateVolume();
	updateSurfaceArea();
}
Sphere::Sphere() : radius(0) {
	updateVolume();
	updateSurfaceArea();
}
//setter and getter for radius
int Sphere::getRadius() {
	return radius;
}

void Sphere::setRadius(int radius) {
	this->radius = radius;
	updateVolume();
	updateSurfaceArea();
}
//As well as the inherited functions from the Shape class of 
//toString, updateVolume, and updateSurfaceArea

string Sphere::toString() {
	return"Sphere with radius: " + to_string(radius) + ", Volume: " + to_string(getVolume()) + ", Surface Area: " + to_string(getSurfaceArea());
}

void Sphere::updateVolume() {
	volume = ((4.0 / 3.0) * M_PI * pow(radius, 3));
}

void Sphere::updateSurfaceArea() {
	surfaceArea = (4.0 * M_PI * pow(radius, 2));
}