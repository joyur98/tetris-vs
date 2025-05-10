#pragma once
#include <vector>
#include "raylib.h"

class Grid {

public:
	Grid();
	void Initialize();
	void Print();
	void Draw();
	int grid[30][15];
private:

	int num_rows;
	int num_cols;
	int cell_size;
	
	std::vector<Color> colors;

};