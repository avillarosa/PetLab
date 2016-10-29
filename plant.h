#include "pet.h"

#ifndef PLANT_H_
#define PLANT_H_

class Plant: protected Pet{
protected:

	int greenness;

public:
	Plant();
	~Plant();

	// Setter
	void set_greenness(int);

	// Getter
	int get_greenness();
};


#endif /* PLANT_H_ */
