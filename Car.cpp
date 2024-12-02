#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string& manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors << endl;
}
