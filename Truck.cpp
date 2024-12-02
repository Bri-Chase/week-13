#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(const string& manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}
