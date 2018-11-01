#include <iostream>
#include <string>
#include " Person.h"
#include "Vehicl.h"
#include "Truck.h"

using namespace std;

int main()
{
     string ownerName;
    string manufacturerName;
    int numCyl;
    double load;
    int towingCapacity;

    cout << endl;
    cout << "Testing Truck and Person classes..." << endl;
    cout << endl;

    cout << "First create 3 trucks..." << endl;
    cout << "Truck A ... " << endl;
    cout << "Enter the name of the owner: ";
    cin >> ownerName;
    cout << "Enter the number of cylinders: ";
    cin >> numCyl;
    cout << "Enter the name of the manufacturer: ";
    cin >> manufacturerName;
    cout << "Enter the load capacity: ";
    cin >> load;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;

    Truck truckA;
    Person ownerA;
    cout << "Using the mutator functions to set up the owner "
         << "and truck A..." << endl;
    ownerA.setName(ownerName);
    truckA.setOwner(ownerA);
    truckA.setManufacturer(manufacturerName);
    truckA.setCylinders(numCyl);
    truckA.setLoadCapacity(load);
    truckA.setTowingCapacity(towingCapacity);

    cout << endl;
    cout << "Enter data for Truck B ... " << endl;
    cout << "Enter the name of the owner: ";
    cin >> ownerName;
    cout << "Enter the number of cylinders: ";
    cin >> numCyl;
    cout << "Enter the name of the manufacturer: ";
    cin >> manufacturerName;
    cout << "Enter the load capacity: ";
    cin >> load;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;
    cout << endl;

    cout << "Using the constructor with 5 arguments to "
         << "create Truck B..." << endl;
    Person ownerB(ownerName);
    Truck truckB(manufacturerName, numCyl, ownerB, load, towingCapacity);

    cout << "Using the copy constructor to create Truck C as a copy "
         << "of Truck A..." << endl;
    Truck truckC(truckA);

    cout << "Using the accessor functions to print the truck info ..." << endl;
    cout << endl;
    cout << "Truck A ..." << endl;
    cout << "Owner: " << truckA.getOwner() << endl;
    cout << "Manufacturer: " << truckA.getManufacturer() << endl;
    cout << "Number of Cylinders: " << truckA.getCylinders() << endl;
    cout << "Load Capacity: " << truckA.getLoadCapacity() << endl;
    cout << "Towing Capacity: " << truckA.getTowingCapacity() << endl;
    cout << endl;

    cout << "Truck B ..." << endl;
    cout << "Owner: " << truckB.getOwner() << endl;
    cout << "Manufacturer: " << truckB.getManufacturer() << endl;
    cout << "Number of Cylinders: " << truckB.getCylinders() << endl;
    cout << "Load Capacity: " << truckB.getLoadCapacity() << endl;
    cout << "Towing Capacity: " << truckB.getTowingCapacity() << endl;
    cout << endl;

    cout << "Truck C ..." << endl;
    cout << "Owner: " << truckC.getOwner() << endl;
    cout << "Manufacturer: " << truckC.getManufacturer() << endl;
    cout << "Number of Cylinders: " << truckC.getCylinders() << endl;
    cout << "Load Capacity: " << truckC.getLoadCapacity() << endl;
    cout << "Towing Capacity: " << truckC.getTowingCapacity() << endl;
    cout << endl;



    return 0;
}
