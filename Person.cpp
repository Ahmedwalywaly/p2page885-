#include " Person.h"


 // constructor (default)
Person::Person() : name("N/A") {
}

// constructor (full)
Person::Person (string theName) : name(theName) {
}

// constructory (copy)
Person::Person (const Person& theObject) : name(theObject.name) {
}

string Person::getName() const {
	return name;
}

void Person::setName(string newName) {
	name = newName;
}

Person& Person::operator=(const Person& rtSide) {
	this->name = rtSide.name;
	return *this;
}

istream& operator >>(istream& inStream, Person& personObject) {

	inStream >> personObject.name;
	return inStream;

}

ostream& operator <<(ostream& outStream, const Person& personObject) {

	outStream << personObject.name;
	return outStream;

}

