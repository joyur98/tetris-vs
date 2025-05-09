#pragma once

class Grid {

public:
	Grid();
	void Initialize();
	void Print();
	int grid[30][15];
private:
	int num_rows;
	int num_cols;
	int cell_size;

};