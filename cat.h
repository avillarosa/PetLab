#include "animal.h"

#ifndef CAT_H_
#define CAT_H_

class Cat: protected Animal{
public:
	void knock_shit_off_table(){
		cout << "Maintain eye contact, assert dominance.\n";
	}
};



#endif /* CAT_H_ */
