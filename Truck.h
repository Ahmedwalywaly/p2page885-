#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include <string>
#include " Person.h"
#include "Vehicl.h"
#include "Truck.h"


using namespace std;

class Truck : public Vehicle
{
public:
    Truck();
    Truck(string m, int cyl, Person p, double load, int tow);
    Truck(const Truck& theObject);
    double getLoadCapacity() const;
    int getTowingCapacity() const;
    void setLoadCapacity(double newLoad);
    void setTowingCapacity(int newTowing);

    void output();
    // Outputs the data members appropriately labeled.

    Truck& operator=(const Truck& rtSide);
private:
    double loadCapacity;
    int towingCapacity;
};

#endif // TRUCK_H
