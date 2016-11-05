#include "plant.h"

#ifndef FERN_H_
#define FERN_H_

class Fern: protected Plant{
public:
	void action(){
		cout << "(ferniness)\n";
	}
};

#endif /* FERN_H_ */
