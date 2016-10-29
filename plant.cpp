#include "plant.h"

// Default Constructor/Deconstructor
Plant::Plant(){};
Plant::~Plant(){};

// Setter
void Plant::set_greenness(int green){
	greenness = green;
}

// Getter
int Plant:: get_greenness(){
	return greenness;
}


