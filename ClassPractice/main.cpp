#include <iostream>
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

	cout << "Ending program ..." << endl;
	return 0;
}