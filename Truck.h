#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    // Constructor
    Truck(const string& manufacturer = "", int yearBuilt = 0, int towingCapacity = 0);

    // Setters and getters
    void setTowingCapacity(int towingCapacity);
    int getTowingCapacity() const;

    // Display info
    void displayInfo() const override;
};

#endif 
