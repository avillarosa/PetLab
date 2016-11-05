#include "animal.h"

#ifndef DOG_H_
#define DOG_H_

class Dog: protected Animal{
public:
	void action(){
		cout << "Yum\n";
	}
};



#endif /* DOG_H_ */
