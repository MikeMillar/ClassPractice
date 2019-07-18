#include <iostream>
#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefigned";
	age = 0;
}

Person::Person(string aName, int aAge) {
	name = aName;
	age = aAge;
}

string Person::toString() {
	stringstream personInfo;
	personInfo << "Name: ";
	personInfo << name;
	personInfo << "; Age: ";
	personInfo << age;
	return personInfo.str();
}

void Person::setName(string aName) {
	name = aName;
}

string Person::getName() {
	return name;
}