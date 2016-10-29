#include "plant.h"

#ifndef CACTUS_H_
#define CACTUS_H_

class Cactus: protected Plant{
public:
	void poke(){
		cout << "Poke.\n";
	}
};

#endif /* CACTUS_H_ */
