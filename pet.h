#include <iostream>
#include <string>
using namespace std;

#ifndef PET_H_
#define PET_H_

// Person class for owner under pet class
class Person {
public:
	string name;
};

class Pet{
protected:
	string petName;
	int age;
	Person *owner;

public:
	Pet(){age = 0; owner = NULL;};
	~Pet(){};

	// Setters
	void set_name(string pName){
		petName = pName;
	}
	void set_age(int pAge){
		age = pAge;
	}

	// Getters
	string get_name(){
		return petName;
	}
	int get_age(){
		return age;
	}
	Person *get_owner(string na){
		Person *ownPtr = new Person;
		ownPtr->name = na;

		return ownPtr;

	}


};

#endif /* PET_H_ */
