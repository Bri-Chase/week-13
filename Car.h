#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    // Constructor
    Car(const string& manufacturer = "", int yearBuilt = 0, int numDoors = 0);

    // Setters and getters
    void setNumDoors(int numDoors);
    int getNumDoors() const;

    // Display info
    void displayInfo() const override;
};

#endif 
