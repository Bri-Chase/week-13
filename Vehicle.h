#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    // Constructor
    Vehicle(const string& manufacturer = "", int yearBuilt = 0);

    // Setters
    void setManufacturer(const string& manufacturer);
    void setYearBuilt(int yearBuilt);

    // Getters
    string getManufacturer() const;
    int getYearBuilt() const;

    // Display info
    virtual void displayInfo() const;
};

#endif 
