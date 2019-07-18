#include <iostream>
#include "Cat.h"
#include "Dog.h"

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

	cout << "Ending program ..." << endl;
	return 0;
}