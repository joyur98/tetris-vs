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


void Grid::Draw() {
	//i is the rows and j is the columns so x axis = j and y axis = i
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_cols; j++) {
			DrawRectangle(j * cell_size+1, i * cell_size + 1, cell_size - 1, cell_size - 1, colors[grid[i][j]]);
		}
	}
}