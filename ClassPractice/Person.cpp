#include <iostream>
#include <sstream>
#include "Person.h"

string Person::toString() {
	stringstream personInfo;
	personInfo << "Name: ";
	personInfo << name;
	personInfo << "; Age: ";
	personInfo << age;
	return personInfo.str();
}

void Person::setName(string name) {
	this->name = name;
}

string Person::getName() {
	return name;
}