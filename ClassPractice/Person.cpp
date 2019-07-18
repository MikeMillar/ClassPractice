#include <iostream>
#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefigned";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

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