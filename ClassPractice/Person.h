#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person {
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	string toString();
	void setName(string name);
	string getName();
};

#endif