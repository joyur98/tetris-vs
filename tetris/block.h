#pragma once
#include <vector>
#include <map>
#include "position.h"

class Block {
public:
	Block();

	//id is the id of the block
	int id;

	//cells is a hashmap which contains the id and the position of the vector in rotation states
	std::map<int, std::vector<Position>> cells;

private:
	int cell_size;
	int rotation_state;



private:

};
