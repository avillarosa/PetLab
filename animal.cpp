#include "animal.h"

// Default Constructor/Deconstructor
Animal::Animal(){};
Animal::~Animal(){};

// Setters
void Animal::set_gender(char gen){
	gender = gen;
}

void Animal::set_status(bool stat){
	status = stat;
}

// Getters
char Animal::get_gender(){
	return gender;
}

bool Animal::get_status(){
	return status;
}



