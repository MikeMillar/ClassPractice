#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person {
	string name;
	int age;
public:
	Person();
	Person(string aName, int aAge);
	string toString();
	void setName(string aName);
	string getName();
};

#endif