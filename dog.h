#include "animal.h"

#ifndef DOG_H_
#define DOG_H_

class Dog: protected Animal{
	void eat_poop(){
		cout << "Yum\n";
	}
};



#endif /* DOG_H_ */
