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

	//this method returns a vector of colors for the different blocks
	std::vector<Color> GetCellColors();


	int num_rows;
	int num_cols;
	int cell_size;
	
	std::vector<Color> colors;

};