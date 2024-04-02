#include "Cube.h"
using namespace std;
//TODO: Write Cube constructors,
Cube::Cube(int side) : side(side) {
	updateVolume();
	updateSurfaceArea();
}

Cube::Cube() :side(0) {
	updateVolume();
	updateSurfaceArea();
}
//setter and getter for side
int Cube::getSide() {
	return side;
}

void Cube::setSide(int side) {
	this->side = side;
	updateVolume();
	updateSurfaceArea();
}

//As well as the inherited functions from the Shape class of 
//toString, updateVolume, and updateSurfaceArea
string  Cube::toString() {
	return" Cube with side length: " + to_string(side) + ", Volume: " + to_string(getVolume()) + ", Surface Area: " + to_string(getSurfaceArea());
}

void Cube::updateVolume() {
	volume = pow(side, 3); 
}

void Cube:: updateSurfaceArea() {
	surfaceArea = 6 * pow(side, 2);
}