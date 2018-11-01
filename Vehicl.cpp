#include "Vehicl.h"

Vehicle::Vehicle()
{
}


Vehicle::Vehicle (string m, int cyl, Person p): manufacturer(m),
                                                numCylinders(cyl), owner(p)
{
}


Vehicle::Vehicle(const Vehicle& theObject)
{
    manufacturer = theObject.manufacturer;
    numCylinders = theObject.numCylinders;
    owner = theObject.owner;
}


string Vehicle::getManufacturer() const
{
    return manufacturer;
}


int Vehicle::getCylinders() const
{
    return numCylinders;
}


Person Vehicle::getOwner() const
{
    return owner;
}


void Vehicle::setManufacturer (string m)
{
    manufacturer = m;
}


void Vehicle::setCylinders(int n)
{
    numCylinders = n;
}


void Vehicle::setOwner(Person p)
{
    owner = p;
}

void Vehicle::output()
{
    cout << "Owner: " << owner << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Number of Cylinders: " << numCylinders << endl;
}


Vehicle& Vehicle::operator=(const Vehicle& rtSide)
{
    manufacturer = rtSide.manufacturer;
    numCylinders = rtSide.numCylinders;
    owner = rtSide.owner;

    return *this;
}
