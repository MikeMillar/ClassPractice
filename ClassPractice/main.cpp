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
		person.setName("Cassy");
		cout << person.toString() << endl;
		cout << "Name of person with get method: " << person.getName() << endl;
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