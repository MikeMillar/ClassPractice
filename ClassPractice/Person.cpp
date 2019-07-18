#include <iostream>
#include "Person.h"

Person::Person() {
	name = "Michael";
}

string Person::toString() {
	return "Person's name is: " + name;
}

void Person::setName(string aName) {
	name = aName;
}

string Person::getName() {
	return name;
}