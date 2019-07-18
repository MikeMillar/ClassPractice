#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person {
	string name;

public:
	Person();
	string toString();
	void setName(string aName);
	string getName();
};

#endif