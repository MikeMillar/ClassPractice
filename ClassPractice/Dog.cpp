#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog() {
	cout << "Dog Born." << endl;
	happy = true;
}

Dog::~Dog() {
	cout << "Dog Died." << endl;
}

void Dog::speak() {
	if (happy) {
		cout << "Woof!!!" << endl;
	}
	else {
		cout << "Grrr!!" << endl;
	}	
}

void Dog::toggleHappy() {
	if (happy) {
		happy = false;
	}
	else {
		happy = true;
	}
}