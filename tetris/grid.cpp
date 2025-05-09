#include "grid.h"
#include <iostream>

Grid::Grid() {
	num_rows = 30;
	num_cols = 15;
	cell_size = 25;
	Initialize();
	colors = GetCellColors();
}

void Grid::Initialize() {
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_cols; j++) {
			grid[i][j] = 0;
		}
	}
}

void Grid::Print() {
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_cols; j++) {
			std::cout << grid[i][j] << " ";
		}
		std::cout << "\n";
	}
}

std::vector<Color> Grid::GetCellColors() {

	//the list of color for the 7 blocks 
	Color darkGrey = { 26, 31, 40, 255 };
	Color green = { 47, 230, 23, 255 };
	Color orange = { 226, 116, 17, 255 };
	Color red = { 232, 18, 18, 255 };
	Color yellow = { 237, 234, 4, 255 };
	Color purple = { 166, 0, 247, 255 };
	Color cyan = { 21, 204, 209, 255 };
	Color blue = { 13, 64, 216, 255 };

	//returning the vector of colors
	return {
		darkGrey,
		green,
		orange,
		red,
		yellow,
		purple,
		cyan,
		blue
	};
}

void Grid::Draw() {
	//i is the rows and j is the columns so x axis = j and y axis = i
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_cols; j++) {
			DrawRectangle(j * cell_size+1, i * cell_size + 1, cell_size - 1, cell_size - 1, colors[grid[i][j]]);
		}
	}
}