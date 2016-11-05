#include "pet.h"
#include "animal.h"
#include "plant.h"
#include "rock.h"
#include "cat.h"
#include "dog.h"
#include "snake.h"
#include "fern.h"
#include "cactus.h"

int main(){


	Snake snek;
	Pet *pet1;

	reinterpret_cast<Snake*>(pet1)->action();


	return 0;
}
