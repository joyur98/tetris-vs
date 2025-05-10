#include "raylib.h"
#include "grid.h"
#include "blocks.cpp"

int main() {

	InitWindow(375, 750, "TETRIS");
	
	//sets the fps of the game
	SetTargetFPS(60);

	Grid grid = Grid();

	LBlock block = LBlock();

	while (!WindowShouldClose()) {
		BeginDrawing();
		
		grid.Draw();
		
		block.Draw();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}