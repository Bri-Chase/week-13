// Brianna Chase
// CIS 1202 501
// Prof. Melissa Goodall
// December 1st, 2024

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt;
    int numDoors;
    int towingCapacity;

    // Vehicle
    cout << "Enter the manufacturer of the vehicle: ";
    getline(cin, manufacturer);
    cout << "Enter the year the vehicle was built: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Info:" << endl;
    vehicle.displayInfo();

    // Car
    cout << "\nEnter the manufacturer of the car: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year the car was built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors on the car: ";
    cin >> numDoors;

    Car car(manufacturer, yearBuilt, numDoors);
    cout << "\nCar Info:" << endl;
    car.displayInfo();

    // Truck
    cout << "\nEnter the manufacturer of the truck: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year the truck was built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity of the truck (in lbs): ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nTruck Info:" << endl;
    truck.displayInfo();

    return 0;
}