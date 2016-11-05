#include "animal.h"

#ifndef CAT_H_
#define CAT_H_

class Cat: protected Animal{
public:
	void action(){
		cout << "Maintain eye contact, assert dominance.\n";
	}
};



#endif /* CAT_H_ */
