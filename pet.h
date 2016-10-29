#include <iostream>
#include <string>
using namespace std;

#ifndef PET_H_
#define PET_H_

// Person class for owner under pet class
class Person {
private:
	string name;

public:
	Person(){};
	~Person(){};

	// Setter
	void set_name(string n){
		name = n;
	}

	// Getter
	string get_name(){
		return name;
	}
};

class Pet{
protected:
	string name;
	int age;
	Person *owner;

public:
	Pet(){};
	~Pet(){};

	// Setters
	void set_name(string petName){
		name = petName;
	}
	void set_age(int petAge){
		age = petAge;
	}

	// Getters
	string get_name(){
		return name;
	}
	int get_age(){
		return age;
	}



};






#endif /* PET_H_ */
