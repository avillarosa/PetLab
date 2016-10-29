#include "pet.h"

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal: protected Pet{
protected:
	char gender;
	bool status; // Indoor/Outdoor

public:
	Animal(){};
	~Animal(){};

	// Setters
	void set_gender(char gen){
		gender = gen;
	}
	void set_status(bool stat){
		status = stat;
	}

	// Getters
	char get_gender(){
		return gender;
	}
	char get_status(){
		return status;
	}
};


#endif /* ANIMAL_H_ */
