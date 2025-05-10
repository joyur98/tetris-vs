#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block {
public:

	Block();
	
	void Draw();

	void Move(int rows, int cols);

	std::vector<Position> GetCellPosition();

	//id is the id of the block
	int id;

	//cells is a hashmap which contains the id and the position of the block in rotation states
	std::map<int, std::vector<Position>> cells;

private:
	int cell_size;
	int rotation_state;
	std::vector<Color> colors;
	int row_offset;
	int col_offset;
};
