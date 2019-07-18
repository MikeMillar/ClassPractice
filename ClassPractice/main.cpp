#include <iostream>
#include <sstream>
#include "Cat.h"
#include "Dog.h"
#include "Person.h"

using namespace std;

int main() {
	cout << "Starting program ..." << endl;
	{
		Cat cat;
		cat.speak();
		cat.jump();
	}

	{
		Dog dog;
		dog.speak();
		dog.toggleHappy();
		dog.speak();
	}

	{
		Person person;
		cout << person.toString() << endl;
		Person person2("Cassy", 26);
		cout << person2.toString() << endl;
		Person person3("Sue", 32);
		cout << person3.toString() << endl;
	}

	// String Streams
	string name = "Bob";
	int age = 32;
	stringstream ss;
	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;
	string info = ss.str();
	cout << info << endl;


	cout << "Ending program ..." << endl;
	return 0;
}