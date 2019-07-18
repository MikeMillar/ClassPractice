#ifndef PERSON_H
#define PERSON_H
using namespace std;

class Person {
	string name;
	int age;
public:
	Person() : name("undefined"), age(0) {};
	Person(string name, int age) : name(name), age(age) {};
	string toString();
	void setName(string name);
	string getName();
};

#endif