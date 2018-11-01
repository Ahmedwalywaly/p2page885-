#ifndef VEHICL_H
#define VEHICL_H
#include <iostream>
#include <string>
#include " Person.h"
#include "Truck.h"

using namespace std;


class Vehicle
{
    public:
    Vehicle();
    Vehicle(string m, int cyl, Person p);
    Vehicle(const Vehicle& theObject);
    string getManufacturer() const;
    int getCylinders() const;
    Person getOwner() const;
    void setManufacturer(string maker);
    void setCylinders(int cylinders);
    void setOwner (Person p);
       void output();
    // Outputs the data members of the class appropriately labeled

    Vehicle& operator=(const Vehicle& rtSide);


    protected:

    private:
    string manufacturer;
    int numCylinders;
    Person owner;
};

#endif // VEHICL_H
