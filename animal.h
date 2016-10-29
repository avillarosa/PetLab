#include "pet.h"

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal: protected Pet{
protected:
	char gender;
	bool status; // Indoor/Outdoor

public:
	Animal();
	~Animal();

	// Setters
	void set_gender(char);
	void set_status(bool);

	// Getters
	char get_gender();
	bool get_status();
};

#endif /* ANIMAL_H_ */
