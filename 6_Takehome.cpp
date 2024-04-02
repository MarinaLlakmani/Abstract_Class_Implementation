#include <iostream>
#include "Cylinder.h"
#include "Cube.h"
#include "Sphere.h"
#include <vector>

using namespace std;

int main()
{
    //Create three shape pointers, one of each subclass
    Shape *first = new Cube(6);
    Shape* second = new Cylinder(5,5);
    Shape* third = new Sphere(12);

    //Put them in a vector together
    vector<Shape*> v = { first, second, third };

    //Call their unique inherited toString functions
    for (Shape* s : v) {
        cout << s->toString() << endl;
    }

    //Use the compareVolume function which is defined in Shape.cpp
    int cubeCylinderV = first->compareVolume(second);
    if (cubeCylinderV == 1) {
        cout << "The Cube has more volume than the Cylinder" << endl;
    }
    else if (cubeCylinderV == -1) {
        cout << "The Cylinder has more volume than the Cube" << endl;
    }
    else if (cubeCylinderV == 0) {
        cout << "The Cube and the Cylinder have the same volume" << endl;
    }
    
    //Use the compareSurfaceArea function which is defined in Shape.cpp
    int cubeSphereSA = first->compareSurfaceArea(third);
    if (cubeSphereSA == 1) {
        cout << "The Cube has more surface area than the Sphere" << endl;
    }
    else if (cubeSphereSA == -1) {
        cout << "The Sphere has more surface area than the Cube" << endl;
    }
    else if (cubeSphereSA == 0) {
        cout << "The Sphere and the Cube have the same surface area" << endl;
    }
    return 0;
}
