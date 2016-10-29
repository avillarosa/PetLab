#include "pet.h"

#ifndef ROCK_H_
#define ROCK_H_

class Rock: protected Pet{
protected:
	int hardness;
	string cleavage;
	int color;
	string chemicalComp;

public:
	Rock(){};
	~Rock(){};

	// Setters
	void set_hardness(int hard){
		hardness = hard;
	}
	void set_cleavage(string cleave){
		cleavage = cleave;
	}
	void set_color(int col){
		color = col;
	}
	void set_chemicalComp(string cc){
		chemicalComp = cc;
	}

	// Getters
	int get_hardness(){
		return hardness;
	}
	string get_cleavage(){
		return cleavage;
	}
	int get_color(){
		return color;
	}
	string get_chemicalComp(){
		return chemicalComp;
	}
};

class Fornacite: protected Rock{
	Fornacite(){};
	~Fornacite(){}
};

class Fukalite: protected Rock{
	Fukalite(){};
	~Fukalite(){};
};

class Cummingtonite: protected Rock{
	Cummingtonite(){};
	~Cummingtonite(){}
};







#endif /* ROCK_H_ */
