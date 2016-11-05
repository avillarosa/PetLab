#include "animal.h"

#ifndef SNAKE_H_
#define SNAKE_H_

class Snake: protected Animal{
public:
	void action (){
		cout << "snek snek snek\n";
	}
};



#endif /* SNAKE_H_ */
