#include "Shape.h"

//TODO: Write compareVolume and compareSurfaceArea
//Using Takehome Assignment 2 as a starting point
//Note that this one takes a Shape pointer as argument
Shape::Shape() : surfaceArea(0.0), volume(0.0) {
   
}
int Shape::compareVolume(Shape* other) {

    if (this->getVolume() < other->getVolume()) {
        return -1;
    }
    else if (this->getVolume() > other->getVolume()) {
        return 1; 
    }
    else {
        return 0; 
    }
}


int Shape::compareSurfaceArea(Shape* other) {

    if (this->getSurfaceArea() < other->getSurfaceArea()) {
        return -1; 
    }
    else if (this->getSurfaceArea() > other->getSurfaceArea()) {
        return 1; 
    }
    else {
        return 0; 
    }
}