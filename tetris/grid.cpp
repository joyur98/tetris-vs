#include "grid.h"
#include <iostream>

Grid::Grid() {
	num_rows = 30;
	num_cols = 15;
	cell_size = 25;
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