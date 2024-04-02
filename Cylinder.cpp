#define _USE_MATH_DEFINES
#include "Cylinder.h"

//TODO: Write Cylinder constructors
Cylinder::Cylinder(int radius, int height) : radius(radius), height(height) {
	updateVolume();
	updateSurfaceArea();
}
Cylinder::Cylinder() : radius(0), height(0) {
	updateVolume();
	updateSurfaceArea();
}
//setters and getters for radius and height
int Cylinder::getRadius() {
	return radius;
}
int Cylinder::getHeight() {
	return height; 
}

void Cylinder::setRadius(int r) {
	radius = r;
	updateVolume();
	updateSurfaceArea();
}

void Cylinder::setHeight(int h) {
	height = h;
	updateVolume();
	updateSurfaceArea();
}
string Cylinder::toString() {
	return "Cylinder with radius: " + to_string(radius) + ", height: " + to_string(height) + ", Volume: " + to_string(getVolume()) + ", Surface Area: " + to_string(getSurfaceArea());
}
//As well as the inherited functions from the Shape class of 
//toString, updateVolume, and updateSurfaceAreaI

void Cylinder::updateVolume() {
	volume = M_PI * pow(radius, 2) * height;
}

void Cylinder::updateSurfaceArea() {
	surfaceArea = (2 * M_PI * radius * height) + (2 * M_PI * pow(radius, 2));
}
